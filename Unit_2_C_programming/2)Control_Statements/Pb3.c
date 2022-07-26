/* assignment 2.3:
   C program finds largest number among three numbers     */
#include <stdio.h>

int main(){

    float a,b,c;
    printf("Enter three numbers: ");
    fflush(stdin); fflush(stdout);
    scanf("%f \n%f \n%f",&a, &b, &c);

    if (a>b){
        if(a>c) printf("Largest number = %.2f",a);
        else printf("Largest number = %.2f",c);
    }
    else {
        if(b>c) printf("Largest number = %.2f",b);
        else printf("Largest number = %.2f",c);
    }

    return 0;
}


