#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

typedef struct{
	char CIN[10],nom[50],prenom[50];
	float montant;
}client;

client clt[100];
int j=0;
// les prototypes :
int menuPrinc();
int menuOP();
int menuAFF();
void ajouter_1_client();
void ajouter_plus_clients();
void retrait();
void depot();
void triA();
void triD();
void afficher(client t[],int n);
void max_3();
void quitter();


int main()
{
   system("color A");
    motpass:
    quitter();
	int mot=1234;
	int log=12345;
	int login,password;
	printf("\n\t\t\t\t !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
	printf("\t\t\t\t LOGIN    : ");
	scanf("%d",&login);
	printf("\n\n");
	printf("\t\t\t\t PASSWORD : ");
	scanf("%d",&password);
	printf("\n\n\n");
	printf("\n\t\t\t\t !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");

	if (login==log && password==mot)
	{
		system("CLS");

	client c;
	int choix,menuP=0;
	debut:
    choix=menuPrinc();
	switch(choix)
	{
		case 1:
			{
				 system("CLS");
				printf("\t\t\t*************************      Bienvenu     *************************\n\n");
        	    printf("\t\t\t\tVeuillez remplir les champs:\n");
				ajouter_1_client();
				printf("\t\t\t************************* Ajout avec succes *************************\n");
			    printf("\n\t\t\t tapper 1 pour afficher le menu principal :\t");

	          	scanf("%d",&menuP);
				if(menuP==1)
				{
					system("CLS");
					goto debut;
				}

				break;
			}
		case 2:
			{
				system("CLS");
   		    	printf("\t\t\t*************************  Bienvenu  *************************\n\n");
			    ajouter_plus_clients();
			    printf("\t\t\t********************  Ajout avec succes  *********************\n\n");
				printf("\n\t\t\t tapper 1 pour afficher le menu priNcipal :");
				scanf("%d",&menuP);
				if(menuP==1)
				{
					system("CLS");
					goto debut;
				}

				break;
			}
		case 3:
            {    system("CLS");
                int choi;

                  op:
                   menuOP:
                  choi =menuOP();
                     switch(choi)
                      {
                    case 1:
                        {

                        retrait();
                       	printf("\n\t\t\t tapper 1 pour afficher le menu principal .");
                        printf("\n\t\t\t tapper 0 pour afficher le menu operations .\n");
			           	scanf("%d",&menuP);
			           	if(menuP==1)
			           	{
			        	system("CLS");
			        	goto debut;
			           	}
			           	if(menuP==0)
			           	{
			         	system("CLS");
			         	goto menuOP;
			           	}
                        }break;
                    case 2:
                        {
                        depot();
                       	printf("\n\t\t\t tapper 1 pour afficher le menu principal .");
                        printf("\n\t\t\t tapper 0 pour afficher le menu operations .\n");
			           	scanf("%d",&menuP);
			           	if(menuP==1)
			           	{
			        	system("CLS");
			        	goto debut;
			           	}
			           	if(menuP==0)
			           	{
			         	system("CLS");
			         	goto menuOP;
			           	}

                    }break;
                   default:
                   	{
                   		system("CLS");
				 		printf("votre choix est incorrect:\n");
				 		goto op;
					   }

                }
                

            }
		case 4:
			{
			  system("CLS");
		      int choix4;
		      menuAFF:
			  choix4=menuAFF();

			  switch(choix4)
			  {

			  	case 1:
			  		{
			  		triA();
			        	printf("\n\t\t\t tapper 1 pour afficher le menu principal .");
                        printf("\n\t\t\t tapper 0 pour afficher le menu operations .\n");
			           	scanf("%d",&menuP);
			           	if(menuP==1)
			           	{
			        	system("CLS");
			        	goto debut;
			           	}
			           	if(menuP==0)
			           	{
			         	system("CLS");
			         	goto menuAFF;
			           	}
			    	break;
		         	}

				case 2:
			  		{
			  	   	triD();
			         	printf("\n\t\t\t tapper 1 pour afficher le menu principal .");
                        printf("\n\t\t\t tapper 0 pour afficher le menu operations .\n");
			           	scanf("%d",&menuP);
			           	if(menuP==1)
			           	{
			        	system("CLS");
			        	goto debut;
			           	}
			           	if(menuP==0)
			           	{
			         	system("CLS");
			         	goto menuAFF;
			           	}
			      	break;
			          }
			
	     		case 3:
		     		{
					float mnt;
					int i,a=j,k=0,d;
					client temp[100];
					printf("entrez un montant :\n");
					scanf("%f",&mnt);
					for(i=0;i<a;i++)
					{
						if(clt[i].montant>mnt)
					    	{
							temp[k]=clt[i];
							k++;
					    	}
					}
				//trie
				client tp;
					    int echanges = 0;
                        do{
                           for(i = 0; i <k-1; i++)
			           	 	 {
                                if(temp[i].montant>temp[i+1].montant)
				            	 {
                                   tp= temp[i];
                                   temp[i] = temp[i +1];
                                   temp[i +1] = tp;
                                 }
                                echanges++;
                               }
                        }while(echanges > 0);

					// affichage apres trie
			        	afficher(temp,k);
						printf("\n\t\t\t tapper 1 pour afficher le menu principal .");
                        printf("\n\t\t\t tapper 0 pour afficher le menu operations .\n");
			           	scanf("%d",&menuP);
			           	if(menuP==1)
			           	{
			        	system("CLS");
			        	goto debut;
			           	}
			           	if(menuP==0)
			           	{
			         	system("CLS");
			         	goto menuAFF;
			           	}
					break;
				}
		     	case 4:
		    		{
					float mnt;
					int i,a=j,k=0,d;
					client temp[100];
					printf("entrez un montant :\n");
					scanf("%f",&mnt);
					for(i=0;i<a;i++)
					{
						if(clt[i].montant>mnt)
					    	{
							temp[k]=clt[i];
							k++;
					    	}
					}
		         	//trie
			     	client tp;
					    int echanges = 0;
                        do{
                           for(i = 0; i <k-1; i++)
			           	 	 {
                                if(temp[i].montant<temp[i+1].montant)
				            	 {
                                   tp= temp[i];
                                   temp[i] = temp[i +1];
                                   temp[i +1] = tp;
                                 }
                                echanges++;
                               }
                        }while(echanges > 0);
				      // affichage apres trie
			        	afficher(temp,k);
						printf("\n\t\t\t tapper 1 pour afficher le menu principal .");
                        printf("\n\t\t\t tapper 0 pour afficher le menu operations .\n");
			           	scanf("%d",&menuP);
			           	if(menuP==1)
			           	{
			        	system("CLS");
			        	goto debut;
			           	}
			           	if(menuP==0)
			           	{
			         	system("CLS");
			         	goto menuAFF;
			           	}
					break;
				}
				
				
	            case 5:
		            {
			    char cin[10];
			 	printf("entre votre Cin :\t");
                scanf("%s",cin);
               // void rechercher(cin);
                int i,existe=0,indice;
	            int a=j;

                for(i=0;i<a;i++)
                {
                 if(strcmp(cin,clt[i].CIN)==0)
                 {
		        	existe=1;
		        //	indice=i;
                    break;
               	 }
             	}
                 if(existe==1)
                 {
                	printf("\n ce compte est existe\n");
                    printf("CIN : %s\n",clt[indice].CIN);
                    printf("NOM : %s\n",clt[indice].nom);
                    printf("PRENOM : %s\n",clt[indice].prenom);
                    printf("MONTANT : %f\n", clt[indice].montant);
		         }
                else
		         {
		       	  printf("\n ce compte n existe pas\n");
		         }
		         
		         
		   	      printf("\n\t\t\t tapper 1 pour afficher le menu principal .");
                  printf("\n\t\t\t tapper 0 pour afficher le menu operations .\n");
			   	  scanf("%d",&menuP);
			   	  if(menuP==1)
			      {
			      system("CLS");
			      goto debut;
			      }
			      if(menuP==0)
			      {
			      system("CLS");
			   	  goto menuAFF;
			      }
                   break;
			       }			       
		    	default :
    	        	{ 
					    system("CLS");
				 		printf("votre choix est incorrect:\n");
				 		goto menuAFF;
		        	 }
		}
		 break;
		}
	    case 5:
	       	{
	      		 		int a=j;
						client temp;
					    int i, echanges = 0;
                        do{
                           for(i = 0; i < a-1; i++)
			           	 	 {
                                if(clt[i].montant<clt[i+1].montant)
				            	 {
                                   temp= clt[i];
                                   clt[i] = clt[i +1];
                                   clt[i +1] = temp;
                                 }
                                echanges++;
                               }
                        }while(echanges > 0);

              for(i=0;i<3;i++)
				{
                clt[i].montant=clt[i].montant*1.013;
                }
				afficher(clt,3);
			    printf("\n\t\t\t tapper 1 pour afficher le menu principal :");
				scanf("%d",&menuP);
				if(menuP==1)
				{
					system("CLS");
					goto debut;
				}
				break;
                }
        case 6:
          	{
               		system("color C");
                	quitter();
                	printf("\n\n\t\t\t\t\t\t Aurevoir ('_') \n\n\n\n\n");
					break;
					}
       	default :
    	 	{ 
					    system("CLS");
				 		printf("votre choix est incorrect:\n");
				 		goto debut;
			 }

	}


	}

	else
	{
	system("CLS");
	printf("incorrect\n");
	goto motpass;
	}

	return 0;
}











void ajouter_1_client()
{
				printf("\t\t\t\n CIN     : ");
				scanf("%s",clt[j].CIN);
				printf("\t\t\t\n Nom     : ");
				scanf("%s",clt[j].nom);
				printf("\t\t\t\n Prenom  : ");
				scanf("%s",clt[j].prenom);
				printf("\t\t\t\n Montant : ");
				scanf("%f",&clt[j].montant);
				j++;
}

void ajouter_plus_clients()
{
		     	int i,a=j,n;
				printf("\n\n\n\t\t\t Entrez le nombre de client :  ");
				scanf("%d",&n);
				printf("\n\n");

				printf("\t\t\t Veuillez remplir les champs:\n");
		    	printf("\n\t\t\n");
				for(i=a;i<n+a;i++)
				{
				printf("\n\t\t\t================ client %d : ================",i+1);
		    	ajouter_1_client();
				}
}

void retrait()
{
            	char cin_user[10];
	                     float s1;
                         int i;
                         int a=j;

                         printf("\t\t\t Entre un CIN :\t");
                         r:
                        scanf("%s",&cin_user);
                        for(i=0;i<a;i++)
                        {
                            if(strcmp(cin_user,clt[i].CIN)==0)
                            {
                                printf("\t\t\tCombien d'argent voulez-vous retirer : ");
                                scanf("%f",&s1);
                                printf("\n\n");
                                if(s1>clt[i].montant)
                                {
                                	printf("\n===============================================\n");
                                    printf("\t impossible votre sold inferieur a %.2f\n",s1);
                                    printf("\n===============================================\n");
                                    break;
                                }
                                else
                                {
                                clt[i].montant-=s1;
                                printf("\n\n\t\t\t le retrait a effectue avec succes .\n");
                                return;
								}

                            }
                        }
							 printf("\n\t\t===============================================\n");
							 printf("\t\t ce compte n existe pas :\n");
							 printf("\n\t\t===============================================\n\n");
							 printf("entrez un autre CIN :\n");
                             goto r;




}

void depot()
{
                    	float s2;
                         int i;
                         int a=j;
                         char cin_user[7];
                         printf("\t\t\t Entre un CIN :\t");
                         d:
                        scanf("%s",&cin_user);
                        for(i=0;i<a;i++)
                        {
                            if(strstr(cin_user,clt[i].CIN))
                            {
                                printf("\t\t\tCombien d'argent voulez-vous deposer :");
                                scanf("%f",&s2);
                                printf("\n\n");
                                clt[i].montant+=s2;
                                printf("\n\n\t\t\t le depot a effectue avec succes .\n");
                                return;
                            }
							}
							 printf("\n\t\t===============================================\n");
							 printf("\t\t ce compte n existe pas :\n");
							 printf("\n\t\t===============================================\n\n");
                             printf("entrez un autre CIN :\n");
                             goto d;
                          }



void triA()
{
		int a=j;
			
						client temp;
					    int i, echanges = 0;
                        do{
                           for(i = 0; i < a-1; i++)
			           	 	 {
                                if(clt[i].montant>clt[i+1].montant)
				            	 {
                                   temp= clt[i];
                                   clt[i] = clt[i +1];
                                   clt[i +1] = temp;
                                 }
                                echanges++;
                               }
                        }while(echanges > 0);

              afficher(clt,a);

}


void triD()
{
		                int a=j;
						client temp;
					    int i, echanges = 0;
                        do{
                           for(i = 0; i < a-1; i++)
			           	 	 {
                                if(clt[i].montant<clt[i+1].montant)
				            	 {
                                   temp= clt[i];
                                   clt[i] = clt[i +1];
                                   clt[i +1] = temp;
                                 }
                                echanges++;
                               }
                        }while(echanges > 0);
              afficher(clt,a);
}

int menuPrinc()
{
	system("color 6");
	int  choix;
	printf("\n\n");
	printf("<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<        Menu principal :          >:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>\n");
	printf("|\n");
	printf("|\t\t 1- Introduire un compte bancaire.\n");
	printf("|\t\t 2- Introduire plusieur comptes bancaires.\n");
	printf("|\t\t 3- Operations.\n");
	printf("|\t\t 4- Affichage.\n");
	printf("|\t\t 5- Fidelisation.\n");
	printf("|\t\t 6- Quitter.\n");
	printf("|\n");
	printf("<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<...................................>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:> \n\n");
	printf("Entrez votre choix :\n");
	scanf("%d",&choix);
	return choix;
}

int menuOP()
{
	system("color E");
	int choi;
	 printf("\t\t\t===========================   Operations:  ===========================\n\n");
                   printf("\t\t\t 1- Retrait \n");
                   printf("\t\t\t 2- Depot\n");

     printf("\n\t\t\t======================================================================\n\n");
                   printf("\n\n\t\t\t Veuillez choisir une operation: ");
				   scanf("%d",&choi);

    return choi;
}
 void afficher(client t[],int n)
 {
 	int i;
 	for(i=0;i<n;i++)
				{
				printf("Client %d:\n",i+1);
				printf("CIN : %s\n",t[i].CIN);
				printf("Nom : %s\n",t[i].nom);
				printf("Prenom : %s\n",t[i].prenom);
				printf("Montant : %.2f\n",t[i].montant);
				printf("\n");
				}

 }
int menuAFF()
{
system("color E");
	int choix4;
	printf("\n\n============================================   Affichage :  ============================================ \n\n");
              printf("1- Par Ordre Ascendant :\n");
			  printf("2- Par Ordre Descendant :\n");
			  printf("3- Par Ordre Ascendant (les comptes bancaires ayant un montant supérieur à un chiffre introduit) :\n");
			  printf("4- Par Ordre Descendant (les comptes bancaires ayant un montant supérieur à un chiffre introduit) :\n");
			  printf("5- Recherche par CIN :\n");
	printf("\n\n======================================================================================================== \n\n");
			  printf("entrez votre choix :\n");
			  scanf("%d",&choix4);

			  return choix4;
}

void quitter()
{

    printf("\n\n\n");
    printf("\t\t\t\t                    @@@@@@@      \n  ");
    printf("\t\t\t\t                    @@@@@@@     \n  ");
    printf("\t\t\t\t                    @@@@@@@     \n  ");
    printf("\t\t\t\t                    @@@@@@@     \n  ");
    printf("\t\t\t\t           @@@@@o   @@@@@@@  O@@@@@          \n");
    printf("\t\t\t\t        @@@@@@@o    @@@@@@@    o@@@@@@@         \n");
    printf("\t\t\t\t      o@@@@@@@o     @@@@@@@     o@@@@@@@o           \n");
    printf("\t\t\t\t     o@@@@@@@o      @@@@@@@      o@@@@@@@o       \n");
    printf("\t\t\t\t     @@@@@@@o       @@@@@@@       o@@@@@@@      \n");
    printf("\t\t\t\t    o@@@@@@@        @@@@@@@        @@@@@@@o       \n");
    printf("\t\t\t\t    o@@@@@@o         o@@@o         o@@@@@@o      \n");
    printf("\t\t\t\t    o@@@@@@@                       @@@@@@@o    \n");
    printf("\t\t\t\t    o@@@@@@@                       @@@@@@@o      \n");
    printf("\t\t\t\t     @@@@@@@@                     @@@@@@@@         \n");
    printf("\t\t\t\t     @@@@@@@@@o                 O@@@@@@@@@                \n ");
    printf("\t\t\t\t      @@@@@@@@@o              O@@@@@@@@@                    \n");
    printf("\t\t\t\t        o@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                           \n ");
    printf("\t\t\t\t          o@@@@@@@@@@@@@@@@@@@@@@@@@@                           \n ");
    printf("\t\t\t\t            @@@@@@@@@@@@@@@@@@@@o                          \n ");
    printf("\t\t\t\t                o@@@@@@@@@@@@@@                          \n ");
}
