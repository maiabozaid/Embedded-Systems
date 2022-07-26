/* assignment 2.6:
   C program calculates sum of natural number  */
#include <stdio.h>

int main(){

    int a=0, sum=0, i=0;
    printf("Enter an Integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&a);

    for (i=0; i<=a ; i++) sum=sum+i;
    printf("sum = %d", sum);
    return 0;
}
