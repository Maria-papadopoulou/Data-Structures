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
	 	printf("�����");
	 	printf("*************\n");
        printf("1.�������� �������\n");
        printf("2.�������� �������\n");
        printf("3.��������� ������� �� ���� �� ��\n");
        printf("4.��������� ������� �� ���� �� �������������\n");
        printf("5.����������� ��������� ������� ��� ��\n");
        printf("6.���������� ������ �������� ��� ��������� �� ������������ �������\n");
        printf("7.�������� ��������\n");
        printf("8.������ �����\n");
        printf("�������� ��������: \n");
        scanf("%d",&ch);
        switch (ch) 
		{ 
            case 1: printf("�������� �������:");
            			scanf("%d", &elem);
//            		insert(&MyList, &NN);
					break;
           case 2: 
		   printf("���� �������:");
            		scanf("%s",toFind);
            		if ( search_name(MyList,toFind,prev) && search_id(MyList,toFind,prev))
            		{
            		delete_node(MyList,item);
            			printf("����������!\n");
            			
					}
					else
						printf("��� �������\n");
					
					break;
            case 3: printf("���� ��:");
            		scanf("%s",toFind);
            		if ( search_id(MyList,item, prev) )
            			printf("%s \n",tmp->am);
					else
						printf("��� ������� �������� �� ���� �� ��!\n");
					break;
			case 4: 
					printf("���� �����:");
            		scanf("%s",toFind);
            		if ( search_name(MyList,item, prev) )
            			printf("%s \n",tmp->name);
					else
						printf("��� ������� �������� �� ���� �� �������������!\n");
					break;
					
					else
					{
						printf("%s %s %d \n",tmp->am, tmp->name, tmp->semester);
							
						if ( search_id(MyList,item, prev)==1 )
						{
							printf("�� �� �������!\n");
						
						}
						
					}
							
					break;
			case 7: 
					printf("�������� ��������\n");
						print(Node);
							break;
            case 8: printf("������!\n");
                    break;
            default:printf("���������� ����.\n");
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
