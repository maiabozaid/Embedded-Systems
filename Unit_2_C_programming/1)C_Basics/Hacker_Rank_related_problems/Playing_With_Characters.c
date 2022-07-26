/* Problem on Hacker rank: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[100], sen[100];
     scanf("%c\n%s\n%[^\n]%*c", &ch, &s, &sen);
     printf("%c\n%s\n%s", ch, s, sen);
     
    return 0;
}
