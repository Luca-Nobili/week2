 #include <stdio.h>

int main () {
while(1){	
	int g;

	printf("\n\n Quiz a risposta multipla \n\n");

	printf("Premere 1 per Giocare \n");
	printf("Premere 2 pe uscire \n");
	
	scanf("%d", &g);

	if(g ==1 ){
		 char nome [20];

        printf("Nome Giocatore\n ");
        scanf("%s", &nome);
               
        int somma = 0;
        int risposta;
        
        printf("Domanda numero 1: \n");
        
        printf("Il nome del Papa?\n\n");
        printf("\n1) Francesco; \n2) Giovanni; \n3)Marco; \n");
        printf("Risposta Numero: ");
        scanf("%d", &risposta);
         if(risposta == 1 ){
                somma ++;
        }       

        printf("Domanda numero 2: \n"); 

        printf("Dove si trova la Gioconda? \n");
        printf("\n1) Musei Vaticani; \n2) National Gallery; \n3) Louvre; \n");
        printf("Risposta Numero: ");
        scanf("%d", &risposta);
         if(risposta ==3){
                somma ++;
                }

        printf("Risultato Quiz: %d\n\n ",somma);

		}


	else if(g ==2){
		return 0;

	}
	

       else{
		printf("Comando non valido \n");
	}       
 }
}
