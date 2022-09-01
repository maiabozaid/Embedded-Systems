
#include <stdio.h>
#include <string.h>

void reversed_string(char str[], int n ){
    printf("%c", str[n-1]);
    if (n!=0) reversed_string(str, --n);
}

int main(){
    char str[1000];

    printf("Enter a sentence: ");
    fflush(stdin); fflush(stdout);
    gets(str);

    reversed_string(str, strlen(str));

    return 0;

}

