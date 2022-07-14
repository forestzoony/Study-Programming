def solution(arr1,arr2): # 배열이 두 개 존재함. 
    answer = arr1 #리턴값은 배열1에 저장하기로 함. 
    
    for i in range(len(arr1)): # 배열1의 길이만큼 반복함. 
        for j in range(len(arr1[i])):
            answer[i][j] = arr1[i][j] + arr2[i][j] # 배열1과 배열2의 두 행렬을 더한 값을 리턴값인 answer에 저장함. 

    return answer