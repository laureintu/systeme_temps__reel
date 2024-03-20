#include <stdio.h>

int main(){
	int tableau[5]= {4,7,1,9,15};
	int a = 9;
	for(int i = 0; i<5; i++){
		if(tableau[i]==a){
			printf("le chiffre %d est à l'indice %d",a,i);
		};
	};
};
