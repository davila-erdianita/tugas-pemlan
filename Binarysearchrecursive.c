#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
    int bilangan[13] = {2,4,5,1,3,8,7,10,12,9,13,11,15};
    int i, j, posisi, cari,input;
    
    Awal:
	system("cls");
	printf("\n-----||Menampilkan angka dan pencarian ||-----\n");
    int n = sizeof(bilangan)/sizeof(bilangan[0]);
    printf("\n\t >>Banyak Angka : %d", n);

    printf("\n\t >>Angka sebelum diurut\n");
    printf("\t");
    view(i, bilangan);

    pengurutan(i,j,bilangan);

    printf("\n\t >>Angka setelah diurut\n");
    printf("\t");
    view(i, bilangan);

    printf("\n\n\t >>Pencarian Angka : "); scanf("%d", &cari);
    posisi = binary_search(bilangan, 0, n-1, cari);
    
    if(posisi < 0){
    	printf("____________________________________\n");
      printf("[Elemen %d pada array tidak ditemukan]\n", cari);
      printf("____________________________________\n");
    } else {
    	printf("______________________________________________________\n");
      printf("[Elemen %d ditemukan pada indeks %d setelah dipengurutan]\n", cari, posisi+1);
      printf("______________________________________________________\n");
    }
    printf("\n\ningin mengulang?\n");
    printf("1.ya \t 2.tidak\n");
    scanf("%d", &input);
	switch (input)
	{
	case 1:
	goto Awal;
	Sleep(1000);
	case 2:
	printf("terima kasih\n");
}
}

int binary_search(int data[], int a, int b, int c){
    int t = (a+b)/2;
    if(a>b){
      return -1;
    } 
    if(data[t] == c){
      return t;
    }
    if(data[t] < c){
      return binary_search(data, t+1, b, c);
    } else {
      return binary_search(data, a, t-1, c);
    }
}

void view(int i, int data[]){
    for(i=0; i<13; i++){
        printf("%d, ", data[i]);
    }
}

void pengurutan(int i, int j, int data[]){
    for (i = 0; i < 13 - 1; i++) {
      for (j = 13 - 1; j > i; j--) {
        if (data[i] > data[j]) {
          int temp = data[j];
          data[j] = data[i];
          data[i] = temp;
        }
      }
    }
}


