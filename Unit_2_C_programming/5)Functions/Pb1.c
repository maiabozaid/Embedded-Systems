#include <stdio.h>
int prime_checker(int n){
    int j, flag=0;
    for(j=2; j<=n/2;j++){
        if(n%j==0){ flag=1; break; }
    }
    return flag;
}
int main(){
    int n1, n2,i,flag;
    printf("Enter the first number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n1);
    printf("Enter the last number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n2);

    printf("Prime numbers in [%d,%d]: ",n1,n2);
    for (i=n1; i<n2; i++){
        flag = prime_checker(i);
        if (flag == 0) printf("%d ",i);
    }
    return 0;
}
