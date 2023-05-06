import cv2
import torch
import numpy as np

# YOLOv5 모델 로드
model = torch.hub.load('ultralytics/yolov5', 'yolov5s', pretrained=True)

# 이미지 불러오기
img = cv2.imread('example.jpg')

# YOLOv5로 객체 인식하기
results = model(img)

# 인식된 객체의 좌표 가져오기
boxes = results.xyxy[0].numpy()

# HTML에 적용하기 위한 CSS 코드 생성
css = ""
for box in boxes:
    x1, y1, x2, y2 = box[:4]
    seat_num = box[5]  # 예를 들어, 객체의 클래스가 좌석이고 번호가 3인 경우
    css += f".seat{seat_num} {{position: absolute; left: {x1}px; top: {y1}px; width: {x2 - x1}px; height: {y2 - y1}px;}}\n"

# CSS 코드를 파일로 저장
with open("seats.css", "w") as f:
    f.write(css)

# HTML 문서 업데이트
with open("index.html", "r") as f:
    html = f.read()

# head 태그에 CSS 파일 링크 추가
html = html.replace("</head>", f"<link rel=\"stylesheet\" href=\"seats.css\">\n</head>")

# 좌석 태그 추가
for i, box in enumerate(boxes):
    seat_num = box[5]  # 예를 들어, 객체의 클래스가 좌석이고 번호가 3인 경우
    html = html.replace(f"<div class=\"seat{seat_num}\"></div>", f"<div class=\"seat{seat_num}\">좌석 {seat_num}</div>")

# HTML 파일 저장
with open("index.html", "w") as f:
    f.write(html)
