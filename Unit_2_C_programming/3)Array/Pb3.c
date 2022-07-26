/* assignment 3.3:
  calculating array Transpose */
#include <stdio.h>

int main(){

    int arr[100][100];
    int r,c,i,j;

    printf("Enter rows and column of the matrix: ");
    fflush(stdin); fflush(stdout);
    scanf("%d\n%d",&r,&c);

    for (i=0; i<r ; i++){
        for(j=0; j<c ; j++){
            printf("Enter element a%d%d: ",i+1, j+1);
            fflush(stdin); fflush(stdout);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Entered Matrix: \n");
    for (i=0; i<r ; i++){
        for(j=0; j<c ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the Matrix: \n");
    for (i=0; i<c ; i++){
        for(j=0; j<r ; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
