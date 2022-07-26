/* assignment 1.5:
    C Program Finds ASCII Value of a Character
*/

#include <stdio.h>

int main(){

    char x=0;

    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&x);

    printf("ASCII value of G = %d", x);

    return 0 ;
}