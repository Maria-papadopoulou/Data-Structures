#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

int menu(struct STACK * , struct STACK * , int );
int main(int argc , char* argv)
{
	system("chcp 1253");
	int stack_size=10;
	struct STACK Stack_1;
	struct STACK Stack_2;
	init(&Stack_1, stack_size);
	init(&Stack_2, stack_size);
	menu(&Stack_1, &Stack_2, stack_size);
	printf("....ΕΞΟΔΟΣ\n");
	return 0;
}

int menu(struct STACK *Stack_1, struct STACK *Stack_2,  int stack_size)
{
	int i, tmp;
	int choice, Elem, a, b;
	while(choice!=6)
	{
		printf("Μενού Επιλογών.\n");
		printf("1.Τοποθέτηση(Push) στοιχείου στη 1η στοίβα.\n");
		printf("2.Εξαγωγή (Pop) στοιχείου από τη 1η στοίβα\n");
		printf("3.Μεταφορά στοιχείων από τη 1η στοίβα στη 2η στοίβα.\n");
		printf("4.Εξαγωγή (Pop) στοιχείου από τη 2η στοίβα\n");
		printf("5.Αντιγραφή στοιχείου στη 1η στοίβα.\n");
		printf("6. Έξοδος.\n");
		printf("\n");
		printf("Εισάγετε την επιλογή που θέλετε:\n");
		scanf("%d", &choice);	

	switch(choice)
	{

		case 1: printf("Εισαγωγή στοιχείου που θέλετε να μπει στη στοίβα.\n");
				scanf("%d", &Elem);
			
		push(Stack_1, Elem);break;
		
		case 2:
			
		 a=pop(Stack_1, &Elem);
		if(a==0) 
		{
		
			printf("H στοίβα είναι άδεια.\n");
			printf("\n");
		}
		else
		{
	
			printf("To στοιχείο %d έχει αφαιρεθεί από τη στοίβα.\n", Elem);
			printf("\n");
		}
		
		break;
		case 3: transfer(Stack_1, Stack_2);
				print(Stack_1,stack_size );
				printf("\n");
				print(Stack_2, stack_size);
					printf("Έχουν μεταφερθεί τα δεδομένα της 1ης στοίβας στη 2η\n");
			break;
		case 4: 
		printf("Εισαγωγή στοιχείου που θέλετε να βγει από τη 2η στοίβα\n");
				scanf("%d", &Elem);
				printf("\n");
	
	b=pop(Stack_2, &Elem); 
	if(b==0) 
		{
		
			printf("H στοίβα είναι άδεια.\n");
			printf("\n");
		}
		else
		{
	
			printf("To στοιχείο %d έχει αφαιρεθεί από τη στοίβα.\n", Elem);
			printf("\n");
		}
		
		break;
		case 5: copy(Stack_1, Stack_2,Elem, stack_size);
				
			
		
		 break;
	}
}
	
}
