
#include <stdio.h>
#include <iostream>

using namespace std;

int main (){
   int alas, tinggi;
   float luas;

   printf("Masukkan panjang alas: ");
   scanf("%d", &alas);
   printf("Masukkan tinggi segitiga: ");
   scanf("%d",&tinggi);

   luas = 0.5*alas*tinggi;

   printf("Luas segitiga adalah %2.f\n", luas);

}