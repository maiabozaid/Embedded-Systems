/* assignment 3_strings-2 */
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int counter=0;

    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(str);


    int i=0;
    while ( str[i]!=0){
        counter++ ;
        i++;
    }

    printf("Length of the String :%d",counter);

    return 0;
}
