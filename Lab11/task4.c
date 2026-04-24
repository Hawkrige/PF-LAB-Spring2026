#include <stdio.h>
#include <string.h>

struct Patient
{
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};


void displayAll(struct Patient p[], int n)
{
    // prints all patient records one by one
    printf("\nPatient Records:\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nName: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("Blood Type: %s\n", p[i].bloodType);
        printf("Patient ID: %d\n", p[i].patientID);
        printf("Diagnosis: %s\n", p[i].diagnosis);
    }
}


void searchByID(struct Patient p[], int n, int id)
{
    // checking each patient id if matches
    for(int i = 0; i < n; i++)
    {
        if(p[i].patientID == id)
        {
            printf("\nPatient found\n");
            printf("Name: %s\n", p[i].name);
            printf("Age: %d\n", p[i].age);
            printf("Blood Type: %s\n", p[i].bloodType);
            printf("Diagnosis: %s\n", p[i].diagnosis);
            return;
        }
    }

    printf("Patient not found\n");
}


int main()
{
    struct Patient p[5];
    int searchID;

    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter patient %d name: ", i + 1);
        fgets(p[i].name, sizeof(p[i].name), stdin);
        p[i].name[strcspn(p[i].name, "\n")] = '\0';

        printf("Enter age: ");
        scanf("%d", &p[i].age);
        getchar(); // clearing leftover newline

        printf("Enter blood type: ");
        fgets(p[i].bloodType, sizeof(p[i].bloodType), stdin);
        p[i].bloodType[strcspn(p[i].bloodType, "\n")] = '\0';

        printf("Enter patient ID: ");
        scanf("%d", &p[i].patientID);
        getchar();

        printf("Enter diagnosis: ");
        fgets(p[i].diagnosis, sizeof(p[i].diagnosis), stdin);
        p[i].diagnosis[strcspn(p[i].diagnosis, "\n")] = '\0';
    }

    // showing all records after input so receptionist can quickly check
    displayAll(p, 5);

    printf("\nEnter patient ID to search: ");
    scanf("%d", &searchID);

    searchByID(p, 5, searchID);

    return 0;
}