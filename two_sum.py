#include <stdio.h>
#include <stdboo.h>
#include <stdlib.h>

long long solution(int a, int b)){
    long long answer =0;
    int max;

    if (a>b)
    {
        max = a;
        a= b;
        b=max;

    }
    for (int i=a; i<=b; i++)
    {
        answer += i;
    }
    return answer;
    
}