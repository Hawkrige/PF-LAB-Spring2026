#include <stdio.h>
#include <string.h>

int main() {

    char master[] = "secure123";
    char input[50];
    int attempts = 0;

    while(attempts < 3){

        printf("Enter password: ");
        fgets(input, sizeof(input), stdin);

        int len = strlen(input);

        if(input[len - 1] == '\n'){
            input[len - 1] = '\0';
            len--;
        }

        if(strlen(input) == 0){
            printf("Password cannot be empty\n");
            continue;
        }

        if(strcmp(input, master) == 0){
            printf("Access granted\n");
            return 0;
        }

        if(strcmp(input, master) < 0){
            printf("Password comes before the correct password alphabetically\n");
        }
        else{
            printf("Password comes after the correct password alphabetically\n");
        }

        attempts++;

        if(attempts == 2){
            if(strncmp(input, master, 3) == 0){
                printf("Hint: First 3 characters match\n");
            }
            else{
                printf("Hint: First 3 characters do not match\n");
            }
        }
    }

    printf("Account locked after 3 failed attempts\n");

    return 0;
}