#include <stdio.h>

int countWays(int n)
{
    // base cases given in hint (similar to fibo type structure)
    if(n == 0)
        return 1;

    if(n == 1)
        return 1;

    // total ways = coming from 1 step back + 2 steps back
    return countWays(n - 1) + countWays(n - 2);
}


void printPaths(int n, char path[], int index)
{
    // when exact step reached, print stored path
    if(n == 0)
    {
        for(int i = 0; i < index; i++)
            printf("%c", path[i]);

        printf("\n");
        return;
    }

    // try move of 1 step if possible
    if(n >= 1)
    {
        path[index] = '1';
        path[index + 1] = (n == 1) ? '\0' : '+';
        printPaths(n - 1, path, index + ((n == 1) ? 1 : 2));
    }

    // try move of 2 steps if possible
    if(n >= 2)
    {
        path[index] = '2';
        path[index + 1] = (n == 2) ? '\0' : '+';
        printPaths(n - 2, path, index + ((n == 2) ? 1 : 2));
    }
}


int main()
{
    int N;
    char path[50];

    printf("Enter step count (1 to 15): ");
    scanf("%d", &N);

    if(N < 1 || N > 15)
    {
        printf("Invalid input range\n");
        return 0;
    }

    // calling recursive function to calculate number of distinct ways
    int ways = countWays(N);

    printf("Total distinct ways: %d\n", ways);

    printf("Possible paths:\n");

    // helper recursion prints all sequences like 1+2+1 etc
    printPaths(N, path, 0);

    return 0;
}