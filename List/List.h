struct Node
{
	char id[30];
	char name[30];
	int semester;
	struct Node *next;
	struct Node *prev;
};

struct List
{
	struct Node *Head;
};

void init (struct List *);
struct Node *search_id (struct List , int , struct Node **);
struct Node *search_name (struct List , int , struct Node **);
int insert(struct List , struct Node);
int delete_node(struct List *, int);
void print(struct Node *);
void traverse(struct List , void (*print)(struct Node *));

