#include<stdio.h>

int main(){

    int pass[10];
    int fail[10];
    int i = 0;
    int k = 0;
    int marks;
    float avgp;
    float avgf;
    int sum1 = 0;
    int sum2 = 0;

    for(i=0;i<10;i++){
        printf("Enter 1 for pass student and Enter 2 for fail student or Enter -1 to exit program: ");
        scanf("%d",&k);

        if(k == 1 || k == 2){
            printf("Enter marks: ");
            scanf("%d",&marks);

            if(k == 1){
                pass[i] = marks;
            }
            else if(k == 2){
                fail[i] = marks;
            }
        }

        else if(k == -1){
            break;
        }
    }

    printf("Pass students marks: ");
    for(int j = 0; j < 10 ; j++){
        printf("%d ",pass[j]);
    }
    printf("\n");

    printf("Fail students marks: ");
    for(int z = 0; z < 10; z++){
        printf("%d ",fail[z]);
    }
    printf("\n");

    for(int x = 0; x < 10; x++){
        sum1 = sum1 + pass[x];
        sum2 = sum2 + fail[x];
    }

    avgp = sum1/10.0;
    avgf = sum2/10.0;

    printf("Average of Pass students: %.2f\n",avgp);
    printf("Average of Fail students: %.2f\n",avgf);

    return 0;
}