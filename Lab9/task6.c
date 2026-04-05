#include<stdio.h>

float totalRevenue(float bills[], int n);
int bestTable(float bills[], int n);
int isProfitable(float total);

float totalRevenue(float bills[], int n)
{
    float sum = 0;

    for(int i = 0; i < n; i++)
        sum += bills[i];

    return sum;
}

int bestTable(float bills[], int n)
{
    int maxIdx = 0;

    for(int i = 1; i < n; i++)
    {
        if(bills[i] > bills[maxIdx])
            maxIdx = i;
    }

    return maxIdx;
}

int isProfitable(float total)
{
    if(total > 10000)
        return 1;
    else
        return 0;
}

int main()
{
    float bills[5];
    float total;
    int bestIdx;

    printf("Enter bill amounts for 5 tables:\n");

    for(int i = 0; i < 5; i++)
        scanf("%f", &bills[i]);

    total = totalRevenue(bills, 5);

    bestIdx = bestTable(bills, 5);

    printf("Total Revenue: %.2f\n", total);
    printf("Best Performing Table: Table %d\n", bestIdx + 1);

    if(isProfitable(total))
        printf("Night was profitable\n");
    else
        printf("Night was not profitable\n");

    return 0;
}