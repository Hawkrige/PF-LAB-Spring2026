#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int len = 0;
    char name[50];
    int v = 1;

    printf("Enter a name : ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    if(name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    if(len < 3 || len > 20){
        printf("Invalid name, name must be between 3 - 20 characters\n");
        v = 0;
    }

    if(isspace(name[0]) || isspace(name[len - 1])){
        printf("Invalid name, leading or trailing whitespace detected\n");
        v = 0;
    }

    for(int i = 0; i < len; i++){
        if(isdigit(name[i])){
            printf("Invalid name, contains digits\n");
            v = 0;
            break;
        }
    }

    if(v == 1){
        printf("Name : %s of length : %d is valid\n", name, len);
    }
    else{
        printf("Name : %s of length : %d is invalid\n", name, len);
    }

    return 0;
}