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
void login();
void msg();
void triD1(client t,int n);


int main()
{
   system("color A");
    motpass:
    login();
	int mot=0000,user=1234;
	int username,password;
	printf("\n\n\n\t\t\t\t\t !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
	printf("\t\t\t\t\t\t\t Username  : ");
	scanf("%d",&username);
	printf("\n\n");
	printf("\t\t\t\t\t\t\t Password  : ");
	scanf("%d",&password);
	printf("\n\n\n");
	printf("\n\t\t\t\t\t !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");

	if (username==user && password==mot)
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
				printf("*************************      Bienvenu     *************************\n\n");
        	    printf("\t\t\ttVeuillez remplir les champs:\n");
				ajouter_1_client();
				printf("\n\n************************* Ajout avec succes *************************\n");
			    printf("\n\n tapper 1 pour afficher le menu principal :\t");

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
   		    	printf("*************************  Bienvenu  *************************\n");
			    ajouter_plus_clients();
			    printf("\n\n********************  Ajout avec succes  *********************\n");
				printf("\n tapper 1 pour afficher le menu principal :");
				scanf("%d",&menuP);
				if(menuP==1)
				{
					system("CLS");
					goto debut;
				}

				break;
			}
		case 3:
            {    
			 system("CLS");
             int choi;
              menuOP:
                  choi =menuOP();
                     switch(choi)
                      {
                    case 1:
                        {
                        retrait();
                       	msg();
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
						break;
                        }
                    case 2:
                        {
                        depot();
                       	msg();
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
                   break;
                    }
                   default:
                   	{
                   		system("CLS");
				 		printf("votre choix est incorrect:\n");
				 		goto menuOP;
					}

                }
                break;
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
			        msg();
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
			         	msg();
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
						msg();
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
						msg();
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
                int i,existe=0,indice;
	            int a=j;
                for(i=0;i<a;i++)
                {
                 if(strcmp(cin,clt[i].CIN)==0)
                 {
		        	existe=1;
                    break;
               	 }
             	}
                 if(existe==1)
                 {
                	printf("\n ce compte est existe\n");
                    printf("CIN     :  %s\n",clt[indice].CIN);
                    printf("NOM     :  %s\n",clt[indice].nom);
                    printf("PRENOM  :  %s\n",clt[indice].prenom);
                    printf("MONTANT :  %.2f\n", clt[indice].montant);
		         }
                else
		         {
		       	  printf("\n ce compte n existe pas\n");
		         }
		         
		   	      msg();
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
                	printf("\n\n\t\t\t\t\t\t Aurevoir (^-^) \n\n\n\n\n");
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
				printf("\n CIN     : ");
				scanf("%s",clt[j].CIN);
				printf("\n Nom     : ");
				scanf("%s",clt[j].nom);
				printf("\n Prenom  : ");
				scanf("%s",clt[j].prenom);
				printf("\n Montant : ");
				scanf("%f",&clt[j].montant);
				j++;
}

void ajouter_plus_clients()
{
		     	int i,a=j,n;
				printf("\n Entrez le nombre de client :  ");
				scanf("%d",&n);
				printf("\n");
				printf(" Veuillez remplir les champs:\n\n");
				for(i=a;i<n+a;i++)
				{
				printf("\n=========== client %d : ===========",i+1);
		    	ajouter_1_client();
				}
}

void retrait()
{
            	char cin_user[10];
	                     float s1;
                         int a=j,i;

                         printf(" \nEntre un CIN :\t");
                         r1:
                        scanf("%s",&cin_user);
                        for(i=0;i<a;i++)
                        {
                            if(strcmp(cin_user,clt[i].CIN)==0)
                            {
                                printf(" \nCombien d'argent voulez-vous retirer : ");
                                r:
							    scanf("%f",&s1);
                                printf("\n");
                                if(s1>clt[i].montant)
                                {
                                	printf("\n===========================================\n");
                                    printf(" impossible votre sold inferieur a %.2f\n",s1);
                                    printf("\n===========================================\n");
                                    printf("Entrez un autre montant :\t ");
                                    goto r;
                                }
                                else
                                {
                                clt[i].montant-=s1;
                                printf("\n\n le retrait a effectue avec succes.(^-^)\n");
                                return;
								}

                            }
                        }
							 printf("\n==========================\n");
							 printf(" ce compte n existe pas !!!\n");
							 printf("\n==========================\n");
							 printf("entrez un autre CIN : ");
                             goto r1;




}

void depot()
{
                    	float s2;
                         int a=j,i;
                         char cin_user[7];
                         printf(" \nEntre un CIN :\t");
                         d:
                        scanf("%s",&cin_user);
                        for(i=0;i<a;i++)
                        {
                            if(strcmp(cin_user,clt[i].CIN)==0)
                            {
                                printf(" Combien d'argent voulez-vous deposer :");
                                scanf("%f",&s2);
                                printf("\n\n");
                                clt[i].montant+=s2;
                                printf("\n\n le depot a effectue avec succes.(^-^)\n");
                                return;
                            }
							}
							 printf("\n==========================\n");
							 printf(" ce compte n existe pas !!!\n");
							 printf("\n==========================\n");
                             printf("entrez un autre CIN : ");
                             goto d;
                          }



void triA()
{
	             	int a=j,i,echanges = 0;
					client temp;
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
		                int a=j,i, echanges = 0;
						client temp;
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
	 printf("===========================   Operations:  ===========================\n\n");
                   printf("\t\t\t 1- Retrait \n");
                   printf("\t\t\t 2- Depot\n");

     printf("\n======================================================================\n\n");
                   printf("\n Veuillez choisir une operation: ");
				   scanf("%d",&choi);

    return choi;
}
 void afficher(client t[],int n)
 {
 	int i;
 	for(i=0;i<n;i++)
				{	
				printf("===== Client  : %d =====\n",i+1);
				printf("CIN     :  %s\n",t[i].CIN);
				printf("Nom     :  %s\n",t[i].nom);
				printf("Prenom  :  %s\n",t[i].prenom);
				printf("Montant :  %.2f\n",t[i].montant);
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
			  printf("3- Par Ordre Ascendant (les comptes bancaires ayant un montant superieur a un chiffre introduit) :\n");
			  printf("4- Par Ordre Descendant (les comptes bancaires ayant un montant superieur a un chiffre introduit) :\n");
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


void login()
{
	printf("\t\t\t @@              o@@@o             o@@@o           @@@@@@@@     @@o         @@  \n");
	printf("\t\t\t @@            @@     @@         @@     @@            @@        @@  @o      @@  \n");
	printf("\t\t\t @@           @@       @@       @@       o@@          @@        @@   @o     @@  \n");
	printf("\t\t\t @@          o@@       @@o     o@@                    @@        @@    @o    @@  \n");
	printf("\t\t\t @@          @@o       o@@     @@o                    @@        @@     @o   @@  \n");
	printf("\t\t\t @@          o@@       @@o     o@@     @@@@@          @@        @@      @o  @@  \n");
	printf("\t\t\t @@            @@o    @@         @@o     o@@          @@        @@       @o @@  \n");
	printf("\t\t\t @@@@@@@         o@@@o            o@@@@@@@o        @@@@@@@@     @@         o@@  \n");
}

void msg()
{
	printf("\n\n tapper 1 pour afficher le menu principal .");
    printf("\n tapper 0 pour afficher le menu operations .\n");			           	
}


