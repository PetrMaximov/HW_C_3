// Задача 4. Какое время года

#include <stdio.h>

int main(void)
{
    int a;
    printf ("Input a number from 1 to 12: \n");
    scanf("%d",&a); 

    if ( (a >= 1 && a <= 2) || (a == 12) )
        printf ("winter\n");
    if ( a >= 3 && a <= 5 )
        printf ("spring\n");
    if ( a >= 6 && a <= 8 )
        printf ("summer\n");
    if ( a >= 9 && a <= 11 )
        printf ("autumn\n");
    
    return 0;
}