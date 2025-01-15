from ics import Calendar, Event
from datetime import datetime
import os

# 创建一个日历对象
calendar = Calendar()

# 事件数据
events_data = [
    {"name": "元旦", "begin": datetime(2025, 1, 1, 9, 0), "end": datetime(2025, 1, 1, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 1, 5, 9, 0), "end": datetime(2025, 1, 5, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 1, 12, 9, 0), "end": datetime(2025, 1, 12, 18, 0), "description": ""},
    {"name": "年会", "begin": datetime(2025, 1, 19, 9, 0), "end": datetime(2025, 1, 19, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 1, 20, 9, 0), "end": datetime(2025, 1, 20, 18, 0), "description": ""},
    {"name": "春节", "begin": datetime(2025, 1, 25, 9, 0), "end": datetime(2025, 2, 7, 18, 0), "description": "正月初十一开工(02月08日)"},
    {"name": "单休", "begin": datetime(2025, 2, 16, 9, 0), "end": datetime(2025, 2, 16, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 2, 22, 9, 0), "end": datetime(2025, 2, 23, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 3, 2, 9, 0), "end": datetime(2025, 3, 2, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 3, 8, 9, 0), "end": datetime(2025, 3, 9, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 3, 16, 9, 0), "end": datetime(2025, 3, 16, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 3, 22, 9, 0), "end": datetime(2025, 3, 23, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 3, 30, 9, 0), "end": datetime(2025, 3, 30, 18, 0), "description": ""},
    {"name": "三休", "begin": datetime(2025, 4, 4, 9, 0), "end": datetime(2025, 4, 6, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 4, 13, 9, 0), "end": datetime(2025, 4, 13, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 4, 19, 9, 0), "end": datetime(2025, 4, 20, 18, 0), "description": ""},
    {"name": "补班", "begin": datetime(2025, 4, 27, 9, 0), "end": datetime(2025, 4, 27, 18, 0), "description": "劳动节补班，4月27日(周日)上班"},
    {"name": "五休", "begin": datetime(2025, 5, 1, 9, 0), "end": datetime(2025, 5, 5, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 5, 11, 9, 0), "end": datetime(2025, 5, 11, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 5, 17, 9, 0), "end": datetime(2025, 5, 18, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 5, 25, 9, 0), "end": datetime(2025, 5, 25, 18, 0), "description": ""},
    {"name": "三休", "begin": datetime(2025, 5, 31, 9, 0), "end": datetime(2025, 6, 2, 18, 0), "description": "端午节"},
    # 6月
    {"name": "单休", "begin": datetime(2025, 6, 8, 9, 0), "end": datetime(2025, 6, 8, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 6, 14, 9, 0), "end": datetime(2025, 6, 15, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 6, 22, 9, 0), "end": datetime(2025, 6, 22, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 6, 28, 9, 0), "end": datetime(2025, 6, 29, 18, 0), "description": ""},
    # 7月
    {"name": "单休", "begin": datetime(2025, 7, 6, 9, 0), "end": datetime(2025, 7, 6, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 7, 12, 9, 0), "end": datetime(2025, 7, 13, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 7, 20, 9, 0), "end": datetime(2025, 7, 20, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 7, 26, 9, 0), "end": datetime(2025, 7, 27, 18, 0), "description": ""},
    # 8月
    {"name": "单休", "begin": datetime(2025, 8, 3, 9, 0), "end": datetime(2025, 8, 3, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 8, 9, 9, 0), "end": datetime(2025, 8, 10, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 8, 17, 9, 0), "end": datetime(2025, 8, 17, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 8, 23, 9, 0), "end": datetime(2025, 8, 24, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 8, 31, 9, 0), "end": datetime(2025, 8, 31, 18, 0), "description": ""},
    # 9月
    {"name": "双休", "begin": datetime(2025, 9, 6, 9, 0), "end": datetime(2025, 9, 7, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 9, 14, 9, 0), "end": datetime(2025, 9, 14, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 9, 20, 9, 0), "end": datetime(2025, 9, 21, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 9, 28, 9, 0), "end": datetime(2025, 9, 28, 18, 0), "description": "国庆节补班，9月28日(周日)上班"},
    # 10月
    {"name": "八休", "begin": datetime(2025, 10, 1, 9, 0), "end": datetime(2025, 10, 8, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 10, 12, 9, 0), "end": datetime(2025, 10, 12, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 10, 18, 9, 0), "end": datetime(2025, 10, 19, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 10, 26, 9, 0), "end": datetime(2025, 10, 26, 18, 0), "description": ""},
    # 11月
    {"name": "双休", "begin": datetime(2025, 11, 1, 9, 0), "end": datetime(2025, 11, 2, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 11, 9, 9, 0), "end": datetime(2025, 11, 9, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 11, 15, 9, 0), "end": datetime(2025, 11, 16, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 11, 23, 9, 0), "end": datetime(2025, 11, 23, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 11, 29, 9, 0), "end": datetime(2025, 11, 30, 18, 0), "description": ""},
    # 12月
    {"name": "单休", "begin": datetime(2025, 12, 7, 9, 0), "end": datetime(2025, 12, 7, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 12, 13, 9, 0), "end": datetime(2025, 12, 14, 18, 0), "description": ""},
    {"name": "单休", "begin": datetime(2025, 12, 21, 9, 0), "end": datetime(2025, 12, 21, 18, 0), "description": ""},
    {"name": "双休", "begin": datetime(2025, 12, 27, 9, 0), "end": datetime(2025, 12, 28, 18, 0), "description": ""},
]

# 创建事件并添加到日历
for event_data in events_data:
    event = Event()
    event.name = event_data["name"]
    event.begin = event_data["begin"]
    event.end = event_data["end"]
    event.description = event_data["description"]
    
    # 将事件添加到日历
    calendar.events.add(event)

# 确保目录存在
os.makedirs(r"D:\Download", exist_ok=True)

# 保存文件
with open(r"D:\Download\holidayCal.ics", "w") as f:
    f.writelines(calendar)
