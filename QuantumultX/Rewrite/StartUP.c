// ==UserScript==
// @ScriptName        QX去开屏广告计划 V2.0
// @Author            @ddgksf2013, @blackmatrix7, @app2smile, @DivineEngine, @kyle, @Nick-workflow, @kkpp, @ZhangJun
// @TgChannel         https://t.me/ddgksf2021
// @TgBot             https://t.me/ddgksf2013_bot
// @WechatID          公众号墨鱼手记
// @UpdateTime        2022-11-11
// @Please            如需引用请注明出处，谢谢合作！
// @Function          去除APP首页启动广告和应用内广告，如果有需要的去除广告的APP，可以公众号后台直接回复
// @ExtraTxt          Only provide the removal of open-screen advertisements for personally used apps
// @Attention         QuantumultX能去广告，不代表能去所有广告！
// @Attention         此配置不包含任何银行类APP的去广告
// @Attention         如果广告仍然存在，请卸载应用重新安装，还是不行则表示规则里没有
// @ScriptURL         https://codeberg.org/ddgksf2013/Cuttlefish/raw/branch/master/Rewrite/AdBlock/StartUp.conf
// ==/UserScript==


hostname = ios.sspai.com, zconfig.alibabausercontent.com, g.alicdn.com, api.touker.com, mpcs.suning.com, api.pinduoduo.com, api.yangkeduo.com, easyreadfs.nosdn.127.net, sp.kaola.com, gw.kaola.com, mime.baidu.com, learn.chaoxing.com, mapi.dangdang.com, api.dangdang.com, open.e.kuaishou.com, client.qunar.com, mpos-pic.helipay.com, dili.bdatu.com, wap.ngchina.cn, ih2.ireader.com, adpai.thepaper.cn, api.haohaozhu.cn, list-app-m.i4.cn, api.xiachufang.com, jdread-api.jd.com, peisongapi.meituan.com, *gaoqingdianshi.com, *.kakamobi.cn, api.jxedt.com, slapi.oray.net, r.inews.qq.com, app.yinxiang.com, mapi.appvipshop.com, syh.zybang.com, cdn.cmgadx.com, kad.gotokeep.com, api.internetofcity.cn, img.meituan.net, lcen.xiaote.net, venus.yhd.com, api.shenyin.name, api.aliyundrive.com, mage*.if.qidian.com, god.gameyw.netease.com, m.ibuscloud.com, e.dangdang.com, app2.autoimg.cn, adproxy.autohome.com.cn, discardrp.umetrip.com, startup.umetrip.com, bp-api.bestv.com.cn, explorer.tratao.com, overseas.weico.cc, 118.178.214.118, dapis.mting.info, acs.m.taobao.com, open3.vistastory.com, ssp.dzh.com.cn, api-access.pangolin-sdk-toutiao.com, maicai.api.ddxq.mobi, www.meituan.com, client.mail.163.com, api.izuiyou.com, appapi.huazhu.com, api.wfdata.club, interface*.music.163.com, api.psy-1.com, res.kfc.com.cn, mp.weixin.qq.com, security.wechat.com, weixin110.qq.com, cdn.*.chelaileapp.cn, api.coolapk.com, edith.xiaohongshu.com, app3.qdaily.com, daoyu.sdo.com, img.jiemian.com, ccsp-egmas.sf-express.com, *.laichon.com, app.ap.d3yuiw4.com, www.i3zh.com, api.yikaobang.com.cn, api-ad-product.huxiu.com, jad-api.jin10.com, mob.mddcloud.com.cn, appactive.1234567.com.cn, rtbapi.douyucdn.cn, service.busi.inke.cn, gab.122.gov.cn, dispatcher.camera360.com, app.api.versa-ai.com, open.taou.com, api.taou.com, track.mm.taou.com, app.dewu.com, data-collector.soulapp.cn, api.gamer.com.tw, beta-api.crunchyroll.com, api.vistopia.com.cn, pss.txffp.com, m.sd.10086.cn, gw.alicdn.com, helper.2bulu.com, 47.100.65.202, api.weibo.cn, mapi.weibo.com, *.uve.weibo.com, new.vip.weibo.cn, wap.js.10086.cn, tagit.hyhuo.com, top-widgets-api.xiaozujian.com, tel.mangaapi.manhuaren.com, apis.lifeweek.com.cn, support.you.163.com, yanxuan.nosdn.127.net, *.peopleapp.com, new-app-api.ylyk.com, gw.aihuishou.com, *.58cdn.com.cn, app.58.com, static.zhihu.com, creditcardapp.bankcomm.com, res.xiaojukeji.com, 116.85.2.15, 116.85.2.14, lchttpapi.xczim.com, business.msstatic.com, mangaapi.manhuaren.com, api.gotokeep.com, api.kkmh.com, *.chelaile.net.cn, api.jr.mi.com, api.m.mi.com, guanyu.longfor.com, pages.xiaohongshu.com, www.xiaohongshu.com, elemecdn.com, fuss10.elemecdn.com, www1.elecfans.com, m.tuniu.com, mapi.mafengwo.cn, api.xiaoyi.com, api.douban.com, otheve.beacon.qq.com, mapi.sfbest.com, m5.amap.com, api.mwee.cn, sso.ifanr.com, s3plus.meituan.net, flowplus.meituan.net, p*.meituan.net, testflight.apple.com, rich.kuwo.cn, *.kwcdn.kuwo.cn, mobilead.kuwo.cn, ms.jr.jd.com, wmapi.meituan.com, appconf.mail.163.com, dl-cu-hz.lechange.cn, bdsp-x.jd.com, dsp-x.jd.com, api.m.jd.com, fbchina.flipchina.cn, zone.guiderank-app.com, ad.12306.cn, homefront.qunar.com, afd.baidu.com, *.bdstatic.com, j-image.missfresh.cn, ma-adx.ctrip.com, m.ctrip.com, mbd.baidu.com, img.rr.tv, api.rr.tv, capis.didapinche.com, capis*.didapinche.com, *.hoopchina.com, goblin.hupu.com, spclient.wg.spotify.com


