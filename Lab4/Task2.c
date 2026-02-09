#include <stdio.h>

int main() {
    int units;

     //An electricity company classifies users based on electricity consumption.
    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    
    if (units <= 100) {
        printf("Electricity Usage: Low Usage\n");
    }
    else if (units <= 300) {
        printf("Electricity Usage: Medium Usage\n");
    }
    else {
        printf("Electricity Usage: High Usage\n");
    }

    return 0;
}
