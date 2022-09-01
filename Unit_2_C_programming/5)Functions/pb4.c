#include <stdio.h>
#include <string.h>

int powered(int n, int p){

    if (p==1) return n;
    return n * powered(n, p-1);

}

int main(){
    int n,p;
    printf("Enter base number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);

    printf("Enter power number(positive integer): ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &p);

    printf("%d^%d = %d",n,p ,powered(n,p));

    return 0;
}



