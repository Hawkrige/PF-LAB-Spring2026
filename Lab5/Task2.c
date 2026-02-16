// Question 2: Smart Electricity Billing System (Nested If-Else + Logical Operators)
 //An electricity company charges customers as follows:
//• If Units ≤ 100 → Rs. 10 per unit
//• If Units > 100 and ≤ 300
//o If Customer Type = Domestic → Rs. 12 per unit
//o If Customer Type = Commercial → Rs. 15 per unit
//• If Units > 300 → Rs. 20 per unit
//Task:
//Design a C program using nested decision structures to calculate and display the total
//electricity bill.

#include <stdio.h>

int main() {

    int units;
    int type;   // 1 = Domestic, 2 = Commercial
    int bill;

    printf("Enter units: ");
    scanf("%d", &units);

    printf("Select consumer type:\n");
    printf("Enter 1 for Domestic\n");
    printf("Enter 2 for Commercial\n");
    scanf("%d", &type);

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units > 100 && units <= 300) {

        if (type == 1) {
            bill = units * 12;
        }
        else if (type == 2) {
            bill = units * 15;
        }
        else {
            printf("Invalid Customer Type!\n");
            return 0;
        }
    }
    else {   // units > 300
        bill = units * 20;
    }

    printf("Your total bill is: Rs. %d\n", bill);

    return 0;
}
