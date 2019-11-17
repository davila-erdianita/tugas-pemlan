#include <stdio.h>
int i,j,angka[8]= {2,7,3,5,9,15,20,11};
void pengurutan(int i, int j, int angka[]){
	for(i=0;i<8;i++){
		for(j=8-1;j>i;j--){
			if(angka[j]<angka[j-1]){
				int temp = angka[j];
				angka[j] = angka[j-1];
				angka[j-1]=temp;
			}
		}
	}
}
void tampilan(int i,int angka[]){
	for(i=0;i<8;i++){
		printf("%i\t",angka[i]);
	}
}
void pengurutan2(int i, int j, int angka[]){
	for(i=0;i<8;i++){
		for(j=8-1;j>i;j--){
			if(angka[j]>angka[j-1]){
				int temp = angka[j];
				angka[j] = angka[j-1];
				angka[j-1]=temp;
			}
		}
	}
}
int main(){
	int angka[8]= {2,7,3,5,9,15,20,11};
	int i,j;
	
	printf("\nSebelum diurutkan:\n");
	tampilan(i,angka);
	
	printf("\n\nSetelah diurutkan ascending:\n");
	pengurutan(i,j,angka);
	tampilan(i,angka);

	printf("\n\nSetelah diurutkan descending:\n");
	pengurutan2(i,j,angka);
	tampilan(i,angka);

	
	return 0;
}
