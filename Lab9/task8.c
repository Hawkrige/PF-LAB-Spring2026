#include<stdio.h>

int main()
{
    void *sensor;

    int vibrations = 847;
    float temperature = 73.6;
    char status = 'W';

    sensor = &vibrations;

    printf("Vibrations: %d\n", *(int *)sensor);
    printf("Address: %p\n", sensor);

    sensor = &temperature;

    printf("Temperature: %.2f\n", *(float *)sensor);
    printf("Address: %p\n", sensor);

    sensor = &status;

    printf("Status: %c\n", *(char *)sensor);
    printf("Address: %p\n", sensor);

    if(*(char *)sensor == 'N')
    {
        printf("Normal\n");
    }
    else if(*(char *)sensor == 'W')
    {
        printf("Warning\n");
    }
    else if(*(char *)sensor == 'C')
    {
        printf("Critical\n");
    }

    return 0;
}