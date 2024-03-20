#include <stdio.h>

int somme(int a, int b){
	int result = a+b;
	printf("a + b = %d ",result);
};

int main(){
	int c = 2;
	int d = 6;
	int sum = somme(c,d);
};
