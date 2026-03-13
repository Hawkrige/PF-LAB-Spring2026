#include<stdio.h>

int main(){

    int a[10];
    int i,num,count=0;

    for(i=0;i<10;i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d",&num);

    for(i=0;i<10;i++)
    {
        if(a[i]==num)
        {
            count++;
        }
    }

    if(count>0)
    {
        printf("Number occurred %d times",count);
    }
    else
    {
        printf("number not found");
    }

    return 0;
}