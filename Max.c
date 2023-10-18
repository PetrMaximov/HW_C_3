// Задача 1. Наибольшее из пяти чисел

#include <stdio.h>

int main(void)
{
    int a,b,c,d,e;
    printf ("Input five numbers: \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e); 

    int max = a>b ? a : b;
        max = max>c ? max : c;
        max = max>d ? max : d;
        max = max>e ? max : e;
        printf ("Maximum number = ");
        printf("%d",max);

    return 0;
}