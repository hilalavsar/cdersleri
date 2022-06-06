#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

//GÖREV: hilal ltd şti olarak şirket bilgilerini  sisteme kayıt et.
setlocale(LC_ALL,"Turkish");

int isim;
int soyisim;
int yas;
int meslek;
int okul;
int maas;


printf(" **********HILAL LTD STI SIRKET CALISAN BASVURU FORMU**********\n\n\n\n");

printf("İsminiz?\n");
scanf("%d\n",&isim);

printf("Soyisminiz?\n");
scanf("%d\n",&soyisim);

printf("YAŞINIZ?\n");
scanf("%d\n",&yas);

printf("Mesleğiniz nedir?\n");
scanf("%d\n",&meslek);

printf("Mezun olduğunuz okul?\n");
scanf("%d\n",&okul);

printf("Maaş beklentiniz nedir?\n");
scanf("%d\n",&maas);


return 0;


}