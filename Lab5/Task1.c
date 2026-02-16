// A university awards scholarships based on academic and financial criteria:
//• If CGPA ≥ 3.5
//o If Family Income < 50,000 → 100% Scholarship

//o Else → 50% Scholarship
//• Else
//o If CGPA ≥ 3.0 AND Family Income < 40,000 → 25% Scholarship
//o Else → No Scholarship

//Task:
//Write a C program using nested if-else statements and logical operators to determine
//scholarship eligibility.


#include <stdio.h>

int main() {

    float GPA;
    int income;

    printf("Enter CGPA: ");
    scanf("%f", &GPA);

    printf("Enter Family Income: ");
    scanf("%d", &income);

    if (GPA >= 3.5) {

        if (income < 50000) {
            printf("100%% Scholarship\n");
        } 
        else {
            printf("50%% Scholarship\n");
        }

    } 
    else {

        if (GPA >= 3.0 && income < 40000) {
            printf("25%% Scholarship\n");
        } 
        else {
            printf("No Scholarship\n");
        }

    }

    return 0;
}
