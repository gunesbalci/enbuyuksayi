#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    int sayi2;
    int sayi3;

    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("3. sayiyi giriniz: ");
    scanf("%d", &sayi3);

    if(sayi1>sayi2 && sayi1>sayi3)
        printf("\n en buyuk sayi: %d", sayi1);

    else if(sayi2>sayi1 && sayi2>sayi3)
        printf("\n en buyuk sayi: %d", sayi2);

    else if(sayi3>sayi1 && sayi3>sayi2)
        printf("\n en buyuk sayi: %d", sayi3);

    else if(sayi1==sayi2 || sayi1==sayi3)
        printf("\n en buyuk sayi: %d", sayi1);

    else if(sayi2==sayi3)
        printf("\n en buyuk sayi: %d", sayi2);

    return 0;
}
