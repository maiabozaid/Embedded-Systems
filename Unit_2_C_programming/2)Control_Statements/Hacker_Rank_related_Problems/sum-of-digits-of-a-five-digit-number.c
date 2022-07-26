/* Problem Link on Hacker rank: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum=0;
    scanf("%d", &n);
    
    for (int i=10 ; i<1000000; i=i*10){
     sum = sum + (n%i) / (i/10);
     
     /* the reminder operator(%)  makes the number have the disered digit as its most left digit
     and the division operator(/) makes that desired digit in the ones place and the integer data type will ignore the fraction
     for ex: 
     if we want to extract the third digit
    10564 % 1000 (which is 10^3) = 564 then 564/100(or 10^2) = 5.64
    which is represented as integer by 5 , and here we got the 3rd digit
    */
    
    }
    printf("%d", sum);
    return 0;
}
