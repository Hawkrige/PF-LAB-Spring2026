#include<stdio.h>

int main(){
    int arr[6];
    int *p = arr;

    for(int i = 0;i<6;i++)
    {
        printf("Enter marks:\n ");
        scanf("%d",(p+i));
    }
    
    printf("original marks : \n");

    for(int j = 0; j<6;j++)
    {

        printf(" %d ",*(p+j));
        

    }
    printf("\n");

    int highest;
    highest = *p;
    int newmark = 0;
    
    for(int k = 0;k<6; k++)
    {

    if(*(p+k)> highest)
    {
        highest = *(p+k);
    }
    }
    
    printf("Scaled marks: \n");

    for(int x = 0 ; x<6;x++)
    {
        newmark = ((float)*(p+x)/ highest) * 100;
        
        *(p+x) = (int)(newmark);

        

        printf("%d ", *(p+x));
        
    }

    
return 0;

}