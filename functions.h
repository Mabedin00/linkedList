struct node {int number; struct node *next;};

void print_list(struct node *start);
struct node * insert_front(struct node *, int);
struct node * free_list(struct node *);
