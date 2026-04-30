#include <stdio.h>
#include <stdlib.h>

int main()
{
    int students;
    float *grades;

    printf("Enter number of students: ");
    scanf("%d", &students);

    // allocating memory based on student count
    grades = (float *)malloc(students * sizeof(float));

    if(grades == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    for(int i = 0; i < students; i++)
    {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    printf("\nStudent grades:\n");

    for(int i = 0; i < students; i++)
    {
        printf("%.2f\n", grades[i]);
    }

    free(grades); // releasing the allocated memory after use

    return 0;
}