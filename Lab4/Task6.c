#include <stdio.h>

int main() {

    int m1, m2, m3, m4, m5;
    int total, percentage;

    printf("Enter marks of 5 subjects (0-100):\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;   // Integer division

    printf("Percentage = %d\n", percentage);

    if (percentage >= 85) {
        printf("Grade A\n");
    }
    else if (percentage >= 70) {
        printf("Grade B\n");
    }
    else if (percentage >= 50) {
        printf("Grade C\n");
    }
    else {
        printf("Fail\n");
    }

    return 0;
}