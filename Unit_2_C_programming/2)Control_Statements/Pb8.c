/* assignment 2.8:
   C program performs a simple calculator  */
#include <stdio.h>

int main(){

    char op;
    float x,y;

    printf("Enter operator either + or - or * or / : ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&op);

    printf("Enter two operands: ");
    fflush(stdin); fflush(stdout);
    scanf("%f \n%f",&x , &y);

    switch(op){
        case '+': printf("%.1f + %.1f = %.1f",x,y, x+y ); break;
        case '-': printf("%.1f - %.1f = %.1f",x,y, x-y ); break;
        case '*': printf("%.1f * %.1f = %.1f",x,y, x*y ); break;
        case '/': printf("%.1f / %.1f = %.1f",x,y, x/y ); break;
        default: printf("sorry, you didn't enter one of the mentioned operators above"); break;
    }

    return 0;
}

