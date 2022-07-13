#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include <unistd.h>

void init(struct STACK *St, int Size)
{
St->pin = (int *) malloc (Size * sizeof (int));
St->head = 0;
St->Size = Size;
memset(St->pin,0,St->Size*sizeof(int));
}



int push (struct STACK *St, int Elem) //εισαγωγη στοιχειου
{
int i;
if (St->head == St->Size)
	return 0;

St->pin[St->head++] = Elem;
return 1;
}

int pop (struct STACK *St, int *Elem) //εξαγωγη στοιχειου
{
if (St->head == 0)
return 0;

St->head--;
*Elem = St->pin[St->head];
St->pin[St->head]=0;
return 1;
}

int transfer (struct STACK *St1, struct STACK *St2)
{
	int temp1=1;
	int temp2=1;
	int Elem;
	 while (temp1!=0 && temp2!=0)
	{
	
		temp1=pop(St1, &Elem);
		if (temp1==1)
			temp2=push(St2, Elem); 
	}
}

void print(struct STACK *St, int stack_size)
{
struct STACK tmp;
int a;
int elem;
init (&tmp, stack_size);
do
{
	a = pop (St, &elem);
		if (a == 1)
			push (&tmp, elem);
}
while (a == 1);

printf ("ΣΤΟΙΒΑ: \n");

do
{
	a = pop (&tmp, &elem);
		if (a == 1)
		{
			push (St, elem);
			printf ("| %d | \n", elem);
		}
}
while (a == 1);
printf ("\n");
}

int copy(struct STACK *St1, struct STACK *St2, int Elem, int stack_size)
{
	int tmp=1;
	struct STACK *Tmp;
	init (Tmp, stack_size);
	do
	{
		tmp=pop(St2, &Elem);
	}
	while(tmp==1);
	
	do
	{
		tmp=pop(St1, &Elem);
		if(tmp==1)
			push(Tmp, Elem);
	}
	while(tmp==1);	
	
	do
	{
		tmp=pop(Tmp, &Elem);
		if(tmp==1)
		{
			push(St2, Elem);
			push(St1, Elem);
			
		}
			
	}while(tmp==1);
	
	print(St1, stack_size);
	printf("\n");
	print(St2, stack_size);
	
}
