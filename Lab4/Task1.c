#include<stdio.h>

int main() {

   // A university allows students to sit in exams only if attendance is 75% or above.
   int attendance = 0;
   printf("Enter the student's attendance");
   scanf("%d",&attendance);

   if (attendance >=75) {
    printf("Eligible for Exams");
    
   }
   else {
    printf("Not eligible for exams");

   }

   return 0;