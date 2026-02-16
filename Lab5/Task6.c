/*
Question 6: Triangle Type Identifier (Nested If-Else + Relational Operators)

User enters three sides of a triangle.

Conditions:
• If sum of any two sides ≤ third side → Not a valid triangle
• If all sides equal → Equilateral
• If two sides equal → Isosceles
• If all sides different → Scalene

Task:
Design a C program using nested if-else statements and relational operators to
identify the triangle type.
*/

#include <stdio.h>

int main() {

    float side1, side2, side3;

    printf("Enter side 1: ");
    scanf("%f", &side1);

    printf("Enter side 2: ");
    scanf("%f", &side2);

    printf("Enter side 3: ");
    scanf("%f", &side3);

    // Check if valid triangle
    if ((side1 + side2 <= side3) || 
        (side1 + side3 <= side2) || 
        (side2 + side3 <= side1)) {

        printf("Not a Valid Triangle\n");
    }
    else {

        // Check triangle type
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral Triangle\n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    }

    return 0;
}
