#include <stdio.h>
int n,i,j,cari,tm,high,low,posisi,array[100];

void printarray(int array[], int n){
    int i;
   
    for (i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}

void urutan(int i, int j, int array[]){
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(array[j]<array[j-1]){
				int temp= array[j];
				array[j]= array[j-1];
				array[j-1]= temp;
			}
			}
		}
	}
	
int main(){
	
	
	printf("banyak angka:");
	scanf("%d",& n);
	
	printf("masukkan %d angka  :",n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	printf("angka yang ingin dicari:");
	scanf("%d",&cari);
	//proses pengurutan data
	printf("sebelum diurutkan: ");
	printarray(array, n);
	
	urutan(i,j,array);
	printf("setelah diurutkan: ");
	printarray(array, n);
	//proses pencarian data
	tm=0;
	high=n-1;
	low=0;
	do{
	posisi=((cari-array[low])/(array[high]-array[low]))*(high-low)+low;
		if(array[posisi]==cari){
			tm++;
			break;
		}
		if(array[posisi]>cari){
			high=posisi-1;
		}else if (array[posisi]<cari)
			low=posisi+1;
		}
		while(cari>=array[low] && cari<=array[high]);
			if(tm>0){
				printf("\ndata %d dalam array\n",cari);
				printf("+====+====+====+====+====+====+");
				
			}else{
				printf("\ndata tidak dalam array\n");
				printf("+====+====+====+====+====+====+");
			}
			return 0;
}
