# 배열을 입력받아 합으로 0을 만들 수 있는 3개의 엘리먼트를 출력하라 

#1. 입력의 형태: num = [-1,0,2,-1,-4]
#2. 출력의 형태: [ {-1,0,-1}, {-1,-1,2}]

#풀이방법) 1. 브루트 포스로 계산하기- 타임아웃 / 2. 투 포인터로 합을 계산하기 

def threeSum(self, nums: List[int]) -> List[List[int]]:
    result = []

    num.sort()

    for i in range(len(nums)-2): 
        # 중복된 값을 제거합니다. 

        if i>0 and nums[i] == nums[i-1]: 
            continue 
        
        #간격 좁혀나가며 합을 계산하기 
        left, right = i+1, len(nums) -1
        while left < right:
            sum = nums[i] + nums[left] + nums[right]
            if sum < 0: 
                left += 1
            elif sum > 0: 
                right -= 1
            else: 
                results.append(nums[i], nums[left], nums[right]) 

            while left < right and nums[left] == nums[left+1]:
                left += 1

            while left < right and nums[right] == nums[right+1]:
                right -= 1
            
            left += 1
            right -= 1
            

    return results
