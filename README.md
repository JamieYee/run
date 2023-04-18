树莓派教程

需要连接HDMI 设置账号密码连接wifi

设置VNC和SSH

sudo raspi-config Interfacing Options


[树莓派安装docker  使用脚本安装](https://yeasy.gitbook.io/docker_practice/install/raspberry-pi#shi-yong-jiao-ben-zi-dong-an-zhuang)

[处理How to fix docker: Got permission denied issue](https://stackoverflow.com/questions/48957195/how-to-fix-docker-got-permission-denied-issue)

树莓派快速安装portainer中文版

docker run -d --restart=always --name="portainer" -p 9000:9000 -v /var/run/docker.sock:/var/run/docker.sock -v portainer_data:/data 6053537/portainer-ce:linux-arm64

树莓派安装Docker-compose

sudo curl -L "https://github.com/docker/compose/releases/download/v2.17.2/docker-compose-$(uname -s)-$(uname -m)" -o /usr/local/bin/docker-compose

添加可执行权限

sudo chmod +x /usr/local/bin/docker-compose

测试安装结果

docker-compose --version
