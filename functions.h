struct node {int number; struct node *next;};

void print_list(struct node *start);
struct node * insert_front(struct node *oldFirst, int val);
struct node * free_list(struct node * start);
struct node * remove_node(struct node *front, int data);