# ======= ~ ====== #
#以下重写请自行添加，本重写引用不含【喜马拉雅、哔哩哔哩、微博、微博国际版、百度贴吧、知乎、什么值得买】去广告
;https://codeberg.org/ddgksf2013/Cuttlefish/raw/branch/master/Rewrite/AdBlock/Ximalaya.conf
;https://codeberg.org/ddgksf2013/Cuttlefish/raw/branch/master/Rewrite/AdBlock/Bilibili.conf
;https://codeberg.org/ddgksf2013/Cuttlefish/raw/branch/master/Rewrite/AdBlock/Weibo.conf
;https://codeberg.org/ddgksf2013/Cuttlefish/raw/branch/master/Rewrite/AdBlock/WeiboLite.conf
;https://github.com/app2smile/rules/raw/master/module/tieba-qx.conf
;https://github.com/blackmatrix7/ios_rule_script/raw/master/script/zhihu/zhihu_plus.qxrewrite
;https://github.com/blackmatrix7/ios_rule_script/raw/master/script/smzdm/smzdm_remove_ads.qxrewrite


# ======= 0~9 ======= #
# > 58tongcheng
^https?:\/\/.+\.58cdn\.com\.cn\/brandads\/ url reject
^https?:\/\/app\.58\.com\/api\/home\/advertising\/ url reject
^https?:\/\/app\.58\.com\/api\/home\/appadv\/ url reject


# ======= A ======= #
# > aihuishou
^https?:\/\/gw.aihuishou.com\/app-portal\/home\/getadvertisement url reject
# > appso
^https?:\/\/sso.ifanr.com\/jiong\/IOS\/appso\/splash\/ url reject
# > aiqiyi
^https?:\/\/.+\/cdn\/qiyiapp\/\d{8}\/.+&dis_dz= url reject-img
^https?:\/\/.+\/cdn\/qiyiapp\/\d{8}\/.+&z=\w url reject-img
^https?:\/\/.+\/videos\/other\/ url reject
^https?:\/\/iface2\.iqiyi\.com\/fusion\/3\.0\/fusion_switch url reject-img
# > alibaba
^https?:\/\/acs\.m\.taobao\.com\/gw\/mtop\.alibaba\.advertisementservice\.getadv\/ url reject
# > aliyunpan
^https?:\/\/api\.aliyundrive\.com\/apps\/v\d\/users\/apps\/widgets$ url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/alidrive.js

# ======= B ======= #
# > baiduditu
^https:\/\/dss0\.bdstatic\.com\/.+/tam-ogel\/.+\.(jpg|mp4) url reject
^https?:\/\/bp-api\.bestv\.com\.cn\/cms\/api\/free\/open\/advertisingV2 url reject
^https?:\/\/bp-api\.bestv\.com\.cn\/cms\/api\/c\/home\/searchMark url reject
# > baidufanyi
^https?:\/\/mime\.baidu\.com\/v\d\/IosStart\/getStartInfo url reject
^https?:\/\/mime\.baidu\.com\/v\d\/activity\/advertisement url reject


# ======= C ======= #
# > chelaile@ddgksf2013
^https?:\/\/cdn\.\w{3}\.chelaileapp\.cn\/(api\/)?adpub url reject-dict
^https?:\/\/api.chelaile.net.cn\/adpub\/ url reject
^https?:\/\/api.chelaile.net.cn\/goocity\/advert\/ url reject
^https?:\/\/atrace.chelaile.net.cn\/adpub\/ url reject
^https?:\/\/atrace.chelaile.net.cn\/exhibit\?&adv_image url reject
^https?:\/\/pic1.chelaile.net.cn\/adv\/ url reject
# > Crunchyroll@Marcio2536
https://beta-api.crunchyroll.com/cms url response-body offset_ms":\d+ response-body offset_ms":99999999999999
# > chaoxingxuexitong
^https?:\/\/learn\.chaoxing\.com\/apis\/service\/appConfig url reject


