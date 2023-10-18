// Задача 3. В порядке возрастания

#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf ("Input three numbers: \n");
    scanf("%d%d%d",&a,&b,&c); 

    if ( a <= b && b <= c )
        printf ("YES\n");
    else
        printf ("NO\n");

    return 0;
}