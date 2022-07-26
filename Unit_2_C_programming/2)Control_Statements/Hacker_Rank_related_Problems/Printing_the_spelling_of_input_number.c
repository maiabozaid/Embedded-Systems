/* Problem Link on Hacker rank: https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=false */

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    int n=0;
    scanf("%d",&n);
    if(n==1) printf("one");
    else if(n==2) printf("two");
    else if(n==3) printf("three");
    else if(n==4) printf("four");
    else if(n==5) printf("five");
    else if(n==6) printf("six");
    else if(n==7) printf("seven");
    else if(n==8) printf("eight");
    else if(n==9) printf("nine");
    else if(n>9) printf("Greater than 9");
    else printf("kindlly enter a number = 1 or greater");

    return 0;
}
