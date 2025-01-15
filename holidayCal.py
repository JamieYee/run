from ics import Calendar, Event
from datetime import datetime
import os

# 创建一个日历对象
calendar = Calendar()

# 事件数据
events_data = [
    # 1月
    {"name": "元旦", "begin": datetime(2025, 1, 1, 9, 0), "end": datetime(2025, 1, 1, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 1, 5, 9, 0), "end": datetime(2025, 1, 5, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 1, 12, 9, 0), "end": datetime(2025, 1, 12, 18, 0), "description": ""},
    {"name": "年会", "begin": datetime(2025, 1, 19, 9, 0), "end": datetime(2025, 1, 19, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 1, 20, 9, 0), "end": datetime(2025, 1, 20, 18, 0), "description": ""},
    # 春节假期：拆分为多个天
    {"name": "春节", "begin": datetime(2025, 1, 25, 9, 0), "end": datetime(2025, 1, 25, 18, 0), "description": "年前假日"},
    {"name": "春节", "begin": datetime(2025, 1, 26, 9, 0), "end": datetime(2025, 1, 26, 18, 0), "description": "年前假日"},
    {"name": "春节", "begin": datetime(2025, 1, 27, 9, 0), "end": datetime(2025, 1, 27, 18, 0), "description": "除夕"},
    {"name": "春节", "begin": datetime(2025, 1, 28, 9, 0), "end": datetime(2025, 1, 28, 18, 0), "description": "正月初四"},
    {"name": "春节", "begin": datetime(2025, 1, 29, 9, 0), "end": datetime(2025, 1, 29, 18, 0), "description": "正月初一"},
    {"name": "春节", "begin": datetime(2025, 1, 30, 9, 0), "end": datetime(2025, 1, 30, 18, 0), "description": "正月初二"},
    {"name": "春节", "begin": datetime(2025, 1, 31, 9, 0), "end": datetime(2025, 1, 31, 18, 0), "description": "正月初三"},
    {"name": "春节", "begin": datetime(2025, 2, 1, 9, 0), "end": datetime(2025, 2, 1, 18, 0), "description": "正月初四"},
    {"name": "春节", "begin": datetime(2025, 2, 2, 9, 0), "end": datetime(2025, 2, 2, 18, 0), "description": "正月初五"},
    {"name": "春节", "begin": datetime(2025, 2, 3, 9, 0), "end": datetime(2025, 2, 3, 18, 0), "description": "正月初六"},
    {"name": "春节", "begin": datetime(2025, 2, 4, 9, 0), "end": datetime(2025, 2, 4, 18, 0), "description": "正月初七"},
    {"name": "春节", "begin": datetime(2025, 2, 5, 9, 0), "end": datetime(2025, 2, 5, 18, 0), "description": "正月初八"},
    {"name": "春节", "begin": datetime(2025, 2, 6, 9, 0), "end": datetime(2025, 2, 6, 18, 0), "description": "正月初九"},
    {"name": "春节", "begin": datetime(2025, 2, 7, 9, 0), "end": datetime(2025, 2, 7, 18, 0), "description": "正月初十"},
    # 2月
    {"name": "单休", "begin": datetime(2025, 2, 16, 9, 0), "end": datetime(2025, 2, 16, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 2, 22, 9, 0), "end": datetime(2025, 2, 22, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 2, 23, 9, 0), "end": datetime(2025, 2, 23, 18, 0), "description": ""},
    # 3月
    {"name": "单休", "begin": datetime(2025, 3, 2, 9, 0), "end": datetime(2025, 3, 2, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 3, 8, 9, 0), "end": datetime(2025, 3, 8, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 3, 9, 9, 0), "end": datetime(2025, 3, 9, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 3, 16, 9, 0), "end": datetime(2025, 3, 16, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 3, 22, 9, 0), "end": datetime(2025, 3, 22, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 3, 23, 9, 0), "end": datetime(2025, 3, 23, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 3, 30, 9, 0), "end": datetime(2025, 3, 30, 18, 0), "description": ""},
    # 4月
    {"name": "三休", "begin": datetime(2025, 4, 4, 9, 0), "end": datetime(2025, 4, 4, 18, 0), "description": ""},
    {"name": "三休", "begin": datetime(2025, 4, 5, 9, 0), "end": datetime(2025, 4, 5, 18, 0), "description": ""},
    {"name": "三休", "begin": datetime(2025, 4, 6, 9, 0), "end": datetime(2025, 4, 6, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 4, 13, 9, 0), "end": datetime(2025, 4, 13, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 4, 19, 9, 0), "end": datetime(2025, 4, 19, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 4, 20, 9, 0), "end": datetime(2025, 4, 20, 18, 0), "description": ""},
    {"name": "补班", "begin": datetime(2025, 4, 27, 9, 0), "end": datetime(2025, 4, 27, 18, 0), "description": "劳动节补班，4月27日(周日)上班"},
    # 5月
    {"name": "劳动节", "begin": datetime(2025, 5, 1, 9, 0), "end": datetime(2025, 5, 1, 18, 0), "description": "五休"},
    {"name": "劳动节", "begin": datetime(2025, 5, 2, 9, 0), "end": datetime(2025, 5, 2, 18, 0), "description": "五休"},
    {"name": "劳动节", "begin": datetime(2025, 5, 3, 9, 0), "end": datetime(2025, 5, 3, 18, 0), "description": "五休"},
    {"name": "劳动节", "begin": datetime(2025, 5, 4, 9, 0), "end": datetime(2025, 5, 4, 18, 0), "description": "五休"},
    {"name": "劳动节", "begin": datetime(2025, 5, 5, 9, 0), "end": datetime(2025, 5, 5, 18, 0), "description": "五休"},
    {"name": "单休", "begin": datetime(2025, 5, 11, 9, 0), "end": datetime(2025, 5, 11, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 5, 17, 9, 0), "end": datetime(2025, 5, 17, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 5, 18, 9, 0), "end": datetime(2025, 5, 18, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 5, 25, 9, 0), "end": datetime(2025, 5, 25, 18, 0), "description": ""},
    {"name": "端午节", "begin": datetime(2025, 5, 31, 9, 0), "end": datetime(2025, 5, 31, 18, 0), "description": "三休"},
    {"name": "端午节", "begin": datetime(2025, 6, 1, 9, 0), "end": datetime(2025, 6, 1, 18, 0), "description": "三休"},
    {"name": "端午节", "begin": datetime(2025, 6, 2, 9, 0), "end": datetime(2025, 6, 2, 18, 0), "description": "三休"},
    # 6月
    {"name": "单休", "begin": datetime(2025, 6, 8, 9, 0), "end": datetime(2025, 6, 8, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 6, 14, 9, 0), "end": datetime(2025, 6, 14, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 6, 15, 9, 0), "end": datetime(2025, 6, 15, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 6, 22, 9, 0), "end": datetime(2025, 6, 22, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 6, 28, 9, 0), "end": datetime(2025, 6, 28, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 6, 29, 9, 0), "end": datetime(2025, 6, 29, 18, 0), "description": ""},
    # 7月
    {"name": "单休", "begin": datetime(2025, 7, 6, 9, 0), "end": datetime(2025, 7, 6, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 7, 12, 9, 0), "end": datetime(2025, 7, 12, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 7, 13, 9, 0), "end": datetime(2025, 7, 13, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 7, 20, 9, 0), "end": datetime(2025, 7, 20, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 7, 26, 9, 0), "end": datetime(2025, 7, 26, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 7, 27, 9, 0), "end": datetime(2025, 7, 27, 18, 0), "description": ""},
    # 8月
    {"name": "单休", "begin": datetime(2025, 8, 3, 9, 0), "end": datetime(2025, 8, 3, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 8, 9, 9, 0), "end": datetime(2025, 8, 9, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 8, 10, 9, 0), "end": datetime(2025, 8, 10, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 8, 17, 9, 0), "end": datetime(2025, 8, 17, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 8, 23, 9, 0), "end": datetime(2025, 8, 23, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 8, 24, 9, 0), "end": datetime(2025, 8, 24, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 8, 31, 9, 0), "end": datetime(2025, 8, 31, 18, 0), "description": ""},
    # 9月
    {"name": "双休", "begin": datetime(2025, 9, 6, 9, 0), "end": datetime(2025, 9, 6, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 9, 7, 9, 0), "end": datetime(2025, 9, 7, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 9, 14, 9, 0), "end": datetime(2025, 9, 14, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 9, 20, 9, 0), "end": datetime(2025, 9, 20, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 9, 21, 9, 0), "end": datetime(2025, 9, 21, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 9, 28, 9, 0), "end": datetime(2025, 9, 28, 18, 0), "description": "国庆节补班，9月28日(周日)上班"},
    # 10月
    {"name": "国庆节", "begin": datetime(2025, 10, 1, 9, 0), "end": datetime(2025, 10, 1, 18, 0), "description": "八休"},
    {"name": "国庆节", "begin": datetime(2025, 10, 2, 9, 0), "end": datetime(2025, 10, 2, 18, 0), "description": "八休"},
    {"name": "国庆节", "begin": datetime(2025, 10, 3, 9, 0), "end": datetime(2025, 10, 3, 18, 0), "description": "八休"},
    {"name": "国庆节", "begin": datetime(2025, 10, 4, 9, 0), "end": datetime(2025, 10, 4, 18, 0), "description": "八休"},
    {"name": "国庆节", "begin": datetime(2025, 10, 5, 9, 0), "end": datetime(2025, 10, 5, 18, 0), "description": "八休"},
    {"name": "国庆节", "begin": datetime(2025, 10, 6, 9, 0), "end": datetime(2025, 10, 6, 18, 0), "description": "八休"},
    {"name": "国庆节", "begin": datetime(2025, 10, 7, 9, 0), "end": datetime(2025, 10, 7, 18, 0), "description": "八休"},
    {"name": "国庆节", "begin": datetime(2025, 10, 8, 9, 0), "end": datetime(2025, 10, 8, 18, 0), "description": "八休"},
    {"name": "单休", "begin": datetime(2025, 10, 12, 9, 0), "end": datetime(2025, 10, 12, 18, 0), "description": "八休"},
    {"name": "双休", "begin": datetime(2025, 10, 18, 9, 0), "end": datetime(2025, 10, 18, 18, 0), "description": "八休"},
    {"name": "双休", "begin": datetime(2025, 10, 19, 9, 0), "end": datetime(2025, 10, 19, 18, 0), "description": "八休"},
    {"name": "单休", "begin": datetime(2025, 10, 26, 9, 0), "end": datetime(2025, 10, 26, 18, 0), "description": "八休"},
    # 11月
    {"name": "双休", "begin": datetime(2025, 11, 1, 9, 0), "end": datetime(2025, 11, 1, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 11, 2, 9, 0), "end": datetime(2025, 11, 2, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 11, 9, 9, 0), "end": datetime(2025, 11, 9, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 11, 15, 9, 0), "end": datetime(2025, 11, 15, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 11, 16, 9, 0), "end": datetime(2025, 11, 16, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 11, 23, 9, 0), "end": datetime(2025, 11, 23, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 11, 29, 9, 0), "end": datetime(2025, 11, 29, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 11, 30, 9, 0), "end": datetime(2025, 11, 30, 18, 0), "description": ""},
    # 12月
    {"name": "单休", "begin": datetime(2025, 12, 7, 9, 0), "end": datetime(2025, 12, 7, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 12, 13, 9, 0), "end": datetime(2025, 12, 13, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 12, 14, 9, 0), "end": datetime(2025, 12, 14, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 12, 21, 9, 0), "end": datetime(2025, 12, 21, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 12, 27, 9, 0), "end": datetime(2025, 12, 27, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 12, 28, 9, 0), "end": datetime(2025, 12, 28, 18, 0), "description": ""},
]

