/* assignment 1.2
 C Program to Print an Integer Entered by a User
 */

#include <stdio.h>

int main(){
    int x=0;
    printf("Enter a integer: ");
    fflush(stdin); fflush(stdout) ;
    scanf("%d", &x);

    printf("You entered: %d",x);

    return 0 ;
}