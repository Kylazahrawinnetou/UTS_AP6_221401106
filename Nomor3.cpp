/*  NOMOR 3 - PROGRAM PERULANGAN
    NAMA    :   KYLA ZAHRA WINNETOU
    NIM     :   221401106
    KOM     :   C
*/

#include <iostream>
using namespace std;

int main() {

   int n;

   system("cls");
   cout << "Halo! aku adalah program kecil yang membuat gambar belah ketupat dengan inputan ganjil tidak lebih dari sepuluh! ^v^";
   cout << endl << endl;
   cout << "Input bilangan ganjil (n < 10) : ";
   cin  >> n;
   cout << endl;

   if (n % 2 == 0 || n > 10) 
   {
      cout << "Bilangan yang dimasukkan harus ganjil dan tidak lebih dari 10." << endl;
   } 
   else 
   {
      for (int i = 1; i <= n; i++) 
      {
         for (int j = 1; j <= n-i; j++) 
         {
            cout << " ";
         }
         for (int k = 1; k <= 2*i-1; k++) 
         {
            cout << i;
         }
         cout << endl;
      }
      for (int i = n-1; i >= 1; i--) {
         for (int j = 1; j <= n-i; j++) 
         {
            cout << " ";
         }
         for (int k = 1; k <= 2*i-1; k++) 
         {
            cout << i;
         }
         cout << endl;
      }
   }

   cout << endl;
   return 0;
}

