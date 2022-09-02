/* Problem link on hackerRank: https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=false */

#include <stdio.h>
#include <string.h>
void reversed_array(int A[], int n ){
    int x,i;
    for (i=0; i< (n-1-i); i++){
        x=A[i];
        A[i] = A[n-1-i];
        A[n-1-i] = x;
    }
}

int main(){
    int A[1000];
    int n;


    scanf("%d", &n);

    int i ;
    for (i=0; i<n; i++){

        scanf("%d", &A[i]);
    }

    reversed_array(A,n);

    for (i=0; i<n; i++){
        printf("%d ", A[i]);
    }

    return 0;
}
