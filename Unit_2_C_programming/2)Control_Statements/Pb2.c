/* assignment 2.2:
   C program checks whether the character is vowel or consonant      */

#include <stdio.h>

int main(){

    char c;
    printf("Enter an alphabet: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);

    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("%c is a vowel.",c);
    else printf("%c is a consonant.",c);

    return 0;
}
