/* Problem on Hacker rank: https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=false */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    //Write your logic to print the tokens of the sentence here.
    int i ;
    for(i=0; i<strlen(s); i++ ){
        if(s[i] != ' ') printf("%c",s[i]);
        else printf("\n");
        
    }
    return 0;
}
