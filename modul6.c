#include <stdio.h>

void main(){
   char ulangi = 'y';
   int counter = 0;

   while (ulangi == 'y') {
      printf("Apakah kamu mau mengulang: \n");
      printf("Jawab dengan y/t: ");
      scanf(" %c", &ulangi);

      counter++;
   }

   printf("Pengulangan Selesai\n");
   printf("Kamu mengulang sebanyak: %i", counter);


}




















































































// #include <stdio.h>
// #include <stdbool.h>
// int main(){

// bool kondisi = true;
// int a = 1;
    
//        while (a > 1) {
//       a++; 
//       printf("%d\n", a);
              
        

//     } 
//     printf("UDAHAN YA");
//        return 0;
//     }
