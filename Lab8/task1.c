
int main(){

    int marks[4][3] = {
        {80,75,90},
        {60,70,85},
        {88,92,79},
        {55,65,70}
    };

    int i,j,total;

    for(i=0;i<4;i++){
        total = 0;

        for(j=0;j<3;j++){
            total = total + marks[i][j];
        }

        printf("Student %d total: %d\n",i+1,total);
    }

    for(j=0;j<3;j++){
        total = 0;

        for(i=0;i<4;i++){
            total = total + marks[i][j];
        }

        printf("Subject %d average: %.2f\n",j+1,total/4.0);
    }

    return 0;
}