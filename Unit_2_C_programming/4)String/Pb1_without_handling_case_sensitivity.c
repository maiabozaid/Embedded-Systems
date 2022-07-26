/* assignment 3_strings-1 */

#include <stdio.h>

int main(){
    char str[100], ch;
    int counter=0;

    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(str);

    printf("Enter a character to find frequency: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&ch);

    int i=0;
    while ( str[i]!=0){
        if ( str[i]==ch ) { 
            counter++ ; 
        }
        i++;
    }

    printf("Frequency of %c = %d", ch, counter);

    return 0;
}