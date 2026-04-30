#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float *temp;

    printf("Enter number of sensors: ");
    scanf("%d", &N);

    temp = (float *)calloc(N, sizeof(float));

    if(temp == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    printf("\nValues after calloc allocation:\n");

    for(int i = 0; i < N; i++)
    {
        printf("%.2f ", temp[i]);
    }

    printf("\n\nNow enter temperature readings:\n");

    for(int i = 0; i < N; i++)
    {
        printf("Sensor %d: ", i + 1);
        scanf("%f", &temp[i]);
    }

    printf("\nUpdated temperature readings:\n");

    for(int i = 0; i < N; i++)
    {
        printf("%.2f ", temp[i]);
    }

    free(temp);
    temp = NULL;

    return 0;
}