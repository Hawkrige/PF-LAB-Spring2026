#include <stdio.h>

int main() {
    int bill;
    int discount = 0;
    int finalAmount;

    printf("Enter total bill amount: ");
    scanf("%d", &bill);

    if (bill >= 5000) {
        discount = bill * 20 / 100;
    }
    else if (bill >= 3000) {
        discount = bill * 10 / 100;
    }
    else {
        discount = 0;
    }

    finalAmount = bill - discount;

    printf("Discount: %d\n", discount);
    printf("Final Amount to Pay: %d\n", finalAmount);

    return 0;
}