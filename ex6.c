#include <stdio.h>

int main()
{
    int month_number; /*number of month exist*/
    printf("enter the month number: ");
    fflush(stdout);
    scanf("%d",&month_number);

    switch (month_number)
    {
    case 1:
        printf("Janv have 31 days");
        break;
    case 2:
        printf("Fev have 28 days");
        break;
    case 3:
        printf("Mar have 31 days");
        break;
    case 4:
        printf("Apr have 30 days");
    break;
    case 5:
        printf("May have 31 days");
    break;
    case 6:
        printf("jun have 30 days");
    break;
    case 7:
        printf("juil have 31 days");
    break;
    case 8:
        printf("out have 30 days");
    break;
    case 9:
        printf("sep have 31 days");
    break;
    case 10:
        printf("oct have 30 days");
    break;
    case 11:
        printf("nov have 31 days");
    break;
    case 12:
        printf("dec have 30 days");
    break;
    default:
    printf("Not exist");
        break;
    }
    return 0;
}