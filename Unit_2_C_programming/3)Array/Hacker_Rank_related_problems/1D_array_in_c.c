/* problem link on hackerRank: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=false */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int i, n, sum =0, arr[1000];

 scanf("%d",&n);
 for (i=0;i<n;i++) {
     scanf("%d",&arr[i]);
    sum = sum + arr[i];
 }
 
 printf("%d",sum);


    return 0;
}
