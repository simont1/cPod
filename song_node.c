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

  struct song_node *new =  malloc(sizeof(struct song_node));
  strcpy(new->name, _name);
  strcpy(new->artist, _artist);
  struct song_node *curr = l_list;
  struct song_node *prev = l_list;

  while(curr && strcmp(_artist, curr->artist) > 0){
    prev = curr;
    curr = curr->next;

  }

  while(curr && strcmp(_artist, curr->artist) == 0 && strcmp(_name, curr->name) > 0){
    prev = curr;
    curr=curr->next;
  }

  if(curr == NULL){
    prev->next = new;
    new->next = NULL;
  }
  else{
    prev->next = new;
    new->next = curr;
  }

  if(new->next == l_list){
    return new;
  }
  else{
    return l_list;
  }

}

struct song_node * searchSpecific(struct song_node *l_list, char *_name, char *_artist){
  struct song_node *temp = l_list;
  struct song_node *notFound;
  notFound = insert_front(notFound, "N/A", "N/A");
  while(temp){
    if((strcmp(_name, temp->name) == 0) && (strcmp(_artist, temp->artist) == 0)){
      return temp;
    }
    temp = temp->next;
  }
  return notFound;
}

struct song_node * searchFirst(struct song_node *l_list, char *_artist){
  struct song_node *temp = l_list;
  while(temp){
    if(strcmp(_artist, temp->artist) == 0){
      return temp;
    }
    temp = temp->next;
  }
  return temp;
}
