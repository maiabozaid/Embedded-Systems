/* assignment 2.1:
   C program checks whether the number is even or odd      */

#include <stdio.h>

int main(){

    int n=0;
    printf("Enter an integer you want to check: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);

    if(n%2!=0) printf("%d is odd",n);
    else printf("%d is even",n);

    return 0;
}

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

