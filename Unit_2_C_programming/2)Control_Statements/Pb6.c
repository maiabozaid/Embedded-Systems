/* assignment 2.6:
   C program calculates sum of natural number  */
#include <stdio.h>

int main(){

    int a=0;
    printf("Enter an Integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&a);

    printf("sum = %d" , a*(a+1) / 2) ;

    return 0;
}
