#include<stdio.h>

int main(){
	
	int sisi = 0;
	printf("Sisi = ");
	scanf("%d", &sisi);
	
	for(int i = 0; i < sisi; i++){
		for(int j = 0; j < sisi; j++){
			if(i == 0 || i == sisi-1 || j == 0 || j == sisi-1){
				printf("*");
			}else{
				printf(" ");
			}
		} printf("\n");
	}
	
	return 0;
}