# ======= D ======= #
# > douban
^https?:\/\/api\.douban\.com\/v2\/app_ads\/splash url reject-dict
^https?:\/\/api\.douban\.com\/b.*\/common_ads\?.* url reject-dict
# > dingdongmaicai
^https?:\/\/maicai\.api\.ddxq\.mobi\/advert\/ url reject
# > didachuxing
^https?:\/\/capis(-?\w*)?\.didapinche\.com\/ad\/cx\/startup\? url reject
# > didichuxing@ddgksf2013
https?://res\.xiaojukeji\.com\/resapi\/activity\/mget url reject-dict
https?:\/\/res\.xiaojukeji\.com\/resapi\/activity\/get(Ruled|Preload|PasMultiNotices) url reject
# > daoyu@ddgksf2013
^https?:\/\/daoyu\.sdo\.com\/api\/userCommon\/getAppStartAd url reject
# > douyu@kyle
^https?:\/\/rtbapi\.douyucdn\.cn\/japi\/sign\/app\/getinfo url reject
# > dewu@kyle
^https:\/\/app\.dewu\.com\/api\/v1\/app\/advertisement\/ url reject
# > donghuafeng@NobyDa
;^https:\/\/api\.gamer\.com\.tw\/mobile_app\/anime\/v\d/(token|m3u8).php\? url script-response-body https://raw.githubusercontent.com/NobyDa/Script/master/Bahamut/BahamutAnimeAds.js
# > dazhihui
^https?://ssp\.dzh\.com\.cn/v2api/adgroupjson url reject
# > dangdangyuedu
^https?:\/\/e.dangdang.com\/media\/api.+\?action=getDeviceStartPage url reject
^https?:\/\/api\.dangdang\.com\/mapi\d\/mobile\/init url reject
^https?+:\/\/mapi\.dangdang\.com\/index\.php\?action=init url reject
^https?+:\/\/e\.dangdang\.com\/.+?getDeviceStartPage url reject
# > dianshijia
^https?:\/\/api\.gaoqingdianshi\.com\/api\/v\d\/ad\/ url reject
^https?:\/\/cdn\.dianshihome\.com\/static\/ad\/ url reject



# ======= E ======= #
# > elema
^https?:\/\/elemecdn.com\/.+\/sitemap url reject
^https?:\/\/fuss10.elemecdn.com\/.+\/w\/640\/h\/\d{3,4} url reject
^https?:\/\/fuss10.elemecdn.com\/.+\/w\/750\/h\/\d{3,4} url reject
^https?:\/\/fuss10.elemecdn.com\/.+.mp4 url reject
^https?:\/\/www1.elecfans.com\/www\/delivery\/ url reject


# ======= F ======= #
# > feizhu
^https?:\/\/gw\.alicdn\.com\/imgextra\/\w{2}\/[\w!]+-\d-tps-\d{3}-\d{4}\.(jpg|png)$ url reject
# > feikechaguan@ddgksf2013
^https?:\/\/47\.100\.65\.202\/source\/plugin\/mobile\/mobile\.php\?module=advis url reject
^https?:\/\/47\.100\.65\.202\/api\/mobile\/index\.php\?version=\d&mobile=yes&module=basicdata&type=forumlist url response-body adv response-body ddgksf2013
^https?:\/\/47\.100\.65\.202\/source\/plugin\/mobile\/mobile\.php\?module=threadpost&.+?&page=1 url script-response-body https://codeberg.org/ddgksf2013/Cuttlefish/raw/branch/master/Crack/fly.js


# ======= G ======= #
# > gaidepaihang@ddgksf2013
https://zone.guiderank-app.com/guiderank-web/app/ad/listLaunchADByCity.do url reject
# > gaode
^https?:\/\/m5.amap.com\/ws\/valueadded\/ url reject
# > guanyu@ddgksf2013
https://guanyu.longfor.com/app-server/api/v1/main/start url reject
# > guojiadili
^https?:\/\/dili\.bdatu\.com\/jiekou\/ad url reject
^https?+:\/\/wap\.ngchina\.cn\/news\/adverts url reject


