#include <stdio.h>
#include <stdlib.h>
// int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 }; dizisi için kullanıcı tarafından girilen sayıya denk gelen dizi içerisindeki
// sayıların yerlerine -1 yerleştiren ve bu işlemi tüm dizideki elemanlar -1 olana kadar devam ettiren
// ve böylece dizide kaç farklı sayı olduğunu bulan program kodunu yazınız. (Her yerleştirme sonrası dizinin güncel hali yazdırılacaktır. 
//Dizi yazdırma işlemi için ayrı fonksiyon kullanılacaktır.)
// Örnek:  2 girildi. Dizi: [1, 6, 5, -1, 1, 4, -1]
//             4 girildi. Dizi: [1, 6, 5, -1, 1, -1, -1]
//           		5 girildi. Dizi: [1, 6, -1, -1, 1, -1, -1]
// …. 
// Dizinin son hali: [-1, -1, -1, -1, 1, -1, -1]
// Sonuç: dizide 5 farklı sayı bulunmaktadır.

int farkliSayi (int dizi[]){
int sayac =0 ; 
int fsayi =0 ; 
int aynisi =0 ; 
for (int i =0 ;i<7;i++){
    for (int j =0 ; j<7;j++){
          
          if(dizi[j]==dizi[i]){
            sayac++ ; 
          }
    }
    if(sayac==1 ){
        fsayi++ ; 
    }
    if(sayac==2){
        aynisi++ ; 
    }
sayac =0 ; 
}
return fsayi+(aynisi/2) ; 
}
void diziYazdir(int *dizi){
for (int i =0 ; i<7 ; i++){
    printf("%d ",*(dizi+i)); 
  
}
}

void sayiDegistir (int *dizi,int x ){

    for(int i =0 ; i<7; i++){
 
     if(*(dizi+i)==x)
     *(dizi+i)=-1 ; 
   
    }
   
}

int main (){

int sayilar[] =  { 1, 6, 5, 2, 1, 4, 2 };

int x ; 
int a =farkliSayi(sayilar); 
for(int i =0 ; i<7; i++){

printf("hangi sayıyı -1 ile değiştirmek istiyorsunuz (çıkmak için 3e bas) : ") ;
scanf("%d",&x);
if(x==3){
    break ; 
}
sayiDegistir(sayilar,x); 
printf("dizinin son hali : "); 
diziYazdir(sayilar);  
printf("\n"); 
}
 
printf("dizideki farklı sayı sayısı %d",a); 

return 0 ; 
}