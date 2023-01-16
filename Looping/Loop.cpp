#include<stdio.h>

int main(){
	
	//for, while, do while
	
	for(int i = 1; i<=10; i+=2){
		if(i == 5) continue;
		printf("%d\n",i);
	}
	
	int j = 1;
	while(j <= 10){
		printf("%d\n", j);
		j++;		
	}
	
	int k = 1;
	do{
		printf("%d\n", k++);
	}while(k <= 10);
	
	
	
	
	
	return 0;
}
