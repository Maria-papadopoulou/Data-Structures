struct STACK
{
int *pin;
int head;
int Size;
};



void init (struct STACK*,int);
int push (struct STACK*,int);
int pop (struct STACK*,int*);
int copy (struct STACK*, struct STACK*, int, int  );
int transfer(struct STACK*, struct STACK*);
void print(struct STACK *, int);
