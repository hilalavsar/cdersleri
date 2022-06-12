#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamsayi= 9;
    printf("%d RAM'de %d byte yer kaplar.\n",tamsayi,sizeof(int));
                                       // 4 byte
    double buyukyerkaplayankesirlisayi= 5.7;           // 8 byte
    printf("%.2f RAM'de %f byte yer kaplar.\n",buyukyerkaplayankesirlisayi,sizeof(double));
    /*short int uzunluk;//2 byte
    long int uzunluk2;//4 byte*/

    char karakter = 55;                       // 1 byte
    printf("%c RAM'de %c byte yer kaplar.\n",karakter,sizeof(char));
    //char karakterdizisi[14] = "HiLAL COMPANY" ; // 10 byte
    float kesirlisayi= 2.2 ;                  // 4 byte
    printf("%.4f RAM'de %f byte yer kaplar.\n",kesirlisayi,sizeof(float));

    char karakterdizisi2[6]= "hilal";
    printf("%s RAM'de %s byte yer kaplar.",karakterdizisi2,sizeof(char));

    return 0;

    #include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;

    /*sayıyı 1 artırmanın 3 yolu vardır:
    sayi1++;
    sayi1 = sayi1 + 1 ;
    sayi1 +=1;   */

    sayi1 = 5;

    sayi1++;
    printf("%d",sayi1);





    return 0;
    }