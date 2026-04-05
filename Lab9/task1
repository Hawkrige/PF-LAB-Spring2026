#include<stdio.h>


float triagescore(int severity, int age, int vitals);


float triagescore(int severity, int age, int vitals)
{
    float score = 0.0;

    score = score + (severity * 0.5);
    score = score + (age * 0.3);
    score = score + (vitals * 0.2);

    return score;
}

int main()
{
    int severity, age, vitals;
    float score;

    printf("Enter severity (1-10): \n");
    scanf("%d", &severity);

    printf("Enter age risk factor (1-10): \n");
    scanf("%d", &age);

    printf("Enter vitals stability (1-10): \n");
    scanf("%d", &vitals);

    
    score = triagescore(severity, age, vitals);

    
    if(score > 7.0)
    {
        printf("Immediate attention required!\n");
    }
    else if(score >= 4.0 && score <= 7.0)
    {
        printf("Moderate priority\n");
    }
    else
    {
        printf("Can wait\n");
    }

    return 0;
}