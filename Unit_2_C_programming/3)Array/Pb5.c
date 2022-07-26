/* assignment 3.5: searching for an element */
#include <stdio.h>

int main(){
    int arr[100];
    int i,n,searched_value;

    printf("Enter no of elements: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);

    /* inserting the elements into the array */
    for (i=0; i<n ; i++) scanf("%d",&arr[i]);

    printf("Enter the element to be searched: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&searched_value);

    /* searching in the array*/
    for (i=0 ; i < n  ; i++) {
        if ( arr[i] == searched_value ){
            printf("Number found at location = %d",i+1);
            break;
        }
    }
    return 0;
}


