#include <stdio.h>
#include <stdlib.h>

struct ogrenci 
{
   char ad[20];
   char soyad[20];
   int no;
   char adres[50];
};

int main() 
{
   struct ogrenci ogrenciler[5];
   int i;

   for(i=0; i<5; i++) 
   {
      printf("Ogrenci %d icin bilgileri girin:\n", i+1);
      printf("Ad: ");
      scanf("%[^\n]s", ogrenciler[i].ad); // %[^\n] bir sat�rdaki t�m karakterleri bo�luk dahil okur. 
      fflush(stdin); // �nceki girdileri temizler 
      printf("Soyad: ");
      scanf("%[^\n]s", ogrenciler[i].soyad);
      fflush(stdin);
      printf("Numara: ");
      scanf("%d", &ogrenciler[i].no);
      fflush(stdin);
      printf("Adres: ");
      scanf("%[^\n]s", ogrenciler[i].adres);
      fflush(stdin);
      printf("\n");
   }
   system("cls"); // Girdi bilgisi k�sm�n� temizler. 
   
   printf("Ogrenci bilgileri:\n");
   for(i=0; i<5; i++) 
   {
      printf("\n");
      printf("Ogrenci %d\n", i+1);
      printf("Ad: %s\n", ogrenciler[i].ad);
      printf("Soyad: %s\n", ogrenciler[i].soyad);
      printf("Numara: %d\n", ogrenciler[i].no);
      printf("Adres: %s\n", ogrenciler[i].adres);
      printf("\n");
   }

   return 0;
}

