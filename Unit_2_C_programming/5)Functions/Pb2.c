#include <stdio.h>

long long fact(int n){

    if (n==1) return n;
    return n * fact(n-1);

}

int main(){
    int n;
    printf("Enter a positive integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    printf("Factorial of %d = %lld",n , fact(n));


    return 0;
}



