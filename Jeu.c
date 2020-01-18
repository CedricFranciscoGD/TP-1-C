
/*Bonjour, n'ayant pas su comment vous montrer toute les versions en conservant uniquement 
les versions améliorée (exemple exercice 1 et exercice 2) je met en commentaire les 
versions non améliorées que vous pourrez vérifier séparémment*/

#include <stdio.h>
// Bibliothèque permettant de générer des nombres aléatoire pour programmer le comportement du monstre
#include <stdlib.h>
#include <time.h>



int main (void){
	//Variables
	int pointDeVie = 10;
	int pointDeMagie = 10;
	int mesPdv = 15;
	int mesPdm = 10;
	int atkLegere = 1;
	//Variable comportement joueur
	int choixAction = 0;
	//Variable comportement Monstre
	int i = 0;
	int coutSort = 3;
	int coutAntidote = 5;
	

	

	//---------------------------------------------------------------------
	//Apparition du "monstre"
	//ETAPE 1

	printf("Un Aspicot sauvage apparait\n");
	printf("Aspicot sauvage a %d points de vie\n", pointDeVie);
	printf("Vous avez %d points de vie \n", mesPdv);

	
	/*
	printf("Vous lancez attaque legere sur Aspicot\n");
	printf("Aspicot a %d points de vie\n", pointDeVie - atkLegere );*/

	//----------------------------------------------------------------------
	//ETAPE 2
	//Boucle while pour attaquer l'aspicot jusqu'à l'achever
	/*while (pointDeVie > 0)
	{
		printf("Vous lancez une attaque legere sur Aspicot\n");
		pointDeVie--;
		printf("Aspicot a %d points de vie\n", pointDeVie);
	}
	*/

	//---------------------------------------------------------------------
	//Contre attaque du monstre
	//ETAPE 3

	/*while (pointDeVie > 0 && mesPdv > 0 )
	{
		printf("Vous lancez une attaque legere sur Aspicot\n");
		pointDeVie--;
		printf("Aspicot a %d points de vie\n", pointDeVie);
			if (pointDeVie == 0)
	{
				printf("Aspicot est mort\n");
				break;
	}
		printf("Aspicot lance piqure\n");
		mesPdv--;
		printf("Vous avez %d point de vie\n", mesPdv);
	}	 
	*/

	//-------------------------------------------------------------------------
	//Choix action Joueur
	//Etape 4

	/*
	while (pointDeVie > 0 && mesPdv > 0 )
	{
		printf("C'est votre tour que souhaitez vous faire ? \n");
		printf("Tapez 1 pour lancer une attaque legere ou tapez 2 pour vous defendre. \n");
		scanf("%d", &choixAction);
		
		if (choixAction == 1)
		{
			printf("Vous lancez une attaque legere sur Aspicot ! \n");
			pointDeVie--;
			printf("Aspicot a %d points de vie! \n", pointDeVie);
			printf("Aspicot lance piqure ! \n");
			mesPdv-- ;
			printf("Vous avez %d point de vie ! \n", mesPdv);
		}

		else if (choixAction == 2)
		{
			printf("Vous vous protegez de Aspicot votre defense est multipliee par 4 ! \n");
			printf("Aspicot lance piqure ! \n");
			mesPdv- 0.25;
			printf("Ce n'est pas tres efficace...\n");
		}


			if (pointDeVie == 0 )
	{
				printf("Aspicot est mort !!! \n");
				break;
	}
			else if (mesPdv == 0)
	{
				printf("Vous etes mort !!! \n");
				break;
	}	
		
	}

	*/

	//-------------------------------------------------------------------------
	//Action aléatoire du monstre
	// ETAPE 5


	/*Je n'ai pas réussi a assigner un nombre aléatoire à ma fonction if, à chaque tour de jeu
	un nombre aléatoire est généré entre 1 et 2, correspondant respectivement à une attaque
	ou une défense du monstre. Je pense que le code ressemblerais probablement à ça mais pas 
	moyen de trouver comment réutiliser ce fameux nombre pour générer une action.*/

	/*

	while (pointDeVie > 0 && mesPdv > 0 )
	{
		printf("C'est votre tour que souhaitez vous faire ? \n");
		printf("Tapez 1 pour lancer une attaque legere ou tapez 2 pour vous defendre. \n");
		scanf("%d", &choixAction);
		
		if (choixAction == 1)
		{
			printf("Vous lancez une attaque legere sur Aspicot ! \n");
			pointDeVie--;
			printf("Aspicot a %d points de vie! \n", pointDeVie);
		}
		

		else if (choixAction == 2)
		{
			printf("Vous vous protegez de Aspicot votre defense est multipliee par 4 ! \n");
			printf("Vous avez %d point de vie ! \n", mesPdv);
			
		}

		for (i = 0; i < 1; i++)
		{
			printf("%d\n", 1 + rand()%2);
		}
			if (i == 1 && choixAction ==1)
			{
				printf("Aspicot lance piqure ! \n");
				mesPdv-- ;
				printf("Vous avez %d point de vie ! \n", mesPdv);
			}
			else if (i == 1 && choixAction ==2)
			{
				printf("Aspicot lance piqure ! \n");
				printf("Ce n'est pas tres efficace...\n");
				printf("Vous avez %d point de vie ! \n", mesPdv);
			}

			else if (i == 2 && choixAction == 1)
			{
				printf("Aspicot se protège de votre attaque ! \n");
				printf("Ce n'est pas tres efficace...\n");
				printf("Aspicot a %d points de vie! \n", pointDeVie);
			}

			else if (i == 2 && choixAction == 2)
			{
				printf("Aspicot se protège de votre attaque ! \n");
				printf("Wow quelle combat impressionnat !! \n");
				printf("Aspicot a %d points de vie! \n", pointDeVie);

			}

				if (pointDeVie == 0 )
	{
				printf("Aspicot est mort !!! \n");
				break;
	}
			else if (mesPdv == 0)
	{
				printf("Vous etes mort !!! \n");
				break;
	}	
	   
	}
	*/
			
	//-----------------------------------------------------------------------------
	// Points de magie et sort de poison.
	// ETAPE 6
	/*Empoisonnement fonctionnel sur un seul tour.*/

	/*

	while (pointDeVie > 0 && mesPdv > 0 )
	{
		if (mesPdm<10)
		{
			printf("Vous recuperez 1 pt de magie\n");
			mesPdm ++;
		}
		printf("C'est votre tour que souhaitez vous faire ? \n");
		printf("Tapez 1 pour lancer une attaque legere, tapez 2 pour vous defendre ou 3 pour lancer un sort de type poison \n");
		scanf("%d", &choixAction);
		
		if (choixAction == 1)
		{
			printf("Vous lancez une attaque legere sur Aspicot ! \n");
			pointDeVie--;
			printf("Aspicot a %d points de vie! \n", pointDeVie);
		}
		

		else if (choixAction == 2)
		{
			printf("Vous vous protegez de Aspicot votre defense est multipliee par 4 ! \n");
			printf("Vous avez %d point de vie ! \n", mesPdv);
			
		}


		else if (choixAction == 3)
		{
			printf("Vous lancez un sort sur Aspicot \n");
			pointDeVie--;
			printf("Il vous reste %d points de magie \n", mesPdm -= coutSort);
			printf("Aspicot a %d points de vie! \n", pointDeVie);
			printf("Aspicot est empoisonne ! \n");
		}

		for (i = 0; i < 1; i++)
		{
			printf("%d\n", 1 + rand()%2);
		}
			if (i == 1 && choixAction ==1)
			{
				printf("Aspicot lance piqure ! \n");
				mesPdv-- ;
				printf("Vous avez %d point de vie ! \n", mesPdv);
			}
			else if (i == 1 && choixAction ==2)
			{
				printf("Aspicot lance piqure ! \n");
				printf("Ce n'est pas tres efficace...\n");
				printf("Vous avez %d point de vie ! \n", mesPdv);
			}

			else if (i == 1 && choixAction == 3)
			{

				printf("Aspicot lance piqure ! \n");
				mesPdv-- ;
				printf("Vous avez %d point de vie ! \n", mesPdv);
				printf("Le poison fait son effet Aspicot perd 1 point de vie ! \n");
				printf("Aspicot a %d points de vie \n", pointDeVie -= 1 );
			}

					
	}

		
		if (pointDeVie == 0 )
			{	printf("Aspicot est mort !!! \n");
				
			}
		else if (mesPdv == 0)
			{
			printf("Vous etes mort !!! \n");
			
			}	
	   
	*/

	//-----------------------------------------------------------------------------
	// Points de magie et sort de poison pour le monstre
	// ETAPE 7

	/*

	while (pointDeVie > 0 && mesPdv > 0 )
	{
		if (mesPdm<10)
		{
			printf("Vous recuperez 1 pt de magie\n");
			mesPdm ++;
		}
		printf("C'est votre tour que souhaitez vous faire ? \n");
		printf("Tapez 1 pour lancer une attaque legere, tapez 2 pour vous defendre ou 3 pour lancer un sort de type poison \n");
		scanf("%d", &choixAction);
		
		if (choixAction == 1)
		{
			printf("Vous lancez une attaque legere sur Aspicot ! \n");
			pointDeVie--;
			printf("Aspicot a %d points de vie! \n", pointDeVie);
		}
		

		else if (choixAction == 2)
		{
			printf("Vous vous protegez de Aspicot votre defense est multipliee par 4 ! \n");
			printf("Vous avez %d point de vie ! \n", mesPdv);
			
		}


		else if (choixAction == 3)
		{
			printf("Vous lancez un sort sur Aspicot \n");
			pointDeVie--;
			printf("Il vous reste %d points de magie \n", mesPdm -= coutSort);
			printf("Aspicot a %d points de vie! \n", pointDeVie);
			printf("Aspicot est empoisonne ! \n");
			printf("Le poison fait son effet Aspicot perd 1 point de vie ! \n");
			printf("Aspicot a %d points de vie \n", pointDeVie -= 1 );
		}


// fonction qui devrait empecher Aspicot de m'envoyer un sort mais qui ne marche pas.
// Je n'arrive pas a bloquer (ce n'est pas faute d'avoir essayé différentes méthodes).
	if (pointDeMagie < coutSort)
	{
		printf("Aspicot lance piqure ! \n");
		mesPdv-- ;
		printf("Vous avez %d point de vie ! \n", mesPdv);
	}

		if (pointDeMagie<10)
		{
			printf("Aspicot recupere 1 pt de magie\n");
			pointDeMagie ++;
		}

		

		

		if (choixAction == 1 || choixAction == 3)
		{
			printf("Aspicot attaque Dard Venin \n");
			mesPdv-- ;
			printf("Vous avez %d point de vie ! \n", mesPdv);
			printf("Vous etes empoisonne\n");
			printf("Le poison fait son effet vous perdez 1 point de vie\n");
			printf("Il vous reste %d point de vie\n", mesPdv-= 1 );
			printf("Aspicot a %d points de magie \n", pointDeMagie -= coutSort);
		}

		else if (choixAction == 2)
		{
			printf("Aspicot attaque Dard Venin \n");
			printf("Ce n'est pas tres efficace...\n");
			printf("Vous etes empoisonne\n");
			printf("Le poison fait son effet vous perdez 1 point de vie \n");
			printf("Il vous reste %d point de vie\n", mesPdv-= 1 );
			printf("Aspicot a %d points de magie \n", pointDeMagie-= coutSort);
		}

			
		
	}

		

			if (pointDeVie == 0 )
				{	printf("Aspicot est mort !!! \n");
					
				}
			else if (mesPdv == 0)
				{
				printf("Vous etes mort !!! \n");
				
				}	

*/

// --------------------------------------------------------------------------------------
// Sort d'antidote pour recupérer de la magie.
// ETAPE 8

	while (pointDeVie > 0 && mesPdv > 0 )
	{
		if (mesPdm<10)
		{
			printf("Vous recuperez 1 pt de magie\n");
			mesPdm ++;
		}
		printf("C'est votre tour que souhaitez vous faire ? \n");
		printf("Tapez 1 pour lancer une attaque legere\n");
		printf("Tapez 2 pour vous defendre\n");
		printf("Tapez 3 pour lancer un sort de type poison\n");
		printf("Tapez 4 pour utiliser un sort d'antidote\n");
		scanf("%d", &choixAction);
		
		if (choixAction == 1)
		{
			printf("Vous lancez une attaque legere sur Aspicot ! \n");
			pointDeVie--;
			printf("Aspicot a %d points de vie! \n", pointDeVie);
		}
		

		else if (choixAction == 2)
		{
			printf("Vous vous protegez de Aspicot votre defense est multipliee par 4 ! \n");
			printf("Vous avez %d point de vie ! \n", mesPdv);
			
		}


		else if (choixAction == 3)
		{
			printf("Vous lancez un sort sur Aspicot \n");
			pointDeVie--;
			printf("Il vous reste %d points de magie \n", mesPdm -= coutSort);
			printf("Aspicot a %d points de vie! \n", pointDeVie);
			printf("Aspicot est empoisonne ! \n");
			printf("Le poison fait son effet Aspicot perd 1 point de vie ! \n");
			printf("Aspicot a %d points de vie \n", pointDeVie -= 1 );
		}

		// N'ayant pas réussi à faire perdurer le poison, mon antidote sera un soin de 3 pv contre 5 pts de magie.
		else if (choixAction == 4)
		{
			printf("Vous utilisez un sort d'antidote \n");
			printf("Vous recuperez 3 points de vie\n");
			printf("Vous avez %d points de vie\n", mesPdv += 3 );
			printf("Il vous reste %d points de magie \n", mesPdm -= coutAntidote);

		}


// Condition qui devrait empecher Aspicot de m'envoyer un sort si sa reserve de magie est insuffisante mais qui ne marche pas.
// Je n'arrive pas a bloquer (ce n'est pas faute d'avoir essayé différentes méthodes).
	if (pointDeMagie < coutSort)
	{
		printf("Aspicot lance piqure ! \n");
		mesPdv-- ;
		printf("Vous avez %d point de vie ! \n", mesPdv);
	}

		if (pointDeMagie<10)
		{
			printf("Aspicot recupere 1 pt de magie\n");
			pointDeMagie ++;
		}

		

		

		if (choixAction == 1 || choixAction == 3 || choixAction == 4)
		{
			printf("Aspicot attaque Dard Venin \n");
			mesPdv-- ;
			printf("Vous avez %d point de vie ! \n", mesPdv);
			printf("Vous etes empoisonne\n");
			printf("Le poison fait son effet vous perdez 1 point de vie\n");
			printf("Il vous reste %d point de vie\n", mesPdv-= 1 );
			printf("Aspicot a %d points de magie \n", pointDeMagie -= coutSort);
		}

		else if (choixAction == 2)
		{
			printf("Aspicot attaque Dard Venin \n");
			printf("Ce n'est pas tres efficace...\n");
			printf("Vous etes empoisonne\n");
			printf("Le poison fait son effet vous perdez 1 point de vie \n");
			printf("Il vous reste %d point de vie\n", mesPdv-= 1 );
			printf("Aspicot a %d points de magie \n", pointDeMagie-= coutSort);
		}

			
		
	}

		

			if (pointDeVie == 0 )
				{	printf("Aspicot est mort !!! \n");
					
				}
			else if (mesPdv == 0)
				{
				printf("Vous etes mort !!! \n");
				
				}	

	return 0;
}
