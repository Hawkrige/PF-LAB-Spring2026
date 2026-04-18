#include <stdio.h>

int main() {

    FILE *fptr;
    int score, val;
    int sum = 0;
    float avg;
    int count = 0;

    fptr = fopen("survey.txt", "w");

    if(fptr == NULL){
        printf("Error opening file for writing\n");
        return 0;
    }

    for(int i = 0; i < 5; i++){
        printf("Enter score %d: ", i + 1);
        scanf("%d", &score);

        fprintf(fptr, "%d\n", score);
    }

    fclose(fptr);

    fptr = fopen("survey.txt", "r");

    if(fptr == NULL){
        printf("Error opening file for reading\n");
        return 0;
    }

    while(fscanf(fptr, "%d", &val) != EOF){
        sum += val;
        count++;
    }

    fclose(fptr);

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
    
}