#include<stdio.h>

int basicAttack(int dmg, int hp);
int powerStrike(int dmg, int hp);
int heal(int dmg, int hp);
int poisonAttack(int dmg, int hp);

int basicAttack(int dmg, int hp)
{
    return hp - dmg;
}

int powerStrike(int dmg, int hp)
{
    return hp - (int)(dmg * 2.5);
}

int heal(int dmg, int hp)
{
    return hp + 20;
}

int poisonAttack(int dmg, int hp)
{
    printf("Poison effect applied!\n");
    return hp - (dmg / 2);
}

int main()
{
    int hp = 100;
    int dmg = 25;
    int choice;

    int (*action)(int, int);

    for(int turn = 1; turn <= 3; turn++)
    {
        printf("\nTurn %d\n", turn);
        printf("1. Basic Attack\n");
        printf("2. Power Strike\n");
        printf("3. Heal\n");
        printf("4. Poison Attack\n");
        printf("Choose action: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                action = basicAttack;
                break;
            case 2:
                action = powerStrike;
                break;
            case 3:
                action = heal;
                break;
            case 4:
                action = poisonAttack;
                break;
            default:
                printf("Invalid choice\n");
                turn--;
                continue;
        }

        hp = action(dmg, hp);

        printf("Updated HP: %d\n", hp);
    }

    return 0;
}