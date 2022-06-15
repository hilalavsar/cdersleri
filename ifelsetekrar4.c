#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi ;
    printf(" \"Tek mi cift\" mi oldugunu ogrenmek istediginiz sayiyi giriniz.\a\n");
    //   " /a " sesli komut
    scanf ("%d",&sayi);

    if( sayi % 2 == 0){
        printf("bu sayi cifttir.",sayi);
    }
    else if(sayi % 2 != 0){
        printf("bu sayi cift degildir.",sayi);
    }

    return 0;
}