/* assignment 2.7:
   C program calculates factorial of a number  */
#include <stdio.h>

int main(){

    int n=0, i=1;
    long long fac = 1;

    printf("Enter an Integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);

    if(n<0) printf("ERORR!!! Factorial of negative number doesn't exist.");
    else if(n == 0) printf(" Factorial = 1");
    else {
        for (i=1 ; i <= n ; i++) fac = fac*i;
        printf("Factorial = %lld",fac);
    }

    return 0;
}
