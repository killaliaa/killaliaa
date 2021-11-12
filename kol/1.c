#include <stdio.h>
 
int main(void)
{
    int n;
    printf("N = ");
    scanf("%i", &n);
    int k = 0;
    int a = 0;
    
    while (a < n)
    {
        k++;
        a +=3;
    }
    printf("K = %i\n", k);
    return 0;
}
