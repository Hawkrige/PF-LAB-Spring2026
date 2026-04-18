#include <stdio.h>
#include <string.h>

int main() {

    FILE *fptr;
    char name[50];
    int grade;

    fptr = fopen("grades.txt", "w");

    if(fptr == NULL){
        printf("Error opening file for writing\n");
        return 0;
    }

    for(int i = 0; i < 3; i++){

        printf("Enter student name: ");
        fgets(name, sizeof(name), stdin);

        int len = strlen(name);
        if(name[len - 1] == '\n'){
            name[len - 1] = '\0';
        }

        printf("Enter grade: ");
        scanf("%d", &grade);
        getchar();

        fprintf(fptr, "%s %d\n", name, grade);
    }

    fclose(fptr);

    fptr = fopen("grades.txt", "r");

    if(fptr == NULL){
        printf("Error opening file for reading\n");
        return 0;
    }

    printf("\nStored Records:\n");

    while(fscanf(fptr, "%s %d", name, &grade) != EOF){
        printf("%s %d\n", name, grade);
    }

    fclose(fptr);

    return 0;
}