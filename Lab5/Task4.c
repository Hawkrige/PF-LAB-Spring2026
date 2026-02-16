//Question 4: Online Food Ordering System (Nested Switch-Case)
//Restaurant Menu:
//Main Category:
//• 1 → Fast Food
//• 2 → Desi Food
//If Fast Food:
//• 1 → Burger (Rs. 500)
//• 2 → Pizza (Rs. 1200)
//If Desi Food:
//• 1 → Biryani (Rs. 350)

//• 2 → Karahi (Rs. 1500)
//Task:
//Design a program using nested switch-case to display the selected food item and
//calculate total bill for given quantity.

#include <stdio.h>

int main() {

    int category;
    int item;
    int quantity;
    int price = 0;
    int totalBill;

    printf("Select Main Category:\n");
    printf("1 → Fast Food\n");
    printf("2 → Desi Food\n");
    scanf("%d", &category);

    switch (category) {

        case 1:   // Fast Food
            printf("Select Item:\n");
            printf("1 → Burger (Rs. 500)\n");
            printf("2 → Pizza (Rs. 1200)\n");
            scanf("%d", &item);

            switch (item) {
                case 1:
                    price = 500;
                    printf("You selected: Burger\n");
                    break;
                case 2:
                    price = 1200;
                    printf("You selected: Pizza\n");
                    break;
                default:
                    printf("Invalid Item Selection!\n");
                    return 0;
            }
            break;

        case 2:   // Desi Food
            printf("Select Item:\n");
            printf("1 → Biryani (Rs. 350)\n");
            printf("2 → Karahi (Rs. 1500)\n");
            scanf("%d", &item);

            switch (item) {
                case 1:
                    price = 350;
                    printf("You selected: Biryani\n");
                    break;
                case 2:
                    price = 1500;
                    printf("You selected: Karahi\n");
                    break;
                default:
                    printf("Invalid Item Selection!\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid Category Selection!\n");
            return 0;
    }

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    totalBill = price * quantity;

    printf("Total Bill: Rs. %d\n", totalBill);

    return 0;
}
