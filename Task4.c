#include <stdio.h>
#include <string.h>

int main() {

    char username[20];
    char password[20];

    // Predefined credentials
    char correctUser[] = "admin";
    char correctPass[] = "1234";

    // Input
    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    /
    if (strcmp(username, correctUser) == 0 && 
        strcmp(password, correctPass) == 0) {
        printf("Login Successful\n");
    } 
    else {
        printf("Invalid Credentials\n");
    }

    return 0;
}