# ======= H ======= #
# > huazhu
^https?:\/\/appapi\.huazhu\.com:\d{4}\/client\/app\/getAppStartPage\/ url reject
# > hupu@ddgksf2013
^https?:\/\/i\d\.hoopchina\.com\.cn/blogfile\//d+\//d+\/BbsImg\.(?<=(big.(png|jpg)))$ url reject-img
^https?:\/\/games\.mobileapi\.hupu\.com\/.+\/(search|interfaceAdMonitor|status|hupuBbsPm)/(hotkey|init|hupuBbsPm)\. url reject-img
^https?:\/\/games\.mobileapi\.hupu\.com\/interfaceAdMonitor url reject-img
^https?:\/\/goblin\.hupu\.com\/.+\/interfaceAd\/getOther url reject
^https?:\/\/i1\.hoopchina\.com\.cn\/blogfile\/.+_\d{3}x\d{4} url reject-img
# > hongbanbao@ddgksf2013
https://fbchina.flipchina.cn/v2/ad/query/* url reject
# > huyazhibo
^http?:\/\/business\.msstatic\.com\/advertiser\/material url reject
^http?:\/\/business\.msstatic\.com\/advertiser\/material url reject-dict
# > haoqixinribao@ddgksf2013
^https?:\/\/app3\.qdaily\.com\/app\d\/boot_advertisements\.json url reject
# > huxiu@ddgksf2013
^https:\/\/api-ad-product\.huxiu\.com\/Api\/Product\/SDK\/Advert\/Query\/queryAdvertListInfo url reject
# > huangyouxiangji@ddgksf2013
^https?:\/\/api4\.bybutter\.com\/v\d\/app\/placements\/\d\/advertisements url reject
# > hanglvzongheng@ddgksf2013
^http?:\/\/(discardrp|startup)\.umetrip\.com\/gateway\/api\/umetrip\/native url reject
# > hangzhougongjiao
^https?:\/\/m.ibuscloud.com\/v2\/app\/getStartPage url reject
# > haohaozhu
^https?:\/\/api\.haohaozhu\.cn\/index\.php\/home\/AppInit\/getStartPhoto url reject
# > huabao
^https?:\/\/api\.touker\.com\/v2\/IAdvertisementAPI\.queryStartAdvertisement url reject


# ======= I ======= #
# > i4
^https?:\/\/list-app-m\.i4\.cn\/getopfstadinfo\.xhtml url reject
# > i3@ddgksf2013
#^https?:\/\/www\.i3zh\.com url response-body cm-pop-up-banners response-body ddgksf2013


# ======= J ======= #
# > jingdongdushu
https://jdread-api.jd.com/jdread/api/channel/module/opens url reject-200
https://jdread-api.jd.com/jdread/api/popup url reject-200
# > jingxi
^https?:\/\/api\.m\.jd\.com\/api\?functionId=delivery_show url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/startup.js
# > jingdong
^https?:\/\/api\.m\.jd\.com\/client\.action\?functionId=start url reject-dict
^https?:\/\/api\.m\.jd.com\/client\.action\?functionId=queryMaterialAdverts url reject
^https?:\/\/(bdsp-x|dsp-x)\.jd\.com\/adx\/ url reject
^https?:\/\/api\.m\.jd\.com\/client\.action\?functionId=hotWords url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/jd_json.js
^https?:\/\/api\.m\.jd\.com\/client\.action\?functionId=hotSearchTerms url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/jd_json.js
# > jingdongjinrong
^https?:\/\/ms\.jr\.jd\.com\/gw\/generic\/aladdin\/(new)?na\/m\/getLoadingPicture url reject
# > jingdonglite
^https?:\/\/api\.m\.jd\.com\/client\.action\?functionId=lite_advertising url response-body jdLiteAdvertisingVO response-body ddgksf2013
^https?:\/\/api\.m\.jd\.com\/client\.action\?functionId=lite_SmartPush url response-body pushData response-body ddgksf2013
# > jiaohangmaidanba@HotKids
^https?:\/\/creditcardapp\.bankcomm\.com\/mapp\/common\/queryGuidePageAds\.do$ url reject-200
^https?:\/\/creditcardapp\.bankcomm\.com\/mapp\/common\/getPopAds\.do$ url reject-200
# > jiemianxinwen@ddgksf2013
^https?:\/\/img\.jiemian\.com\/ads\/ url reject
# > jinshi@kyle
^https?:\/\/jad-api\.jin10\.com\/ad url reject
# > JsCMCC@ddgksf2013
^https?+:\/\/wap\.js\.10086\.cn\/jsmccClient\/cd\/market_content\/api\/v\d\/market_content\.page\.query url reject-200
# > 12123@kyle
^https:\/\/gab\.122\.gov\.cn\/eapp\/m\/sysquery url reject
# > jijianhuilv
^https?:\/\/explorer\.tratao\.com\/api\/client\/v4\/xtransfer\/ad\/ url reject
# > jiaxiaoediantong
^https?:\/\/api\.jxedt\.com\/ad\/ url reject
# > jiakaobaodian
^https?:\/\/\w+\.kakamobi\.cn\/api\/open\/v\d\/advert-sdk\/ url reject



