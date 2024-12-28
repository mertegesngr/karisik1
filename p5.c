#include <stdio.h>
#include <stdlib.h>

//  Substring isimli bir fonksiyon yazılacaktır. Bu fonksiyon kendisine gönderilen
//  bir metinde istenen başlangıç indeksinden başlayarak istenen uzunluktaki kelimeyi döndürecektir.
// Örnek:  kelime: yazilimcilar startIndex:3 uzunluk:4 olarak gönderilmişse dönecek değer:ilim olmalıdır.
// (3.indeksten başlayıp 4 karakter kadarını alır.)


char subString(char dizi [],char *yenidizi,int startIndex,int uzunluk){
int a =0 ; 
    for(int i = startIndex ;i<=startIndex+uzunluk;i++){

    *(yenidizi+a)=dizi[i];
    
a++ ; 
    }




}

int main (){
int startIndex ; 
int uzunluk ; 
char kelime [20]={""};
printf("kelimeyi girin : "); 
gets(kelime);  
printf("başlangıç indexi girin : "); 
scanf("%d",&startIndex)  ;
printf("uzunluk girin : "); 
scanf("%d",&uzunluk);


int kUzunluk =0 ; 
for (int i =0 ; i<50 ; i++){
    if(kelime[i]=='\0'){
        break ; 
    }
    kUzunluk++;
    
}
 
char *yenidizi=(char *)malloc(sizeof(char)*kUzunluk) ; 


subString(kelime,yenidizi,startIndex,uzunluk) ; 
printf(" yeni kelime : %s ",yenidizi); 




    return 0 ; 
}