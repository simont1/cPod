struct song_node{ 
  char name[100];
  char artist[100];
  struct song_node *next;
};

void print_list(struct song_node * l_list);
struct song_node * insert_front(struct song_node * l_list, char *_name, char *_artist);
struct song_node * free_list(struct song_node * l_list);
struct song_node * insert_node_alpha(struct song_node * l_list, char *_name, char *_artist); //Returns a pointer to the start of the linked list
void print_node(struct song_node *l_list);
