/*
Question 8: Advanced Scientific Calculator (Switch + Nested Conditions + Math Library)

Design a scientific calculator that performs the following operations:

Basic Operations:
1 → Addition
2 → Subtraction
3 → Multiplication
4 → Division

Scientific Operations:
5 → Square Root
6 → Power (x^y)
7 → Logarithm (log base 10)
8 → Absolute Value
9 → Sine (sin)
10 → Cosine (cos)
11 → Tangent (tan)

Conditions:
• Division by zero not allowed
• Square root of negative number not allowed
• Logarithm of zero or negative not allowed

Task:
• Use switch-case to select operation
• Use <math.h> functions (sqrt(), pow(), log10(), sin(), cos(), tan(), fabs())
• Implement nested decision structures for input validation
*/

#include <stdio.h>
#include <math.h>

int main() {

    int choice;
    double num1, num2, result;

    printf("Select Operation:\n");
    printf("1  → Addition\n");
    printf("2  → Subtraction\n");
    printf("3  → Multiplication\n");
    printf("4  → Division\n");
    printf("5  → Square Root\n");
    printf("6  → Power (x^y)\n");
    printf("7  → Log base 10\n");
    printf("8  → Absolute Value\n");
    printf("9  → Sine\n");
    printf("10 → Cosine\n");
    printf("11 → Tangent\n");

    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            if (num2 == 0) {
                printf("Error: Division by zero not allowed!\n");
            }
            else {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);

            if (num1 < 0) {
                printf("Error: Square root of negative number not allowed!\n");
            }
            else {
                result = sqrt(num1);
                printf("Result = %.2lf\n", result);
            }
            break;

        case 6:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);

            if (num1 <= 0) {
                printf("Error: Logarithm of zero or negative not allowed!\n");
            }
            else {
                result = log10(num1);
                printf("Result = %.2lf\n", result);
            }
            break;

        case 8:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = fabs(num1);
            printf("Result = %.2lf\n", result);
            break;

        case 9:
            printf("Enter angle in radians: ");
            scanf("%lf", &num1);
            result = sin(num1);
            printf("Result = %.2lf\n", result);
            break;

        case 10:
            printf("Enter angle in radians: ");
            scanf("%lf", &num1);
            result = cos(num1);
            printf("Result = %.2lf\n", result);
            break;

        case 11:
            printf("Enter angle in radians: ");
            scanf("%lf", &num1);
            result = tan(num1);
            printf("Result = %.2lf\n", result);
            break;

        default:
            printf("Invalid Operation Selected!\n");
    }

    return 0;
}
