/*
Question 5: Employee Bonus Calculation (Nested Ternary Operator)

A company calculates bonus as:
• If Service > 10 years → 30% of salary
• Else if Service > 5 years → 20%
• Else → 10%

Task:
Write a C program using a nested ternary operator to calculate and display the bonus amount.
*/

#include <stdio.h>

int main() {

    float salary, bonus;
    int serviceYears;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Years of Service: ");
    scanf("%d", &serviceYears);

    bonus = (serviceYears > 10) ? (0.30 * salary) :
            (serviceYears > 5)  ? (0.20 * salary) :
                                  (0.10 * salary);

    printf("Bonus Amount: %.2f\n", bonus);

    return 0;
}