# ======= K ======= #
# > kfc
^https?:\/\/res.kfc.com.cn\/advertisement\/ url reject
# > kuwo
^https?:\/\/rich\.kuwo\.cn\/AdService\/kaiping\/.+ url reject
^https?:\/\/.+\.kwcdn\.kuwo\.cn\/star\/upload\/.+ url reject
^https?:\/\/mobilead\.kuwo\.cn\/EcomResourceServer\/adBubble\/.+ url reject
# > kuaikan
^https?:\/\/api.kkmh.com\/v\d\/(ad|advertisement)\/ url reject
# > Keep@ddgksf2013
^https?:\/\/api\.gotokeep\.com\/kprime\/v\d\/popups\/primeGuide url reject
^https?:\/\/kad\.gotokeep\.com\/op-engine-webapp\/v\d\/ad url reject
^https?:\/\/api.gotokeep.com/cauchy/growth/init url reject
^https?:\/\/api\.gotokeep\.com\/search\/v\d\/default\/keyword\/list url reject
^https?:\/\/api\.gotokeep\.com\/search\/v\d\/hotword\/list url reject
^https?:\/\/api\.gotokeep\.com\/search\/v\d\/hotCourse\/list url reject
^https?:\/\/api\.gotokeep\.com\/op-engine-webapp\/v\d\/ad url reject
^https?:\/\/api\.gotokeep\.com\/ads\/v\d\/ads\/preload url reject
^https?:\/\/api\.gotokeep\.com\/training\/box\/config url reject
^https?:\/\/api\.gotokeep\.com\/anno\/v\d\/upgrade\/check url reject
^https?:\/\/api\.gotokeep\.com\/athena\/v\d\/people\/my url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/keepStyle.js
^https?:\/\/api\.gotokeep\.com\/config\/v\d\/basic url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/keepStyle.js
https://api.gotokeep.com/homepage/v7/tab/find url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/keepStyle.js
https://api.gotokeep.com/nuocha/course/v2/\w+/preview url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/keepStyle.js
# > kuan@kk pp
^https?:\/\/api\.coolapk\.com\/v6\/(feed\/(replyList|detail)|main\/indexV8|dataList) url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/coolapk.js
^https?://api-access\.pangolin-sdk-toutiao\.com/api/ad/union/sdk url reject
# > kuan@ddgksf2013
^https?:\/\/api\.coolapk\.com\/v6\/search\?.*type=hotSearch url reject-dict
# > kanlixiang
^https?:\/\/api\.vistopia\.com\.cn\/api\/v\d\/home\/advertisement url reject-dict
# > kantianxia@ddgksf2013
https://open3.vistastory.com/v3/api/index/loading_ad url reject
https://open3.vistastory.com/v3/api.*get_popup url reject
# > kuaishou
^https:\/\/open\.e\.kuaishou\.com\/rest\/e\/v3\/open\/univ url reject


# ======= L ======= #
# > LinXi@ddgksf2013
^https?:\/\/api\.internetofcity\.cn\/api\/resource\/anon\/popups\/getSplashList url reject-dict
^https?:\/\/api\.internetofcity\.cn\/api\/resource\/anon\/popups\/getList url reject-dict
# > LeCheng
https://dl-cu-hz.lechange.cn/oms-online/advertisementPush/* url reject
# > Block 100@ddgksf2013
https://tagit.hyhuo.com/recover/list url reject
# > LaiChon@ddgksf2013
^https?:\/\/(mobile|shop)\.laichon\.com\/api\/(v1\/goods\/goodsList|exposureAdvStatistics|getWebAdvList) url reject-dict
# > LiangBulU@ddgksf2013
# host-suffix, admobile.top, reject
https?:\/\/helper\.2bulu\.com\/(greenPea\/queryTasks|proSpecial\/allData|saveSplashFrequencyStatistics|getPopInfo|getAppEntranceConfig|promote\/list|getSplash|outing\/reqFoundNewList|outing\/reqIndex) url reject
# > LanRenTingShu
^https?:\/\/.*\/yyting\/advertclient\/ClientAdvertList.action url reject


