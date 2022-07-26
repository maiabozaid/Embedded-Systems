/* assignment 3_strings-3 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];

    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(str);

    int i;
    printf("Reverse string is: ");

    for(i=strlen(str); i>0 ; i--){
        printf("%c",str[i-1]);
    }
    /* it's better not to create a new array for the Reversing to
       achieve more optimization (except if wanted  to save the
        reversed string for some reason)
     */
    return 0;
}