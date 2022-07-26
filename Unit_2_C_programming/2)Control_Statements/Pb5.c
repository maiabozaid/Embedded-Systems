/* assignment 2.5:
   C program checks whether the character is alphabet or not  */
#include <stdio.h>

int main(){

    char c='a';

    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);

    if( ((int)c >64 && (int)c < 91) || ((int)c >96 && (int)c < 122) )
        printf("%c is an alphabet",c );

    else printf("%c is not an alphabet",c );

    return 0;
}
