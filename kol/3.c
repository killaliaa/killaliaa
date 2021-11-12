#include <stdio.h>
 
int main(void)
{
    int month;
    printf ("month: ");
    scanf("%i", &month);
    
    if (month == 1 || month == 12 || month == 2)
    {
        printf("winter\n");
    }
    else if (month == 3|| month == 4 || month == 5)
    {
        printf("spring\n");
    }
    else if (month == 6|| month == 7 || month == 8)
    {
        printf("summer\n");
    }
    else if (month == 9|| month == 10|| month == 11)
    {
        printf("autumn\n");
    }
    
}
