/* assignment 3.4 */
#include <stdio.h>

int main(){

    int arr[100];
    int i,n,loc,inserted_value;

    printf("Enter no of elements: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);

    /* inserting the elements into the array */
    for (i=0; i<n ; i++) scanf("%d",&arr[i]);

    printf("Enter the element to be inserted: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&inserted_value);

    printf("Enter the location: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&loc);

    /* shifting the elements in the array and inserting the new value */
    for (i=n ; i >= 0 ; i--) {
        if (i != loc-1) arr[i] = arr[i-1];
        else  arr[i] = inserted_value ;
    }

    for (i=0; i< n+1 ; i++) printf("%d ",arr[i]);

    return 0;
}
