#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   int y;

   printf("********** MAGAZAMIZA HOS GELDINIZ **********\n\n");
   printf("Size en iyi hizmeti verebilmemiz icin simdi birkac soru soracagiz =-] \n\n");

   printf(">>>Su an da harcamayi dusundugunuz miktar ne kadardir?\n");
   scanf(" %d\n",&x);

   if (x <= 10){
       printf(">>>Kac sayfalik bir kitap okumak istersiniz?\n");
       scanf(" %d\n",&y);
            if ( y < 100){
                    printf("filitremize gore size uygun kitaplar sunlardir:=-] \n\n");
            }
            else if ( y >= 100){
                    printf("filitremize gore size uygun kitaplar sunlardir:=-] \n\n");
            }
    }
    else if (x >10 && x<=50){
       printf(">>>Kac sayfalik bir kitap okumak istersiniz?\n");
       scanf(" %d\n",&y);
            if ( y < 100){
                    printf("filitremize gore size uygun kitaplar sunlardir:=-] \n\n");
            }
            else if( y >= 100){
                    printf("filitremize gore size uygun kitaplar sunlardir:=-] \n\n");

            }
    }
    else if (x >50 && x<=100){
            printf(">>>Kac sayfalik bir kitap okumak istersiniz?\n");
            scanf(" %d\n",&y);
            if ( y < 100){
                    printf("filitremize gore size uygun kitaplar sunlardir:=-] \n\n");
            }
            else if( y >= 100){
                    printf("filitremize gore size uygun kitaplar sunlardir:=-] \n\n");

            }
    }
    else if (x >=100){
            printf(">>>Kac sayfalik bir kitap okumak istersiniz?\n");
            scanf(" %d\n",&y);
            if ( y < 100){
                    printf("filitremize gore size uygun kitaplar sunlardir:=-] \n\n");
            }
            else if ( y >= 100){
                    printf("filitremize gore size uygun kitaplar sunlardir:=-] \n\n");
            }
            else{
                    printf("tesekkurler");
                }
    }
    return 0;
}