# ======= M ======= #
# > MeiRiYouXian
^https:\/\/j-image\.missfresh\.cn\/img_(.+)\.gif$ url reject
^https:\/\/j-image\.missfresh\.cn\/img_(.+)\.(jpg|jpeg|gif|png)\?iopcmd=convert&dst=webp&q=85$ url reject
# > MeiTuan
^https?:\/\/peisongapi\.meituan\.com\/client\/getInitiateImage url reject-200
^https?:\/\/img\.meituan\.net\/(adunion|display|midas)\/\w+\.(gif|jpg|jpg\.webp)$ url reject
^https?:\/\/(s3plus|flowplus)\.meituan\.net\/v\d\/\w+\/linglong\/\w+\.(gif|jpg|mp4) url reject
^https?:\/\/p\d\.meituan\.net\/(bizad|wmbanner)\/\w+\.jpg url reject
^https?:\/\/p\d\.meituan\.net\/movie\/\w+\.jpg\?may_covertWebp url reject
# > MeiTuanWaiMai
^https?:\/\/img\.meituan\.net\/(bizad|brandCpt)\/\w+\.png url reject
^https?:\/\/wmapi\.meituan\.com\/api\/v\d+\/loadInfo\? url reject
^https?:\/\/wmapi\.meituan\.com\/api\/v\d\/startpicture url reject
^https?:\/\/www\.meituan\.com\/api\/v\d\/appstatus\?ad url reject
# > MeiWeiBuYongDeng
^https?:\/\/capi.mwee.cn\/app-api\/V12\/app\/getstartad url reject
# > MaFengWo
^https://mapi.mafengwo.cn\/ad\/get_launch_ad_list\/v2 url reject
# > MaiDuiDui@ddgksf2013
^https?:\/\/mob\.mddcloud\.com\.cn\/adApi\/advert url reject
# > ManHuaRen@ddgksf2013
^https?://tel.mangaapi.manhuaren.com/(v2/public/getStartUpMessage|v1/public/getStartPageAds) url reject
http://tel.mangaapi.manhuaren.com/v2/ad/getMultiAdsStrategy url reject
http://mangaapi.manhuaren.com/v2/public/getShelfActivity url reject
^https?://mangaapi.manhuaren.com/(v2/public/getStartUpMessage|v1/public/getStartPageAds) url reject
http://mangaapi.manhuaren.com/v2/ad/getMultiAdsStrategy url reject
# > MIX@kyle
^https:\/\/dispatcher\.camera360\.com\/api\/v1\/list$ url reject
# > MaKaLong@kyle
^https:\/\/app\.api\.versa-ai\.com\/launch\/ads\? url reject
# > MoMo@ddgksf2013
^https?:\/\/open\.taou\.com\/maimai\/launch_ad url reject
^https?:\/\/api\.taou\.com\/sdk\/global\/splash_ad url reject
^https?:\/\/track\.mm\.taou\.com/v\d\/track url reject


# ======= N ======= #


# ======= O ======= #
# > One@ddgksf2013
^http:\/\/app\.api\.d3yuiw4\.com\/api\/app\/ad url reject
# > Oray
^https?:\/\/slapi\.oray\.net\/client\/ad url reject
^https?:\/\/slapi\.oray\.net\/adver url reject



# ======= P ======= #
# > pinduoduo
^https?:\/\/api\.(pinduoduo|yangkeduo)\.com\/api\/cappuccino\/splash url reject-200
# > PiaoGen
^https?:\/\/pss\.txffp\.com\/piaogen\/images\/launchScreen/ url reject-200
# > pengpainews
^https?:\/\/adpai\.thepaper\.cn\/.+&ad= url reject


# ======= Q ======= #
# > QuNaEr@ddgksf2013
https://homefront.qunar.com/front/splash/ad url reject
^https?:\/\/client\.qunar\.com\/pitcher-proxy\?qrt=p_splashAd url reject
# > QiCheZhiJia
^https?:\/\/adproxy.autohome.com.cn\/AdvertiseService\/ url reject
^https?:\/\/app2.autoimg.cn\/appdfs\/ url reject
# > QiDianDuShu
^https?:\/\/magev\d\.if\.qidian\.com\/argus\/api\/v\d\/client\/getsplashscreen url reject


# ======= R ======= #
# > RenMinRiBao@ddgksf2013
^https:\/\/app\.peopleapp\.com\/Api\/\d+/HomeApi\/getAdvertImage url reject
^https:\/\/app\.peopleapp\.com\/Api\/\d+/HomeApi\/adv url reject-dict
^https?:\/\/stat\.peopleapp\.com\/ url reject


# ======= S ======= #
# > shaoshupai
https://ios.sspai.com/api/v3/recommend/page/get\?ad.*ios_home_modal url reject
# > ShunFengYouXuan
^https://mapi.sfbest.com\/brokerservice-server\/cms\/getPositionById.* url reject
# > spotify pro@app2smile
#^https:\/\/spclient\.wg\.spotify\.com\/(bootstrap\/v1\/bootstrap|user-customization-service\/v1\/customize)$ url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/spotify-proto.js
# > spotify@ddgksf2013
#^https?://spclient.wg.spotify.com/ad-logic/* url reject-img
#^https?://spclient.wg.spotify.com/ads/* url reject-img
#^https?://spclient.wg.spotify.com/.+ad_slot url reject-img
#^https?://spclient.wg.spotify.com/.+banners url reject-img
#^https?://spclient.wg.spotify.com/.+canvases url reject-img
#^https?://spclient.wg.spotify.com/.+cards url reject-img
#^https?://spclient.wg.spotify.com/.+crashlytics url reject-img
#^https?://spclient.wg.spotify.com/.+doubleclick.net url reject-img
#^https?://spclient.wg.spotify.com/.+enabled-tracks url reject-img
#^https?://spclient.wg.spotify.com/.+promoted_offer url reject-img
#^https?:\/\/api\d?\.musical\.ly\/api\/ad\/ url reject-img
# > SanLianZhongDu@ddgksf2013
https://apis.lifeweek.com.cn/api/baseConfig/getIosNewConfig url reject
# > ShunFeng@ddgksf2013
^https?:\/\/ccsp-egmas\.sf-express\.com\/cx-app-base\/base\/app\/appVersion\/detectionUpgrade url reject-dict
# > ShanDongCMCC@ddgksf2013
https?:\/\/m\.sd\.10086\.cn\/zapi\/app_common\/homeWelcome\/welcome.do url reject-dict
# > Soul@kyle
^https:\/\/data-collector\.soulapp\.cn\/api\/data\/report$ url reject
# > Stay@ddgksf2013
^https?:\/\/api\.shenyin\.name\/stay-fork\/browse\/featured$ url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/stay.js
# > suning
^https?:\/\/mpcs\.suning\.com\/mpcs\/dm\/getDmInfo url reject


