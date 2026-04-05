#include<stdio.h>

float toMegajoules(float kwh);
float toBTU(float kwh);
float toCalories(float kwh);

float toMegajoules(float kwh)
{
    return kwh * 3.6;
}

float toBTU(float kwh)
{
    return kwh * 3412.14;
}

float toCalories(float kwh)
{
    return kwh * 859845;
}

int main()
{
    float kwh;

    printf("Enter energy in kWh: ");
    scanf("%f", &kwh);

    printf("\nConversion Report\n");
    printf("Megajoules: %.2f MJ\n", toMegajoules(kwh));
    printf("BTU: %.2f BTU\n", toBTU(kwh));
    printf("Calories: %.2f cal\n", toCalories(kwh));

    return 0;
}