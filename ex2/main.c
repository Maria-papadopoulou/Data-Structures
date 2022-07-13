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
	printf("....������\n");
	return 0;
}

int menu(struct STACK *Stack_1, struct STACK *Stack_2,  int stack_size)
{
	int i, tmp;
	int choice, Elem, a, b;
	while(choice!=6)
	{
		printf("����� ��������.\n");
		printf("1.����������(Push) ��������� ��� 1� ������.\n");
		printf("2.������� (Pop) ��������� ��� �� 1� ������\n");
		printf("3.�������� ��������� ��� �� 1� ������ ��� 2� ������.\n");
		printf("4.������� (Pop) ��������� ��� �� 2� ������\n");
		printf("5.��������� ��������� ��� 1� ������.\n");
		printf("6. ������.\n");
		printf("\n");
		printf("�������� ��� ������� ��� ������:\n");
		scanf("%d", &choice);	

	switch(choice)
	{

		case 1: printf("�������� ��������� ��� ������ �� ���� ��� ������.\n");
				scanf("%d", &Elem);
			
		push(Stack_1, Elem);break;
		
		case 2:
			
		 a=pop(Stack_1, &Elem);
		if(a==0) 
		{
		
			printf("H ������ ����� �����.\n");
			printf("\n");
		}
		else
		{
	
			printf("To �������� %d ���� ��������� ��� �� ������.\n", Elem);
			printf("\n");
		}
		
		break;
		case 3: transfer(Stack_1, Stack_2);
				print(Stack_1,stack_size );
				printf("\n");
				print(Stack_2, stack_size);
					printf("����� ���������� �� �������� ��� 1�� ������� ��� 2�\n");
			break;
		case 4: 
		printf("�������� ��������� ��� ������ �� ���� ��� �� 2� ������\n");
				scanf("%d", &Elem);
				printf("\n");
	
	b=pop(Stack_2, &Elem); 
	if(b==0) 
		{
		
			printf("H ������ ����� �����.\n");
			printf("\n");
		}
		else
		{
	
			printf("To �������� %d ���� ��������� ��� �� ������.\n", Elem);
			printf("\n");
		}
		
		break;
		case 5: copy(Stack_1, Stack_2,Elem, stack_size);
				
			
		
		 break;
	}
}
	
}
