#include <stdio.h>
 
int main()
{
   int c, awal, akhir, tengah, n, search, array[100];
   printf("\n-----||Memasukkan angka dan Mencari ||-----\n");
   printf("\t >>Banyak Angka:");
   scanf("%d",&n);
 
   printf("\t >>Masukkan %d Angka dari Kecil ke Besar:\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("\t >> Angka yang Ingin Dicari : \n");
   scanf("%d", &search);
 
   awal = 0;
   akhir = n - 1;
   tengah = (awal+akhir)/2;
 
   while (awal <= akhir) {
      if (array[tengah] < search)
         awal = tengah + 1;    
      else if (array[tengah] == search) {
      printf("_____________________________________\n");
      printf("[Elemen %d ditemukan pada indeks %d ]\n", search, tengah+1);
      printf("_____________________________________\n");
  			break;
      }
      else
         akhir = tengah - 1;
 
      tengah = (awal + akhir)/2;
  }
   if (awal > akhir)
      printf("tidak berada di indeks", search);
 
   return 0;  
}
