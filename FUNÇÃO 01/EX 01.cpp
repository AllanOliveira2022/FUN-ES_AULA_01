#include <stdio.h>

#define Q '#'
void parede(int altura){
	int i;
	for(i = 0; i < altura; i++){
		printf("%c", Q);
	}
	printf("\n");
}

void casa(int h, int t= 6){ // Assinatura da fun��o
		for (int x=0; x < t; x++ ){
			parede(h);
		}
		printf("\n");
		
}//corpo da fun��o
int main(){
		casa(3, 2);
		casa(9,10);
		casa(15);
		casa(9);
		casa(20);
	
	
	return 0;
}

//Jeito de chamar as fun��es :
// indentificador(argumentos);

//OBS: Argumento = Valores para as variav�is dos par�metros da fun��o