# ======= T ======= #
# > tianmaojingling
^https?:\/\/zconfig\.alibabausercontent\.com\/zconfig url reject
^http?:\/\/g\.alicdn\.com\/living\/mesh-std-spec url reject
# > testflight
^https?:\/\/testflight\.apple\.com\/v2\/accounts\/.*\/apps\/\d*/builds/\d*/install url request-body storefrontId" : ".*" request-body storefrontId" : "143441-1,29"
# > 12306@ddgksf2013
https://ad.12306.cn/* url reject
# > TengXunShouJiGuanJia
^https://otheve.beacon.qq.com\/analytics\/upload\?sid=.* url reject
# > TuNiu
^https?:\/\/m\.tuniu\.com\/api\/operation\/splash\/ url reject
# > TaoPiaoPiao@fangpide
^https://acs.m.taobao.com\/gw\/mtop.film.mtopadvertiseapi.queryadvertise\/5.0.* url reject
# > TianTianJiJin@ddgksf2013
^https?:\/\/appactive\.1234567\.com\.cn\/AppoperationApi\/OperationService\/GetAppStartImg url reject-dict
# > topwidget@ddgksf2013
https://top-widgets-api.xiaozujian.com/api/ad/config url reject-200
# > TencentNews
^https?:\/\/r\.inews\.qq\.com\/(adsBlacklist|getFullScreenPic|getQQNewsRemoteConfig) url reject
^https?:\/\/r\.inews\.qq\.com\/getBannerAds url reject
^https?:\/\/r\.inews\.qq\.com\/getNewsRemoteConfig url reject
^https?:\/\/r\.inews\.qq\.com\/getSplash url reject
^https?:\/\/r\.inews\.qq\.com\/searchHotCatList url reject
^https?:\/\/r\.inews\.qq\.com\/upLoadLoc url reject



# ======= U ======= #


# ======= V ======= #


# ======= W ======= #
# > weipinhui
^https?:\/\/mapi\.appvipshop\.com\/vips-mobile\/rest\/activity\/advertisement\/get url reject-200
# > WangYiDaShen
^https?:\/\/god\.gameyw\.netease\.com\/v\d\/ad\/serving\/app-start url reject
# > WangYiMusic
^https?:\/\/interface(\d)?.music.163.com\/eapi\/ad\/ url reject
# > WangYiYouXiang
^https?:\/\/appconf\.mail\.163\.com\/mmad\/get\.do url reject
^https?:\/\/client\.mail\.163.com\/apptrack\/confinfo\/(searchMultiAds.do|showAds.do) url reject
# > WangYiYanXuan@ddgksf2013
https://support.you.163.com/appversync/check.do url reject
^https?+:\/\/support\.you\.163\.com\/xhr\/boot\/getBootMedia\.json url reject
^https?:\/\/yanxuan.nosdn.127.net\/(static-union\/)?.*\.gif url reject
https:\/\/yanxuan.nosdn.127.net\/.*\.mp4 url reject-dict
# > WeChat110@zZPiglet
^https\:\/\/(weixin110\.qq|security.wechat)\.com\/cgi-bin\/mmspamsupport-bin\/newredirectconfirmcgi\? url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/weixin110.js
# > weixindaihuo@RuCu6
^https?:\/\/mp\.weixin\.qq\.com\/mp\/cps_product_info url reject-200
# > WeChat
^(http|https):\/\/mp\.weixin\.qq\.com\/mp\/getappmsgad url response-body "advertisement_num":\d,"advertisement_info":\[.+\], response-body "advertisement_num":0,"advertisement_info":[],
# > Weifeng
^https:\/\/api\.wfdata\.club\/v2\/yesfeng\/(infoCenterAd|yesList) url reject
# > Weico
^https?:\/\/overseas.weico.cc\/portal.php\?a=get_coopen_ads url reject
# > wangyiwoniudushu
^https?+:\/\/easyreadfs\.nosdn\.127\.net\/ad-material\/ url reject
# > wangyikaola
^https?:\/\/sp\.kaola\.com\/api\/openad url reject
^https?:\/\/gw\.kaola\.com\/gw\/dgmobile\/newOpenAd url reject


