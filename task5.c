#include <stdio.h>
#include <string.h>

struct Department
{
    char deptCode[10];
    char deptName[50];
};

struct Course
{
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};


void printByDept(struct Course c[], int n, char code[])
{
    int found = 0;

    // checking each course if dept code matches
    for(int i = 0; i < n; i++)
    {
        if(strcmp(c[i].dept.deptCode, code) == 0)
        {
            printf("\nCourse Code: %s\n", c[i].courseCode);
            printf("Course Name: %s\n", c[i].courseName);
            printf("Credit Hours: %d\n", c[i].creditHours);
            printf("Department: %s\n", c[i].dept.deptName);

            found = 1;
        }
    }

    if(found == 0)
        printf("No courses found for this department\n");
}


int main()
{
    struct Course c[3];
    char searchCode[10];

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter course %d code: ", i + 1);
        fgets(c[i].courseCode, sizeof(c[i].courseCode), stdin);
        c[i].courseCode[strcspn(c[i].courseCode, "\n")] = '\0';

        printf("Enter course name: ");
        fgets(c[i].courseName, sizeof(c[i].courseName), stdin);
        c[i].courseName[strcspn(c[i].courseName, "\n")] = '\0';

        printf("Enter credit hours: ");
        scanf("%d", &c[i].creditHours);
        getchar();

        printf("Enter department code: ");
        fgets(c[i].dept.deptCode, sizeof(c[i].dept.deptCode), stdin);
        c[i].dept.deptCode[strcspn(c[i].dept.deptCode, "\n")] = '\0';

        printf("Enter department name: ");
        fgets(c[i].dept.deptName, sizeof(c[i].dept.deptName), stdin);
        c[i].dept.deptName[strcspn(c[i].dept.deptName, "\n")] = '\0';
    }

    printf("\nAll course details:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nCourse Code: %s\n", c[i].courseCode);
        printf("Course Name: %s\n", c[i].courseName);
        printf("Credit Hours: %d\n", c[i].creditHours);
        printf("Department Code: %s\n", c[i].dept.deptCode);
        printf("Department Name: %s\n", c[i].dept.deptName);
    }

    printf("\nEnter department code to search courses: ");
    fgets(searchCode, sizeof(searchCode), stdin);
    searchCode[strcspn(searchCode, "\n")] = '\0';

    printByDept(c, 3, searchCode);

    return 0;
}