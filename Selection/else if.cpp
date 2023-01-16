#include<stdio.h>

int main(){
	//SELECTION
	/*
		1. if else
		2. switch case
		3. Ternary if	
	*/
	
	int angka = 2;
	
	//Kalo angka 0 print "NOL", ganjil "GANJIL, genap "GENAP"
	if(angka == 0){
		printf("NOL\n");
	} else if(angka%2 == 0){
		printf("GENAP\n");
	} else{
		printf("GANJIL\n");
	}
	
	switch(angka){
		case 1:
			printf("satu\n");
			break;
		case 2:
			printf("dua\n");
			break;
	}
	
	
	printf("%s", (angka%2==0? "GENAP" : "GANJIL"));
	
	return 0;
	
}
