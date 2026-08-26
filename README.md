# SukiSU Ultra OTA 掉 Root 恢复备忘录（macOS）

## 1. 提取 init_boot.img

```bash
brew install payload-dumper-go
```

解压与当前系统版本一致的完整卡刷包，在终端进入 `payload.bin` 所在目录。

提取 `init_boot.img`：

```bash
payload-dumper-go -p init_boot -o extracted_init_boot payload.bin
```

提取结果位于 `extracted_init_boot/init_boot.img`。

## 2. 使用 SukiSU Ultra 修补

打开 SukiSU Ultra：

```text
LKM 修补/安装
→ 选择并修补文件
→ 选择提取出的 init_boot.img
```

修补完成后会生成：

```text
kernelsu_patched_xxx.img
```

## 3. 进入 Fastboot 并刷入当前槽位

```bash
adb reboot bootloader
```

确认设备连接：

```bash
fastboot devices
```

获取当前槽位：

```bash
fastboot getvar current-slot
```

将 `<当前槽位>` 替换为上一步获取到的 `a` 或 `b`：

```bash
fastboot flash init_boot_<当前槽位> kernelsu_patched_xxx.img
fastboot reboot
```

## 系统更新备注

> 如果系统更新使用全量包：全量包安装完成并提示重启时，先不要重启。打开
> SukiSU Ultra，选择“安装到未使用的槽位”，安装完成后再重启进入新系统。

> 如果系统更新提示“验证时间戳失败”：先关闭 `Play Integrity Fix` 和
> `TeeSimulator` 模块，然后重新尝试更新。

> 字库备份压缩文件密码：u8voUPBoYutzPsUDRHPT
