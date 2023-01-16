#include<stdio.h>

int main(){
	
//	printf("Tambah -> %d + %d = %d\n", 5, 2, 5+2);
//	printf("Kurang -> %d - %d = %d\n", 5, 2, 5-2);
//	printf("Kali -> %d * %d = %d\n", 5, 2, 5*2);
//	printf("Bagi -> %d / %d = %d\n", 5, 2, 5/2);
//	printf("Bagi(desimal) -> %.1f / %.1f = %.1f\n", 5.0, 2.0, 5.0/2.0);
//	
//	printf("AND -> %d & %d = %d\n", 10, 3, 10&3);
//	printf("OR -> %d | %d = %d\n", 20, 30, 20|30);
//	printf("XOR -> %d ^ %d = %d\n", 5, 2, 5^2);
//	printf("Shift Right -> %d >> %d = %d", 6, 5, 6>>5);
//	printf("Shift Left -> %d << %d = %d", 6, 5, 6<<5);


	//INI PRE-INCREMENT
//	int angka = 0;
//	printf("Angka = %d\n", ++angka);
//	printf("Angka = %d\n", angka++);
	//INI POST-INCREMENT
//	int angka1 = 0;
//	printf("Angka1 = %d\n", angka1++);
//	printf("Angka1 = %d\n", angka1);

	
	int nomer1, nomer2;
	scanf("%d %d", &nomer1, &nomer2);
	printf("%d\n", nomer1+nomer2);
	
	scanf("%d %d", &nomer1, &nomer2);
	printf("%d\n", nomer1-nomer2);
	
	scanf("%d %d", &nomer1, &nomer2);
	printf("%d\n", nomer1*nomer2);
	
	scanf("%d %d", &nomer1, &nomer2);
	printf("%d\n", nomer1/nomer2);
	
	scanf("%d %d", &nomer1, &nomer2);
	printf("%d\n", nomer1%nomer2);
	
}
