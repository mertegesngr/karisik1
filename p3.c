#include <stdio.h>
#include <stdlib.h>
// Girilen bir cümlede istenen bir karakterden sonra istenen bir kelimeyi ekleyen programı yazınız.
// Örnek:  cümle gir: xyz xty xyzt abcx
//  hangi karakterden sonra eklensin: t
// eklenecek kelime: ab 
// ekleme sonrası: xyz xtaby xyztab abcx (tüm t harflerinden sonra ab eklenecek)


int main (){


char cumle [50] ={""}; 
char kelime [5] ={""}; 
char yeniCumle[200]= {""}; 
char karakter; 
printf("bir cumle girin : "); 
gets(cumle); 
printf("hangi karakterden sonra girilen karakterler eklensin : "); 
scanf("%c",&karakter); 
printf("hangi karakter(ler) eklensin : "); 
scanf("%s",&kelime); 
int Kuzunluk =0 ; 
for (int i =0 ; i<5;i++){
    if(kelime[i]=='\0'){
        break ; 
    }
    Kuzunluk++; 
}
int Cuzunluk =0 ; 
for (int i =0 ; i<50 ; i++){
    if(cumle[i]=='\0'){
        break ; 
    }
    Cuzunluk++ ; 
}

int j =0 ; 
for(int i = 0 ;i<Cuzunluk;i++ ){
yeniCumle[j++]=cumle[i]; 

if(cumle[i]==karakter){
      for (int k = 0; k < Kuzunluk; k++) {
                yeniCumle[j++] = kelime[k]; 
            }
}

}

yeniCumle[j]='\0'; 



printf("yeni cümle  : %s",yeniCumle); 
    return 0 ; 
}