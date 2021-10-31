//on va voir c'est quoi une variable et son utilité.

#include<stdio.h>
int main(){
	// toute variable doit etre déclarée
	//tout variable a un type
	int a;
	int b;
	int c;
	//une variable peut avoir une valeur initiale (non obligé)
	char e = 'H';
	a= 12;
	b= 13;
	c= a+b;
	
	printf("La somme de %d et %d est : %d ",a,b,c);
	
	return 0; 
}
