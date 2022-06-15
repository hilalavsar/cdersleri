#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*if else ornekeleri: girilen 3 sayinin toplami ortalamasi ve
    carpimini ve de en kucuk il en buyuk degerini bulan program */
    int a,b,c,kucuk,buyuk,toplam,ort,carpim;

    printf ("Lufen 3 farkli sayi giriniz.\n");
    scanf("%d %d %d",&a,&b,&c);

    toplam = a + b + c ;
    ort = toplam/3;
    carpim = a * b * c ;

    kucuk = a;
    if( b < kucuk) {
        kucuk = b;
    }
    if( c< kucuk)  {
        kucuk = c;
    }

    buyuk = a ;
    if( b > buyuk) {
        buyuk = b;
    }
    if( c> buyuk)  {
        buyuk = c;
    }
    printf("toplam:%d\nort:%d\ncarpim:%d\n",toplam,ort,carpim);
    printf("kucuk sayi = %d\n",kucuk);
    printf("buyuk sayi = %d",buyuk);

    return 0;
}
