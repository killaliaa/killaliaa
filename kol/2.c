#include <stdio.h>
 
int main(void)
{
    int a,b;
    printf("A: ");
    scanf("%i", &a);
    
    printf("B: ");
    scanf("%i", &b);
    int suma = 0;
    for (int i = a; i <= b; i++){
        suma += i;
    }
    
    printf("N: %i\n", suma);
}
