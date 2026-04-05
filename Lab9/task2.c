#include<stdio.h>

float applyDiscount(float price, int tier);
void printInvoice(float original, float discounted);

float applyDiscount(float price, int tier)
{
    float discounted;

    if(tier == 1)
        discounted = price - (price * 0.05);
    else if(tier == 2)
        discounted = price - (price * 0.10);
    else if(tier == 3)
        discounted = price - (price * 0.20);
    else if(tier == 4)
        discounted = price - (price * 0.30);
    else
        discounted = price;

    return discounted;
}

void printInvoice(float original, float discounted)
{
    float discountAmount = original - discounted;
    float delivery = 0;

    if(discounted < 2000)
        delivery = 150;

    float total = discounted + delivery;

    printf("Original Price: %.2f\n", original);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Delivery Charges: %.2f\n", delivery);
    printf("Final Total: %.2f\n", total);
}

int main()
{
    float price, discounted;
    int tier;

    printf("Enter original price: ");
    scanf("%f", &price);

    printf("Enter membership tier (1-4): ");
    scanf("%d", &tier);

    discounted = applyDiscount(price, tier);

    printInvoice(price, discounted);

    return 0;