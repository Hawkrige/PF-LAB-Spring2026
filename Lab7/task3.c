#include<stdio.h>

int main(){
    int pass[10];
    int fail[10];
    int i = 0;
    int k = 0;
    int marks;
    float avgp;
    float avgcf;
    int sum1 = 0;
    int sum2 = 0;

    for(k < 10;k++){
        printf("Enter 1 for pass student and Enter 2 for fail student or Enter -1 to exit program");
        scanf("%d",i);

        if(i == 1 ||i == 2){
            printf("Enter marks")
            scanf("%d", marks);

            if(i == 1){
                pass[k]= marks;
                
            }
            else if(i == 2){
                fail[k] = marks;
            }


        
        }

        else if(i == -1){
            break;
        }

        

        

    
    }
    for(int j = 0; j<10 ; j++){
        printf("%d Pass students marks: ",pass[j]);


    }
    /n;

    for(int z = 0;z < 10;z++){
        printf("%d Fail students marks: ",fail[z]);

    }
    /n;

    for(int x = 0;x < 10;x++){
        sum1 = sum1 + pass[x];
        sum2 = sum2 + fail[x];

        avgp = sum1/10;
        avgf = sum2/10;

        printf("%f average of Pass students",avgp);
        printf("%f average of fail students",avgf);
        
    }

}