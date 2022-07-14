import math #수학적인 함수를 사용하기 위한 라이브러리 

def solution(n):
    x = math.sqrt(n)

    if(x % 1) == 0:
        answer = (x + 1) **2
    else:
        answer = -1
    return answer