# 确保目录存在
os.makedirs(r"D:\Download", exist_ok=True)

# 保存为 .ics 文件并指定编码为 UTF-8
with open(r"D:\Download\holidayCal.ics", "w", encoding="utf-8") as f:
    # 添加日历头部信息
    f.write("BEGIN:VCALENDAR\n")
    f.write("VERSION:2.0\n")
    f.write("CALSCALE:GREGORIAN\n")
    f.write("X-WR-CALNAME:云天排班表\n")
    f.write("X-WR-TIMEZONE:Asia/Shanghai\n")
    f.write("X-WR-CALDESC:2025年度休息排班表日历 更新时间2025-1-15 18:23:07\n")

    # 添加时区信息
    f.write("BEGIN:VTIMEZONE\n")
    f.write("TZID:Asia/Shanghai\n")
    f.write("X-LIC-LOCATION:Asia/Shanghai\n")
    f.write("BEGIN:STANDARD\n")
    f.write("TZOFFSETFROM:+0800\n")
    f.write("TZOFFSETTO:+0800\n")
    f.write("TZNAME:CST\n")
    f.write("DTSTART:19700101T000000\n")
    f.write("END:STANDARD\n")
    f.write("END:VTIMEZONE\n")
    
    # 写入事件数据
    for event_data in events_data:
        f.write("BEGIN:VEVENT\n")
        f.write(f"SUMMARY:{event_data['name']}\n")
        f.write(f"DTSTART:{event_data['begin'].strftime('%Y%m%dT%H%M%S')}\n")
        f.write(f"DTEND:{event_data['end'].strftime('%Y%m%dT%H%M%S')}\n")
        f.write(f"DESCRIPTION:{event_data['description']}\n")
        f.write("END:VEVENT\n")
    
    # 添加日历尾部信息
    f.write("END:VCALENDAR\n")
