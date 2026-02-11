#include<stdio.h>

int main() {

    int choice;
    int balance;
    int withdraw;

    printf("----Menu----\n 1. Balnce Inquiry \n 2. Cash Withdrawal \n 3. Deposit \n 4. Exit \n Enter your choice");
    scanf("d", &choice);
    switch (choice) {
        case 1:
        printf("your balance is: %d/n", balance);
        break;

        case 2:
        printf("Enter amount to withdraw (must be multiple of 500):  ");
        scanf("%d", &withdraw);
        if (withdraw % 500 != 0){
            printf("Enter multiples of 500 only please!");

        }
        else if( withdraw = balance){
            
        }


    }
}

  