# ======= X ======= #
#> XiaoHongShu@ddgksf2013
^https?:\/\/edith\.xiaohongshu\.com\/api\/sns\/v\d\/system_service\/splash_config url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/xiaohongshu.js
^https?:\/\/edith\.xiaohongshu\.com\/api\/sns\/v\d\/homefeed\? url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/xiaohongshu.js
^https?:\/\/edith\.xiaohongshu\.com\/api\/sns\/v\d\/system_service\/config\? url script-response-body https://raw.githubusercontent.com/yishangfei/run/main/QuantumultX/Script/xiaohongshu.js
^https?:\/\/edith\.xiaohongshu\.com\/api\/sns\/v\d\/search\/hot_list url response-body items":\[.+\] response-body items":[]
^https?:\/\/edith\.xiaohongshu\.com\/api\/sns\/v\d\/search\/trending url response-body queries":\[.+\] response-body queries":[]
^https?:\/\/www\.xiaohongshu\.com\/api\/sns\/v\d\/tag\/ads_engage url reject-dict
^https?:\/\/www\.xiaohongshu\.com\/api\/sns\/v\d\/ads\/apple\/record url reject-dict
^https?:\/\/www\.xiaohongshu\.com\/api\/sns\/v\d\/ads\/resource url reject-dict
^https?:\/\/referee\.xiaohongshu\.com\/v\d\/stateReport url reject-dict
^https?:\/\/pages\.xiaohongshu\.com\/data\/native\/matrix_switches url reject-dict
^https?:\/\/edith\.xiaohongshu\.com\/api\/sns\/v\d\/user\/teenager\/status url reject-dict
#> XiaoTe@ddgksf2013
^https?:\/\/lcen\.xiaote\.net\/api\/graphql url response-body screenSplashAd response-body ddgksf2013
# > XiaoShuiMian
^https?:\/\/api.psy-1.com\/cosleep\/startup url reject
# > XieCheng
^https:\/\/ma-adx\.ctrip\.com\/_ma\.gif url reject
^https:\/\/m\.ctrip\.com\/restapi\/.+json\/tripAds url reject
^https:\/\/m\.ctrip\.com\/html5\/webresource\/js\/iscroll\.js$ url reject
^https:\/\/mbd\.baidu\.com\/newspage\/api\/getmobads\?page\=landingshare url reject
# > XiChuangZhu@ddgksf2013
^https?:\/\/lchttpapi\.xczim\.com\/1\.1\/functions\/getLaunchImageForIOS url reject-dict
# > XianYu
^https:\/\/gw.alicdn.com\/mt\/ url reject
^https:\/\/gw.alicdn.com\/tfs\/.+\d{3,4}-\d{4} url reject
^https:\/\/gw.alicdn.com\/tps\/.+\d{3,4}-\d{4} url reject
# > XiaoYi@ddgksf2013
^https://api.xiaoyi.com\/v5\/app\/mobile\/ads url reject
^https://api.xiaoyi.com\/v5\/app\/config\?userid=.* url reject
# > xiachufang
^https:\/\/api\.xiachufang\.com\/v\d\/ad/ url reject-dict
# > xiaolishenghuo
^https?:\/\/mpos-pic\.helipay\.com\/upload\/images\/advertisment url reject-dict


# ======= Y ======= #
# > YangShiPin
^https?:\/\/cdn\.cmgadx\.com\/sdk\/pool\/\w+\.json url reject-200
# > YiHaoDian
^https?:\/\/venus\.yhd\.com\/memhome\/launchConfig url reject
# > YiKaoBang@ddgksf2013
^https?:\/\/api\.yikaobang\.com\.cn\/client\/main\/homePageSmallAd url reject
^https?:\/\/api\.yikaobang\.com\.cn\/index\.php\/Client\/main\/startPage url reject
# > YouLinYouKe@ddgksf2013
https://new-app-api.ylyk.com/v1/user/myinfo/adviser url reject
# > YinkeZhiBo@kyle
^https?:\/\/service\.busi\.inke\.cn\/api\/flash\/screen url reject
# > YinxiangNote
^https?:\/\/app\.yinxiang\.com\/ads\/ url reject


# ======= Z ======= #
# > zuoyebang
^https?:\/\/syh\.zybang\.com\/com\/adx\/ url reject
# > ZuiYou
^https?:\/\/api\.izuiyou\.com\/ad\/ url reject
# > Zhihu
^https?:\/\/static\.zhihu\.com\/[^\/]+\/(main|column)\.signflow\.[^.]+.js url reject
# > zhangyue
^https?+:\/\/ih2\.ireader\.com\/zyapi\/bookstore\/ad url reject
^https?+:\/\/ih2\.ireader\.com\/zyapi\/self\/screen\/ad url reject
^https?+:\/\/ih2\.ireader\.com\/zycl\/api\/ad url reject
