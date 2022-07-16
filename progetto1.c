#include <stdio.h>

void menu ();
void moltiplica();
void dividi();
void ins_string();

int main ()
{

        char scelta = '\0' ; 
        /* Aggiunta del ciclo do while perche se l utente sbaglia a digitare il comando gli da la possibilita di tornare al menu */
        do{
        menu ();
        
        scanf (" %c", &scelta); 

        switch (scelta)
        {
                case 'A' :
                moltiplica();
                break;
                case 'B':
                dividi();
                break;
                case 'C':
                ins_string();
                break;
		case 'E': //aggiunta casistica per uscita dal programma
		printf("\n Arrivederci\n");
		return 0;
		break;
                default:     //aggiunta controllo per inserimento parametro non corretto
                printf("\n Comando non valido\n\n");
		
                
        }

            }while (scelta != 'A','B','C','E');
			


return 0;
}


void menu ()
{
        printf("\n\n Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
        printf("Come posso aiutarti\n");
        printf("A >> Moltiplica due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nE >> Per uscire dal programma\n");
}

void moltiplica ()
{
        float a,b =  0;// cambio del tipo di variabile  per dare possibilita all utente di moltiplicare anche numeri decimali
        printf ("Inserisci il primo numero da moltiplicare:\n ");
        
        scanf("%g", &a);
        printf("Inserisci il secondo numero da moltiplicare:\n");
        scanf("%g", &b);
	
	
	
        float  prodotto =   a * b;
	
        printf ("Il prodotto tra %g e %g è : %g" , a,b,prodotto); 
}

void dividi ()
{
        
        float  a,b =  0;
        printf("Inserisci il numeratore:");
        scanf ("%g", &a);
        printf("Inserisci il denumeratore:");
        scanf ("%g", &b);
	/* ho aggiunto il controllo sulla divisione per qunto riguarda lo zero*/
	if (a  == 0 )
	{
	   printf("Errore\n");
	  printf("Inserisci il numeratore:");
	   scanf("%g", &a);
	   
	}

	if (b == 0)
	{
	   printf("Errore\n");
	   printf("Inserisci il denumeratore:");
	   scanf("%g", &b);
	}

        float divisione =  a /  b;

        printf ("La divisione tra %g e %g è : %g", a,b,divisione);

        
}
/*per qunato riguarda la stringa ho trovato questo metodo di mettere il numero di defualt, funziona perche mi stampa i caratteri richiesti
* pero mi crea un problema con il ciclo, cerchero di risolvere questo problema 
*/
void ins_string ()
{
        
        char stringa[10] ;
        
	
        printf ("Inserisci la stringa:\n");
        
	scanf ("%9s", &stringa);
	printf("La stringa inserita è: %s", stringa);
	
          
}
