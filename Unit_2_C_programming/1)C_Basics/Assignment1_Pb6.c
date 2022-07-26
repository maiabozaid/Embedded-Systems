/* assignment 1.6:
    Source Code SwapS Two Numbers
*/

#include <stdio.h>

int main(){
    float a=0, b=0, c=0;

    printf("Enter value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&a);

    printf("Enter value of b: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&b);

    c = a;  a =b;   b = c;

    printf("After swapping, value of a = %.2f\n",a);
    printf("After swapping, value of b = %.1f",b);

    return 0 ;
}