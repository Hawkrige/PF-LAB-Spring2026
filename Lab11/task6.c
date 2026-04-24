#include <stdio.h>
#include <string.h>

struct Order
{
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];
};


float computeTotal(struct Order o)
{
    // total bill = quantity * unit price
    return o.quantity * o.unitPrice;
}


void filterByStatus(struct Order orders[], int n, char *status)
{
    int found = 0;

    // checking each order if status matches
    for(int i = 0; i < n; i++)
    {
        if(strcmp(orders[i].status, status) == 0)
        {
            printf("\nOrder ID: %d\n", orders[i].orderID);
            printf("Customer: %s\n", orders[i].customerName);
            printf("Product: %s\n", orders[i].productName);
            printf("Quantity: %d\n", orders[i].quantity);
            printf("Unit Price: %.2f\n", orders[i].unitPrice);

            found = 1;
        }
    }

    if(found == 0)
        printf("No orders with this status\n");
}


int main()
{
    struct Order orders[4];
    char searchStatus[20];

    for(int i = 0; i < 4; i++)
    {
        printf("\nEnter order %d ID: ", i + 1);
        scanf("%d", &orders[i].orderID);
        getchar();

        printf("Enter customer name: ");
        fgets(orders[i].customerName, sizeof(orders[i].customerName), stdin);
        orders[i].customerName[strcspn(orders[i].customerName, "\n")] = '\0';

        printf("Enter product name: ");
        fgets(orders[i].productName, sizeof(orders[i].productName), stdin);
        orders[i].productName[strcspn(orders[i].productName, "\n")] = '\0';

        printf("Enter quantity: ");
        scanf("%d", &orders[i].quantity);

        printf("Enter unit price: ");
        scanf("%f", &orders[i].unitPrice);
        getchar();

        printf("Enter order status (Pending/Shipped/Delivered): ");
        fgets(orders[i].status, sizeof(orders[i].status), stdin);
        orders[i].status[strcspn(orders[i].status, "\n")] = '\0';
    }

    printf("\nOrder totals:\n");

    for(int i = 0; i < 4; i++)
    {
        float total = computeTotal(orders[i]);

        printf("Order ID %d total bill: %.2f\n", orders[i].orderID, total);
    }

    printf("\nEnter status to filter orders: ");
    fgets(searchStatus, sizeof(searchStatus), stdin);
    searchStatus[strcspn(searchStatus, "\n")] = '\0';

    filterByStatus(orders, 4, searchStatus);

    return 0;
}