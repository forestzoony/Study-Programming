def solution(arr):
    from math import gcd #정수의 최대공약수를 구하는 라이브러리 
    answer = arr[0]

    for num in arr:
        answer = answer*num // gcd(answer,num) 
        
    return answer
