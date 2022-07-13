 #include <stdio.h>

int main () {
	char nome[30];
	char nuovapartita[20];	
	
	  
	printf("Quiz a risposta multipla\n");
	
	printf("Inserisci il tuo nome\n");
	scanf("%c", &nome);
	if(nome==nome){
	
		printf("Iniza nuova partita premendo n\n");
		scanf("%c", &nuovapartita);
		}
	
	

		
		int risposta;
		int somma=0; 
		int r;
		while(r == 1 ){

			printf("Come si chiama il Papa?");
			printf("\n1) Giovanni; \n2) Francesco; \n3) Marco \n");
			printf("Risposta Numero: ");
			scanf("%d", &risposta);
			if(risposta==2)
			somma=somma +3
			


		}



return 0;
}
