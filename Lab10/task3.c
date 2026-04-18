#include <stdio.h>
#include <string.h>

int main() {

char email[100];
char copy[100];
char display[150] = "Email: ";
char *at;

printf("Enter an email address : ");
fgets(email, sizeof(email), stdin);

int len = strlen(email);

if(email[len - 1] == '\n'){
    email[len - 1] = '\0';
}

strcpy(copy, email);

at = strchr(copy, '@');

if(at == NULL){
    printf("Invalid email, '@' not found\n");
    return 0;
}

if(strstr(at + 1, ".") == NULL){
    printf("Invalid email, domain missing '.'\n");
    return 0;
}

printf("Domain : %s\n", at + 1);

strcat(display, copy);

printf("%s\n", display);

return 0;
}