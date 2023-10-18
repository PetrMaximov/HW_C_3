// Задача2. Наименьшее из пяти чисел

#include <stdio.h>

int main(void)
{
    int a,b,c,d,e;
    printf ("Input five numbers: \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e); 
    int min = a<b ? a : b;
        min = min<c ? min : c; 
        min = min<d ? min : d;
        min = min<e ? min : e; 
    
        printf ("Minimum number = ");
        printf("%d",min);

    return 0;
}