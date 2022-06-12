#include <stdio.h>
#include <stdlib.h>

int main()
{
    int puan;
    printf("lutfen puanininizi giriniz...\n");
    scanf("%d",&puan);

    if (puan  >= 80) {
        printf("cok iyi puan\n ");
    }
    else if ( puan >= 60 && puan <80 ){
        printf("iyi puan\n ");
    }
    else if ( puan >= 40 && puan <60 ){
        printf("orta\n ");
    }
    else if ( puan >= 20 && puan <40 ){
        printf("kötü puan\n ");
    }
    else if ( puan >= 0 && puan <20 ){
        printf("cok kötü puan\n ");
    }
    else {
        printf("lütfen 0-100 arasinda bir değer giriniz...\n ");
    }

    return 0;
}
