//A smart parking system calculates parking fees based on:
//Main Vehicle Type:
//1 → Car
//2 → Bike
//3 → Bus
//If Car:
//• 1 → Regular Parking (Rs. 50 per hour)
//• 2 → VIP Parking (Rs. 100 per hour)
//If Bike:
//• 1 → Regular (Rs. 20 per hour)
//• 2 → Premium (Rs. 40 per hour)
//If Bus:
//• Fixed Rate Rs. 200 per hour
//Task:
//Write a C program using nested switch-case statements to calculate total parking fee
//based on vehicle type and hours parked.

#include <stdio.h>

int main() {

    int vehicleType;
    int parkingType;
    int hours;
    int rate = 0;
    int totalFee;

    printf("Select Vehicle Type:\n");
    printf("1 → Car\n");
    printf("2 → Bike\n");
    printf("3 → Bus\n");
    scanf("%d", &vehicleType);

    printf("Enter number of hours parked: ");
    scanf("%d", &hours);

    switch (vehicleType) {

        case 1:  // Car
            printf("Select Parking Type:\n");
            printf("1 → Regular (Rs. 50 per hour)\n");
            printf("2 → VIP (Rs. 100 per hour)\n");
            scanf("%d", &parkingType);

            switch (parkingType) {
                case 1:
                    rate = 50;
                    break;
                case 2:
                    rate = 100;
                    break;
                default:
                    printf("Invalid Parking Type!\n");
                    return 0;
            }
            break;

        case 2:  // Bike
            printf("Select Parking Type:\n");
            printf("1 → Regular (Rs. 20 per hour)\n");
            printf("2 → Premium (Rs. 40 per hour)\n");
            scanf("%d", &parkingType);

            switch (parkingType) {
                case 1:
                    rate = 20;
                    break;
                case 2:
                    rate = 40;
                    break;
                default:
                    printf("Invalid Parking Type!\n");
                    return 0;
            }
            break;

        case 3:  // Bus
            rate = 200;
            break;

        default:
            printf("Invalid Vehicle Type!\n");
            return 0;
    }

    totalFee = rate * hours;

    printf("Total Parking Fee: Rs. %d\n", totalFee);

    return 0;
}
