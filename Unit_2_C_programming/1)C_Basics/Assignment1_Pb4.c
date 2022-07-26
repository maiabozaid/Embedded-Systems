/* assignment 1.4:
   C Program Multiplies two Floating Point Numbers
*/

#include <stdio.h>

int main(){
    float x=0, y=0;

    printf("Enter two numbers: ");
    fflush(stdin); fflush(stdout);
    scanf("%f %f",&x,&y);

    printf("product: %f", x*y);

    return 0 ;
}
