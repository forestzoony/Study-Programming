def solution(n):
    answer = 0
    i = 1
    
    for i in range(i,n+1):
        if i % 2 == 0:
            answer += i
        
    return answer