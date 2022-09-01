#include <stdio.h>

int main()
{
    int initial, fifty, twenty, tens, fives, ones;
    printf("Enter a dollar amount: ");
    scanf("%d", &initial);
    fifty= initial / 50;
    initial= initial - fifty * 50;
    twenty= initial / 20;
    initial= initial - twenty * 20;
    tens= initial / 10;
    initial = initial - tens * 10;
    fives = initial / 5;
    initial = initial - fives * 5;
    ones= initial / 1;
    initial = initial - ones * 1;
    printf("$50 bills: %d \n$20 bills: %d \n$10 bills: %d \n$5 bills: %d \n$1 bills: %d\n", fifty, twenty, tens, fives, ones);
    return 0;
    }