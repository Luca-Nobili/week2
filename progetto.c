
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
	//scanf("%d", %scelta) errore perche il tipo di argomento non è un intero ma un carattere quindi si sostituisce con %c
	scanf (" %c", &scelta); // correto da %d a %c perche la prima fa riferimento ad un intero mentre la seconda ad un caratteere

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
		default:     //aggiunta controllo per inserimento parametro non corretto
		printf("\n Comando non valido\n\n");
		
	}

	    }while (scelta != 'A' || scelta != 'B' || scelta != 'C' );// avevo lasciato una & e avevo cancellato il diverso su b e c


return 0;
}

void menu ()
{
	printf("\n\n Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf("Come posso aiutarti\n");
	printf("A >> Moltiplica due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}
/* ho provato due metodi per gestire i numeri decimali nella moltiplicazione ho usato dei numeri di default "mi sono documentato su internet
 * nella divisione ho usato il cast, ho travato un altro metodo ma non so era giusto, questa opzione mi faceva mettere %g al posto %f
*/
void moltiplica ()
{
	float a,b =  0;// cambio di variabile per dare possibilita all utente di moltiplicare anche numeri decimali
	printf ("Inserisci i due numeri da moltiplicare:\n ");
	
	scanf("%f", &a);
	
	scanf("%f", &b);

 	float  prodotto =   a * b;

	printf ("Il prodotto tra %1.1f e %1.1f è : %1.1f" , a,b,prodotto);// spostamento dei doppi apici per avere in video il giusto risultato 
}

void dividi ()
{
	
	 int  a,b =  0;
	printf("Inserisci il numeratore:");
	scanf ("%d", &a);
	printf("Inserisci il denumeratore:");
	scanf ("%d", &b);

	float divisione =(float)  a / b;// ho fatto il cast perche la divisone puo dare anche un numero decimale

	printf ("La divisione tra %d e %d è : %f", a,b,divisione);//spostamento dei doppi apici per avere in video il giusto risultato

	
}

void ins_string ()
{
	
	char stringa[10];
	
	printf ("Inserisci la stringa:\n ");
	printf ("\n ATTENZIONE la stringa non puo contenere piu di 10 caratteri \n");
	scanf ("%s", &stringa);
	  
}


