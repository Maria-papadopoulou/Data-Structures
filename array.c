#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void input(int *, int);
int mymenu(int *, int * ,int,  int );
int *matrix(int);
void Linear_Search_function(int *, int );
void Selection_Sort_function(int *, int * , int);
void Store_Matrix(int *, int *, int );
void Merge_sort_function(int *,int );
int *Merge_Sort (int *, int *, int  );
void Selection_Sort (int *, int );
int Linear_Search(int *, int , int );
void Binary_Search_function(int *, int );
int Binary_Search(int *, int , int );
int search ();
void outputFun (int , int );
void PrintMatrix(int *, int );
void Print_MatA_MatB(int *, int *, int );
void writefile (int *, int );
void ReadFile (int *, int *, int );


int main(int argc, char **argv)
{
	
         
         int n;
        int *matA;
         int *matB;
         int *matTMP;
         int flag=0;
         
        
  do
	{
		printf("Εισάγετε το μέγεθος του πίνακα \n");
        scanf("%d", &n);
        printf("\n");
     }
     while (n<=0);
     	matA=matrix(n);
	 	matB=matrix(n);
		matTMP=matrix(n);
     input(matA,n);  
     PrintMatrix(matA, n);
	 mymenu(matA, matB, n, flag);
     printf("....ΕΞΟΔΟΣ\n");
	 free(matTMP);
	free(matA);
    free(matB);
}

int mymenu(int *matA, int *matB, int n, int flag)
{
int choice;

do
{
    printf("\n\n");
        printf("Μενού Επιλογών: \n");
       	printf ("1.Σειριακή αναζήτηση στοιχείου στον μη ταξινομημένο πίνακα\n");
		printf ("2.Ταξινόμηση αντίγραφου πίνακα\n");
		printf ("3.Δυαδική αναζήτηση στοιχείου στον ταξινομημένο πίνακα \n");
		printf ("4.Εκτύπωση περιεχομένων πινάκων \n");
		printf ("5.Αποθήκευση πίνακα σε αρχείο \n");
		printf("6.Συγχώνευση πινάκων\n");
		printf ("7.Φόρτωση πίνακα από αρχείο \n");
		printf ("8.Έξοδος \n");
		printf("\n\n");
		printf ("Εισάγετε την επιλογή που θέλετε: ");
         scanf("%d", &choice);
		 if(choice==5)
		 {
			 flag=flag+1;

		 }

         switch(choice)
         {
         case 1:Linear_Search_function(matA, n); break;
         case 2:Selection_Sort_function(matB,matA, n); break;
         case 3:Binary_Search_function(matB, n); break;
         case 4:Print_MatA_MatB(matA, matB, n); break;
         case 5:writefile (matA, n); break;
		 case 6:Merge_sort_function(matB,n); break;
		 case 7:if(flag!=0)
				 {
					 ReadFile(matA, matB, flag);
				 }
					else
					{
						printf("Πρέπει να γίνει πρώτα αποθήκευση. Το αρχείο είναι κενό\n");
				 }
		 
         }
 }
 while(choice!=8);
}

void PrintMatrix(int *matA,int n)
{
    int i;
    
    for(i=0; i<n; i++)
    {
        printf(" | %d |", *(matA+i));
		
       
    }
     printf("\n");
}
int Linear_Search(int *matA, int n, int search)
{
int i,found, pos;

 
        pos=-1;
        found=1;
        
             for(i=0; (i<n) && (found==1); i++)
          {
                    if (*(matA+i)==search)
           {
                  pos=i;
                  found=0;
           }
          }            

return pos;
}
 void Linear_Search_function (int *matA, int n)
{
	int a;
	int position;
	
	position = -1;
	a = search();
	
	if (a >= 30 && a <= 50)
    {
	position = Linear_Search(matA, n, a);
	outputFun (position, a);
}
}
void outputFun (int position, int n)
{
	if (position == -1)
		printf ("Κατά την αναζήτηση δεν βρέθηκε ο αριθμός %d\n", n);
		
	else
		 printf ("Ο αριθμός %d που ψάχνετε, βρέθηκε στην θέση %d\n", n, position);	 
}
int search ()
{
	int num;
	printf("Ποιο στοιχείο του πίνακα θέλετε να βρείτε;\n");
    scanf("%d", &num); 
    printf("\n");
       return num;
}

void input(int *matA, int n)
{
    srand(time(NULL));
	int i;
	for(i=0; i<n; i++)
	{
	*(matA+i)=rand()%(21)+30; 	
	}

}

