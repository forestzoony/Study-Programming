def solution(s):
    answer = []
    s = s[2:-2]
    s = s.split("),(")
    s.sort(key=len)

    for i in s:
       l = i.split(',')
       for j in l:
           if int(j) not in answer:
               answer.append(j)
            
    return answer