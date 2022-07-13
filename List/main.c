#include "List.h"
#include "myList.c"
#include <stdio.h>
#include <stdlib.h>

int menu(struct Node *tmp,struct List *MyList)
{
	struct Node *Node1;
	/*strcpy(Node->id, "ice20390178");
	strcpy(Node->name,"maria papadopoulou");
	Node->semester=3;*/
	Node1->next=NULL;
//	MyList->Head=Node1;
	
	int elem;
	int ch;
	char toFind[10];
    struct Node **prev;
    struct Node NN;
    Node1=(struct Node *)malloc(sizeof(struct Node));
		if (Node1 == NULL)
		{
			printf("Not enough memory!\n");
		}
	while (ch!=8)
	 {
	 	printf("ΜΕΝΟΥ");
	 	printf("*************\n");
        printf("1.Εισαγωγή Φοιτητή\n");
        printf("2.Διαγραφή Φοιτητή\n");
        printf("3.Αναζήτηση φοιτητή με βάση το ΑΜ\n");
        printf("4.Αναζήτηση φοιτητή με βάση το ονοματεπώνυμο\n");
        printf("5.Τροποποίηση στοιχείων φοιτητή και ΑΜ\n");
        printf("6.Δημιουργία Λίστας φοιτητών που βρίσκεται σε συγκεκριμένο εξάμηνο\n");
        printf("7.Εκτύπωση φοιτητών\n");
        printf("8.Εξοδος Μενού\n");
        printf("Εισαγωγή Επιλογής: \n");
        scanf("%d",&ch);
        switch (ch) 
		{ 
            case 1: printf("Εισαγωγή φοιτητή:");
            			scanf("%d", &elem);
//            		insert(&MyList, &NN);
					break;
           case 2: 
		   printf("Δώσε φοιτητή:");
            		scanf("%s",toFind);
            		if ( search_name(MyList,toFind,prev) && search_id(MyList,toFind,prev))
            		{
            		delete_node(MyList,item);
            			printf("Διαγράφηκε!\n");
            			
					}
					else
						printf("Δεν βρέθηκε\n");
					
					break;
            case 3: printf("Δώσε ΑΜ:");
            		scanf("%s",toFind);
            		if ( search_id(MyList,item, prev) )
            			printf("%s \n",tmp->am);
					else
						printf("Δεν βρέθηκε φοιτητής με αυτό το ΑΜ!\n");
					break;
			case 4: 
					printf("Δώσε όνομα:");
            		scanf("%s",toFind);
            		if ( search_name(MyList,item, prev) )
            			printf("%s \n",tmp->name);
					else
						printf("Δεν βρέθηκε φοιτητής με αυτό το όνοματεπώνυμο!\n");
					break;
					
					else
					{
						printf("%s %s %d \n",tmp->am, tmp->name, tmp->semester);
							
						if ( search_id(MyList,item, prev)==1 )
						{
							printf("Το ΑΜ υπάρχει!\n");
						
						}
						
					}
							
					break;
			case 7: 
					printf("Εκτύπωση Φοιτητών\n");
						print(Node);
							break;
            case 8: printf("Έξοδος!\n");
                    break;
            default:printf("Προσπάθησε ξανά.\n");
                    break;
        } 
    } 

    exit(0);
}

int main (int argc, char **argv)
{
	system("chcp 1253");
	struct List *MyList;
	struct Node *tmp;
	init(&MyList);
	menu(&tmp,&MyList);
	free (Node);
return 0;
}