int *matrix (int n)
{
	int i;
	int *m;
	m = (int *) malloc (n* sizeof (int));
	if (m == NULL)
	{
		printf ("Δεν υπάρχει διαθέσιμη μνήμη \n");
		exit (EXIT_FAILURE);
	}
	return m;
}
void Store_Matrix(int *matB, int *matA, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		*(matB+i)=*(matA+i);
	}
	

}

void Selection_Sort_function(int *matB, int *matA, int n)
{

 int i;
Store_Matrix(matB, matA, n);
Selection_Sort (matB, n);

for(i=0; i<n;i++)
       {
       
       	printf(" | %d | ", *(matB+i));
	   }
 }

void Selection_Sort (int *matB, int n)
{

	int i, j;
	int tmp;

	for (i = 0; i < n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (*(matB+i) > *(matB+j))
			{
				tmp = *(matB+i);
				*(matB+i) = *(matB+j);
				*(matB+j) = tmp;
			}
		}
	}
	
}
void Binary_Search_function(int *matB, int n)
{
	int position, src;
	
	position = -1;
	src = search();
	
	if (src >= 30 && src <= 50)
    {
	position = Binary_Search(matB, n, src);
	outputFun (position, src);
	
	}
}

int Binary_Search(int *matB, int n, int src)
{
int i, start, end, middle, pos;
start=0;
end=n-1;


    while(start<=end)
    {
		middle=(start+end)/2;
   			 if(src > *(matB+middle))
  		  {
       		  start=middle+1;
   		  }
   		  else if (src < *(matB+middle))
    	 {
   			  end=middle-1;
   		
   		  }
			 else 
			 {
			 	return middle;
			 }
	}
	return -1;
  }
  void Print_MatA_MatB(int *matA, int *matB, int n)
  {
	 	 printf("Περιεχόμενα του Μη Ταξινομημένου πίνακα: \n");
		 PrintMatrix(matA, n);

	   	 printf("Περιεχόμενα του Ταξινομημένου πίνακα: \n");
	  	 Selection_Sort_function(matB, matA, n);

		

  }
  void Merge_sort_function(int *matB, int n)
  {
	  int *matTMP;
	  int i;
	  int *matC;
	  matTMP=matrix(n);
	  input(matTMP, n);
	  Selection_Sort(matTMP, n-1);
	  matC=Merge_Sort(matB, matTMP, n);
	  PrintMatrix(matC, n+n);
	  free(matC);
	  free(matTMP);
  }
       
int *Merge_Sort (int *matB, int *matTMP, int n )
{
	int i,j,k, x;
	int *matC;
	i=0;
	j=0;
	k=0;
	matC=matrix(n+n);
	while (i < n && j < n)
	{
		if (*(matB + i) <= *(matTMP + j))
		{
			*(matC + k) = *(matB + i);
			i = i + 1;
		}
		else
		{
			*(matC + k) = *(matTMP + j);
			j = j + 1;
		}
		k = k + 1;
	}
	
	if (i >= n)
	{
		for (x = j; x < n; x++)
		{
			*(matC + k) = *(matTMP + x);
			k = k + 1; 
		}
	}
	else
	{
		for (x = i; x < n; x++)
		{
			*(matC + k) = *(matB + x);
			k = k + 1;
		}
	}
	return matC;
}


void writefile (int *matA, int n)
{
	FILE *fp;
	char *str;
	
	str = (char *) malloc (20 * sizeof(char));
	printf ("Εισάγετε όνομα αρχείου: ");
	scanf ("%s", str);
	printf ("\n");
	fp = fopen (str, "w + b");
	if (fp == NULL)
	{
		printf ("Το αρχείο είναι κενό\n");
		exit(EXIT_FAILURE);
	}
	fwrite (matA, sizeof(int), n, fp);
	fclose (fp);
	free (str);
}

void ReadFile (int *matA, int *matB, int flag)
{
	FILE *fp;
	char *str;
	int size;
	int bytes;
	int n;
	
	str = (char *) malloc (20 * sizeof(char));
	printf ("Εισάγετε όνομα αρχείου: ");
	scanf ("%s", str);
	printf ("\n");
	fp = fopen (str, "rb");
	if (fp == NULL)
	{
		printf ("Το αρχείο είναι κενό\n");
		exit(EXIT_FAILURE);
	}
	
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	rewind (fp);
    bytes = sizeof (int);
	n = size / bytes;

	matA = matrix (n);
	fread (matA, sizeof(int), n, fp);
	matB = matrix (n);
	Store_Matrix(matA, matB, n);
	Selection_Sort (matB, n);
	mymenu(matA, matB, n, flag);
	free (matA);
	free (matB);
	free (str);	
}
