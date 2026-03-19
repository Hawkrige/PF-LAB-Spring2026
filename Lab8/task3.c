#include<stdio.h>

int main(){

    int temp[7][3] = {
        {30,35,28},
        {32,36,29},
        {31,37,30},
        {33,38,31},
        {34,39,32},
        {35,40,33},
        {36,41,34}
    };

    int i,j;
    int max = temp[0][0];
    int sum;
    float avg;

    
    for(i=0;i<7;i++){
        for(j=0;j<3;j++){
            if(temp[i][j] > max){
                max = temp[i][j];
            }
        }
    }

    printf("Highest temperature: %d\n",max);

    
    for(i=0;i<7;i++){
        sum = 0;

        for(j=0;j<3;j++){
            sum = sum + temp[i][j];
        }

        avg = sum / 3.0;

        printf("Day %d average: %.2f\n",i+1,avg);
    }

    return 0;
}