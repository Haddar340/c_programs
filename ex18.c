#include <stdio.h>

int main()
{
    int nbr,i,sum = 0;
    printf("enter the tested_number: ");
    fflush(stdout);
    scanf("%d",&nbr);
    for (i=1;i<nbr;i++)
    {
        if (nbr%i == 0)
        sum = sum + i;
    }
    if (nbr<=0)
    printf("invalid Input");
    else if ((sum == nbr ) && ((sum + nbr)/2 == nbr))
    printf("the number is perfet");
    else
    printf("the number is not perfet");

    return 0;
}