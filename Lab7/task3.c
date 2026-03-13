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
    int pcount = 0;
    int fcount = 0;

    for(i=0;i<10;i++){
        printf("Enter 1 for pass student and Enter 2 for fail student or Enter -1 to exit program: ");
        scanf("%d",&k);

        if(k == 1 || k == 2){
            printf("Enter marks: ");
            scanf("%d",&marks);

            if(k == 1){
                pass[pcount] = marks;
                pcount++;
            }
            else if(k == 2){
                fail[fcount] = marks;
                fcount++;
            }
        }

        else if(k == -1){
            break;
        }
    }

    printf("Pass students marks: ");
    for(int j = 0; j < pcount ; j++){
        printf("%d ",pass[j]);
    }
    printf("\n");

    printf("Fail students marks: ");
    for(int z = 0; z < fcount; z++){
        printf("%d ",fail[z]);
    }
    printf("\n");

    for(int x = 0; x < pcount; x++){
        sum1 = sum1 + pass[x];
    }

    for(int x = 0; x < fcount; x++){
        sum2 = sum2 + fail[x];
    }

    if(pcount > 0)
        avgp = sum1 / (float)pcount;

    if(fcount > 0)
        avgf = sum2 / (float)fcount;

    printf("Average of Pass students: %.2f\n",avgp);
    printf("Average of Fail students: %.2f\n",avgf);

    return 0;
}