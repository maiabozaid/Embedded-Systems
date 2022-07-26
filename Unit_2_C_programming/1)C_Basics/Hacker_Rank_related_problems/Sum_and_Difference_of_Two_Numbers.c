/* Problem on Hacker rank: https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=false */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float x, y;
    
    scanf("%d %d\n%f %f", &a,&b,&x,&y);
    printf("%d %d\n%.1f %.1f",a+b,a-b,x+y,x-y);
    
    return 0;
}
