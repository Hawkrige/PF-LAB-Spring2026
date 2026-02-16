/*
Question 7: Login Authentication System (Logical Operators + Nested If)

System checks:
• If Username is correct
    o If Password is correct
        ▪ If OTP is correct → Login Successful
        ▪ Else → Invalid OTP
    o Else → Incorrect Password
• Else → Invalid Username

Task:
Write a C program using nested if statements and logical operators (&&, ||) to validate
login credentials.
*/

#include <stdio.h>
#include <string.h>

int main() {

    char username[20], password[20];
    char correctUsername[] = "admin";
    char correctPassword[] = "1234";
    int otp, correctOTP = 1111;

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    printf("Enter OTP: ");
    scanf("%d", &otp);

    // Check Username
    if (strcmp(username, correctUsername) == 0) {

        // Check Password
        if (strcmp(password, correctPassword) == 0) {

            // Check OTP
            if (otp == correctOTP) {
                printf("Login Successful\n");
            }
            else {
                printf("Invalid OTP\n");
            }

        }
        else {
            printf("Incorrect Password\n");
        }

    }
    else {
        printf("Invalid Username\n");
    }

    return 0;
}
