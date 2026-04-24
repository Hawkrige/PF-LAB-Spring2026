#include <stdio.h>

int totalPower(int floors)
{
    // base case given in question: 1 floor uses 100 kWh
    if(floors == 1)
        return 100;

    // each floor above doubles from below floor, so add current floor power + rest floors power
    return (100 * (1 << (floors - 1))) + totalPower(floors - 1);
}

/*
Tracing totalPower(4):

totalPower(4)
= power of 4th floor + totalPower(3)
= 800 + totalPower(3)

totalPower(3)
= 400 + totalPower(2)

totalPower(2)
= 200 + totalPower(1)

totalPower(1)
= 100

so final:
800 + 400 + 200 + 100 = 1500
*/

int main()
{
    int floors;

    printf("Enter number of floors: ");
    scanf("%d", &floors);

    if(floors <= 0)
    {
        printf("Invalid number of floors\n");
        return 0;
    }

    // calling recursive function to calc total kWh of whole building
    int total = totalPower(floors);

    printf("Total power consumption for %d floors is: %d kWh\n", floors, total);

    return 0;
}