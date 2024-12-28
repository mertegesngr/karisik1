#include <stdio.h>
#include <stdlib.h>
// Girilen bir kelimedeki rakamları ayırıp sayıya dönüştürüp, hem sayıyı hem de sayının yazı ile yazılmış halini yazdırınız.
// Örnek:  kelime gir: xy5-3ty/8ab
// 	538 bes yuz otuz sekiz
void sayiyiYaziIleYaz(int sayi) {
    char *birler[] = {"", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz"};
    char *onlar[] = {"", "on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan"};
    
    if (sayi == 0) {
        printf("sifir");
        return;
    }
    
    if (sayi / 100 > 0) { // Yüzler basamağı
        printf("%s yuz ", birler[sayi / 100]);
    }
    if ((sayi % 100) / 10 > 0) { // Onlar basamağı
        printf("%s ", onlar[(sayi % 100) / 10]);
    }
    if (sayi % 10 > 0) { // Birler basamağı
        printf("%s", birler[sayi % 10]);
    }
}
int main (){


char cumle [50]={""}; 

printf("cumle gir : "); 
gets(cumle); 
int cUzunluk =0 ; 
for (int i =0 ; i<50 ; i++){
    if(cumle[i]=='\0'){
        break ; 
    }
    cUzunluk++;
    
}
 

int a =0 ; 

for(int i =0 ; i<cUzunluk;i++){
    if (cumle[i]>='0'&&cumle[i]<='9'){
     a=(a*10)+(cumle[i]-'0') ;       //(cumle[i]-'0') charı inte çevirmemizi sağlar. 
    }
}

printf("sayi = : %d\n",a);
printf("yazıyla: ");  
sayiyiYaziIleYaz(a);

    return 0 ; 
}

