#include <stdio.h>

int main(){

 // A number analysis system determines the type of number entered by the user.

 int num = 0;

 printf("Enter a number: ");
 scanf("%d",&num);
  if(num < 0) {
    printf("Number is negative");

  }
  else if(num > 0) {
    printf("Number is positive");

  }
  else {
    printf("Number is zero");
  }

  return 0;

}