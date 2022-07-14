#자연수를 뒤집어 배열로 만드는 알고리즘 

def solution(n):
    return list(map(int, reversed(str(n))))