#include<stdio.h>

int main(){
	
	int umur ;
	float ipk ;
	char grade ;
	char univ[100] ;
	printf("Umur = ");
	scanf("%d", &umur);
	getchar();
	
	printf("IPK = ");
	scanf("%f", &ipk);
	getchar();
	
	printf("Grade = ");
	scanf("%c", &grade);
	getchar();
	
	printf("Kampus = ");
	scanf("%[^\n]", &univ);
	getchar();

	printf("Hello World\nNama saya Anas Syihabuddin\nUmur %d\nIPK = %.1f\nGRADE = %c\nKampus = %s", umur, ipk, grade, univ);
	


	return 0;
}
