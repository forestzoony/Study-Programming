def solution(nunbers):
   answer = 0
   arr = [0,0,0,0,0,0,0,0,0,0]

   for i in numbers:
       cnt[i] += 1

   for j in range(len(arr)):
       if(cnt[j] == 0):
           answer += j

   return answer

