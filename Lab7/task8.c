#include<stdio.h>

int main(){

    char str[100];

    printf("Enter characters: ");
    scanf("%[^A-Za-z]",str);

    printf("Non alphabetic characters: %s",str);

    return 0;
}