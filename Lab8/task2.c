#include<stdio.h>

int main(){

    int array[5][6] = {
        {0,1,0,1,1,0},
        {0,0,0,1,1,0},
        {1,1,1,1,0,0},
        {1,1,1,1,1,1},
        {1,0,0,0,1,1}
    };

    int i,j;
    int avail = 0;
    int count;
    int max = 0;
    int mostbooked = 0;

    for(i=0;i<5;i++){
        count = 0;

        for(j=0;j<6;j++){
            if(array[i][j]==0){
                avail++;
            }
            else if(array[i][j]==1){
                count++;
            }
        }

        if(count > max){
            max = count;
            mostbooked = i;
        }
    }

    printf("Available seats: %d\n",avail);
    printf("Row with most booked seats: %d\n",mostbooked+1);

    return 0;
}