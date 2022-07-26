/* assignment 2.4:
   C program checks whether a number is positive or negative  */
#include <stdio.h>

int main(){

    float a;
    printf("Enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&a);

    if (a>0) printf("%.2f is positive",a);
    else if (a<0) printf("%.2f is negative",a);
    else printf("You entered zero.");

    return 0;
}
