#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *contacts;
    int i;

    // first allocate memory for 3 contacts
    contacts = (int *)malloc(3 * sizeof(int));

    if(contacts == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    for(i = 0; i < 3; i++)
    {
        printf("Enter contact ID %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }

    // now expanding memory to hold 5 contacts
    contacts = (int *)realloc(contacts, 5 * sizeof(int));

    if(contacts == NULL)
    {
        printf("Memory reallocation failed\n");
        return 0;
    }

    for(i = 3; i < 5; i++)
    {
        printf("Enter contact ID %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }

    printf("\nUpdated contact list:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", contacts[i]);
    }

    free(contacts);

    return 0;
}