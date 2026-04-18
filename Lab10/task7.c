#include <stdio.h>
#include <string.h>

int main() {

    FILE *fptr;
    char product[50];
    int quantity;

    fptr = fopen("inventory.txt", "a");

    if(fptr == NULL){
        printf("Error opening file in append mode\n");
        return 0;
    }

    printf("Enter product name: ");
    fgets(product, sizeof(product), stdin);

    int len = strlen(product);
    if(product[len - 1] == '\n'){
        product[len - 1] = '\0';
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    fprintf(fptr, "%s %d\n", product, quantity);

    fclose(fptr);

    fptr = fopen("inventory.txt", "r");

    if(fptr == NULL){
        printf("Error opening file in read mode\n");
        return 0;
    }

    printf("\nInventory Records:\n");

    while(fscanf(fptr, "%s %d", product, &quantity) != EOF){
        printf("%s %d\n", product, quantity);
    }

    fclose(fptr);

    return 0;
}