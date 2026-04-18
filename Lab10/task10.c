#include <stdio.h>
#include <string.h>

int main() {

    FILE *fptr;
    char name[50];
    char line[100];
    int s1, s2, s3;
    float avg;
    char status[10];

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if(name[len - 1] == '\n'){
        name[len - 1] = '\0';
    }

    printf("Enter score 1: ");
    scanf("%d", &s1);

    printf("Enter score 2: ");
    scanf("%d", &s2);

    printf("Enter score 3: ");
    scanf("%d", &s3);

    avg = (s1 + s2 + s3) / 3.0;

    if(avg >= 50)
        strcpy(status, "Pass");
    else
        strcpy(status, "Fail");

    fptr = fopen("report.txt", "w+");

    if(fptr == NULL){
        printf("Error opening file\n");
        return 0;
    }

    fprintf(fptr, "Report Card\n");
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Score 1: %d\n", s1);
    fprintf(fptr, "Score 2: %d\n", s2);
    fprintf(fptr, "Score 3: %d\n", s3);
    fprintf(fptr, "Average: %.2f\n", avg);
    fprintf(fptr, "Status: %s\n", status);

    rewind(fptr);

    printf("\nGenerated Report:\n");

    while(fgets(line, sizeof(line), fptr) != NULL){
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}