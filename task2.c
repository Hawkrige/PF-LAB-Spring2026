#include <stdio.h>
#include <ctype.h>

int countUpper(char *str)
{
    // base case: stop when string ends
    if(str[0] == '\0')
        return 0;

    // check current char then move to next char using recursion
    if(isupper(str[0]))
        return 1 + countUpper(str + 1);
    else
        return countUpper(str + 1);
}

int countDigits(char *str)
{
    // same idea as above but now checking digits only
    if(str[0] == '\0')
        return 0;

    if(isdigit(str[0]))
        return 1 + countDigits(str + 1);
    else
        return countDigits(str + 1);
}

int main()
{
    char password[100];

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);

    // calling recursive functions to count uppercase letters and digits in password
    int upper = countUpper(password);
    int digits = countDigits(password);

    printf("Uppercase letters found: %d\n", upper);
    printf("Digits found: %d\n", digits);

    return 0;
}