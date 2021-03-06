#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "song_node.h"

void print_node(struct song_node *l_list){
  if(l_list){
    printf("%s: %s |", l_list->artist, l_list->name);
  }
  else{
    printf("Not found");
  }
}

void print_list(struct song_node * l_list){
  while(l_list){
    print_node(l_list);
    l_list = l_list -> next;
  }
  printf("\n");
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
    printf("Freeing artist: %s, song: %s\n", curr->artist, curr->name);
    free(curr);
    curr = nx;
  }

  return curr;

}

struct song_node * insert_node_alpha(struct song_node * l_list, char *_name, char *_artist){
  if(l_list == NULL || strcmp(_artist, l_list->artist) < 0 || (strcmp(_artist, l_list->artist) == 0 && strcmp(_name, l_list->name) < 0)){

    return insert_front(l_list, _name, _artist);
  }

  struct song_node *new = malloc(sizeof(struct song_node));
  strcpy(new->name, _name);
  strcpy(new->artist, _artist);


  struct song_node *curr = l_list->next;
  struct song_node *prev = l_list;

  while(curr && strcmp(_artist, curr->artist) > 0){
    prev = prev->next;
    new->next = curr;
    curr=curr->next;
  }

  while(curr && strcmp(_artist, curr->artist) == 0 && strcmp(_name, curr->name) > 0){
    prev = prev->next;
    new->next = curr;
    curr=curr->next;
  }

  prev->next = new;
  new->next = curr;
  return l_list;

}

struct song_node * searchSpecific(struct song_node *l_list, char *_name, char *_artist){
  struct song_node *temp = l_list;
  while(temp){
    if((strcmp(_name, temp->name) == 0) && (strcmp(_artist, temp->artist) == 0)){
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
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

int songcmp(struct song_node * one, struct song_node * two){
  return strcmp(one->artist, two->artist) + strcmp(one->name, two->name);
}

struct song_node * removeNode(struct song_node * l_list, char * _artist, char *_name){

  struct song_node *start = l_list;
  struct song_node *new;


  //printf("%s, %s, %s, %s", l_list->artist, _artist, l_list->name, _name);
  if(strcmp(l_list->artist, _artist) == 0 && (strcmp(l_list->name, _name) == 0)){
    new = l_list->next;
    free(l_list);
    //printf("SDSDS\n\n\n");
    return new;
  }

  while(l_list && (strcmp(l_list->artist, _artist) != 0 || (strcmp(l_list->name, _name) != 0))){
    new = l_list;
    l_list = l_list->next;
  }

  if(l_list){
    new->next = l_list->next;
    free(l_list);
  }
  else{
    return NULL;
  }
  return start;


}

struct song_node * selectRandomNode(struct song_node * start){

  int len = length(start);
  int rand_num = rand();
  rand_num = (rand_num % (len));
  while(rand_num){
    start = start->next;
    rand_num -= 1;
  }

  return start;
}

int length(struct song_node * start){
  int count = 0;
  while(start){
    count++;
    start=start->next;
  }
  return count;
}
