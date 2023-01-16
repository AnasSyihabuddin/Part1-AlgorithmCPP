#include<stdio.h>

int main(){
	
	int angka;
	int angkaAwal;
	int angkaAkhir;
	
	scanf("%d", &angka);
	scanf("%d %d", &angkaAwal, &angkaAkhir);
	
	if(angka > angkaAkhir){
		printf("%d lebih besar dari %d", angka, angkaAkhir);
	} else if(angka < angkaAwal){
		printf("%d lebih kecil dari %d", angka, angkaAwal);
	} else {
		printf("%d diantara %d dan %d", angka, angkaAwal, angkaAkhir);
	}
	
	return 0;
}
