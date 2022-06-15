#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int secim;

    printf("Lutfen  seciminizi yapiniz...\n");
    printf("1.ilkbahar\n2.yaz\n3.sonbahar\n4.kis...\n");
    scanf("%d",&secim);

    switch (secim){
        case 1: printf("hava cok guzel");break;
        case 2: printf("hava cok sicak");break;
        case 3: printf("hava soğuk");break;
        case 4: printf("hava cok soğuk");break;

        default: printf("lutfen 1-4 arasinda sayi degeri giriniz.");
     */
     
     char karakteregoresecim ;
     printf("karakter giriniz...\n");
     scanf("%c",&karakteregoresecim);

     switch(karakteregoresecim){

     case 'y':printf("Yusuf su an sirkette...");break;
     case 'h':printf("Hilal su an sirkette...");break;
     default :printf("sirkette boyle birisi yohhh...");break;
     }
    return 0;
}