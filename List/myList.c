#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void init (struct List *L)
{
		L->Head=NULL;
}

struct Node *search_id(struct List L, int item, struct Node **prev) 
{
	struct Node *tmp;
	
	tmp=L.Head;
	*prev=NULL;
	
	while (tmp!= NULL && tmp->id<item)
	{
		*prev=tmp;
		tmp=tmp->next;
	}
		if(tmp->id==item)
			return tmp;

		return NULL;
}

struct Node *search_name (struct List L, int item, struct Node **prev) 
{
	struct Node *tmp;
	
	tmp=L.Head;
	*prev=NULL;
	
	while (tmp!= NULL && tmp->name< item)
	{
		*prev=tmp;
		tmp=tmp->next;
	}
		if(tmp->name==item)
			return tmp;

		return NULL;
}

int insert(struct List *Lst, struct Node NN)
{
	struct Node *tmp1, *tmp2, *tmp3, *tmp4;
	tmp1= search_ID(*Lst, NN.ID, &tmp2);
	tmp3= search_name(*Lst, NN.name, &tmp4);
	if (tmp1)
		return 0;
		
	tmp1= (struct Node *) malloc (sizeof (struct Node));
	*tmp1=NN;
	
	if (tmp2==NULL)
	{
		tmp1->next=Lst->Head;
		Lst->Head= tmp1;
	}
	else
	{
		tmp1->next= tmp2->Next;
		tmp2->next=tmp1;
	}
	
		if (tmp3)
		return 0;
		
	tmp3= (struct Node *) malloc (sizeof (struct Node));
	*tmp3=NN;
	
	if (tmp4==NULL)
	{
		tmp3->next=Lst->Head;
		Lst->Head= tmp3;
	}
	else
	{
		tmp3->Next= tmp4->next;
		tmp4->next=tmp3;
	}
	return 1; 
}

int delete_node(struct List *Lst, int item)
{
		struct Node *tmp1, *tmp2;
		tmp1= search_id(*Lst, item , &tmp2);
			if(tmp1==NULL)
			return 0; 
			
		if (tmp2 == NULL)
		{
			Lst->Head = tmp1->Next;
			free(tmp1);
		}
		else
		{
			tmp2->next=tmp1->next;
		free(tmp1);
	}
		
	
		return 1; 			
}

void print(struct Node *Nd)
{
	if(Nd->semester ==3)
	{
		printf("%d   %s   %d\n", Nd->id, Nd->name, Nd->semester);
	}
}

void traverse(struct List ML, void (*print)(struct Node *))
{
struct Node *tmp;
tmp=ML.Head;
	while(tmp)
	{
		print(tmp);
		tmp=tmp->next;
	
	}
}
