#include<stdio.h>

int validatePIN(int storedPIN, int enteredPIN);

int validatePIN(int storedPIN, int enteredPIN)
{
    if(storedPIN == enteredPIN)
        return 1;
    else
        return 0;
}

int main()
{
    int storedPIN = 4729;
    int enteredPIN;
    int attempts;

    for(attempts = 1; attempts <= 3; attempts++)
    {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPIN);

        if(validatePIN(storedPIN, enteredPIN))
        {
            printf("Access granted. Welcome!\n");
            break;
        }
        else
        {
            if(attempts < 3)
                printf("Incorrect PIN. Attempts remaining: %d\n", 3 - attempts);
            else
                printf("Card blocked. Contact your bank.\n");
        }
    }

    return 0;
}