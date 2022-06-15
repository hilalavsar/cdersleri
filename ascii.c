#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter ;
    printf(" bize bir karakter soyle sana onun ASCII degerini soyleyeyim.\n");
    scanf("%c",&karakter);
    //65-90 Buyuk harfler
    //97-122 Kucuk harfler

    int karakterasciidegeri = karakter;
    if( karakterasciidegeri >= 65 && karakterasciidegeri <= 90 ){
        printf("%d buyuk bir harftir...",karakterasciidegeri);
    }
    else if(karakterasciidegeri >= 97 && karakterasciidegeri <= 122 ){
        printf("%d kucuk bir harftir...",karakterasciidegeri);
    }
    else{
        printf("Lutfen a-z ya da A- Z aralıgında bir karakter giriniz.");
        printf("%c %c %c %c",karakter,karakter,karakter,karakter,karakterasciidegeri);
    }

    
    return 0;
}
