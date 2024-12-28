#include <stdio.h>
#include <stdlib.h>

// Girilen bir cümlede istenen bir kelimenin kaç defa geçtiğini bulan programı yazınız.
// Örnek: cümle gir: xyz xty xyzt abcxydef
// 	 kelime gir: xyz
// 	 xyz kelimesi 2 defa gecmektedir.

int main (){

char kelime[10] ={""}; 
char cumle[50]={""} ; 

printf("cümle girin : "); 
gets(cumle) ; 
printf("kelime girin : "); 
gets(kelime); 

int lenght =0 ; 
int sayac =0 ;
int kSayisi =0 ;   
for (int i =0 ; i<10 ; i++){

    if(kelime[i]=='\0'){
        break; 
    }
    lenght++ ; 
}

for(int i =0 ; i<50 ; i++){

    if(cumle[i]=='\0'){
        break ; 
    }
for(int j =0 ; j<lenght ; j++){
 
 if(kelime[j]==cumle[i+j]){
    sayac++ ; 
    //printf("harfin sayaci = %d\n",sayac); 
 }
}
if(sayac==lenght){
kSayisi++ ; 
 }
 sayac=0 ; 
}
printf("girilen cümlede kelimeden %d tane var ",kSayisi); 






    return 0 ; 
}