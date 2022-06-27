#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//arr_len은 배열 arr의 길이입니다. 
double solution(int arr[], size_t arr_len)
{
    double answer =0;
    int total =0; // 정수들의 총합을 담을 변수 

for(int i = 0; i<arr_len; i++)
{
   total = total + arr[i];
}

answer = (double)total/arr_len;
return answer;
}