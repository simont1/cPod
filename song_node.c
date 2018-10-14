#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "song_node.h"

void print_node(struct song_node *l_list){
  printf("%s: %s |", l_list->artist, l_list->name);
}

void print_list(struct song_node * l_list){
  while(l_list){
    print_node(l_list);
    l_list = l_list -> next;
  }
}

struct song_node * insert_front(struct song_node * l_list, char *_name, char *_artist){
  struct song_node *new =  malloc(sizeof(struct song_node));
  strcpy(new->name, _name);
  strcpy(new->artist, _artist);
  new->next = l_list;
  return new;
  
}

struct song_node * free_list(struct song_node * l_list){
  struct song_node *curr = l_list;

  while (curr){
    struct song_node *nx= curr->next;
    free(curr);
    curr = nx; 
  }
  
  return curr;
  
}

struct song_node * insert_node_alpha(struct song_node * l_list, char *_name, char *_artist){
  
  if(strcmp(_artist, l_list->artist) < 0 && strcmp(_name, l_list->name) < 0){
    printf("RRUN");
    return insert_front(l_list, _name, _artist);
  }

  
  struct song_node *new =  malloc(sizeof(struct song_node));
  strcpy(new->name, _name);
  strcpy(new->artist, _artist);
  struct song_node *curr = l_list;
  
  while(curr->next && strcmp(_artist, curr->artist) > 0){
    curr = curr->next;
  }

  while(curr->next && strcmp(_artist, curr->artist) == 0 && strcmp(_name, curr->name) > 0){
    curr=curr->next;
  }

  if(curr->next == NULL){
    curr->next = new;
  }
  else{
    new->next = curr;
  }

    return l_list;
  
}
