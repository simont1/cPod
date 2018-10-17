#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include "song_node.h"


struct song_node * addSong(struct song_node * lib, struct song_node *insertee){
  struct song_node * temp = lib;
  // int x = idLetter(insertee->artist);
  // char *s = "a" + x; THIS DOESNT WORK HARD CODE THIS BY INITING ALL 27 LISTS
  // temp = insert_front(temp, s, s);
  while(insertee){
    temp = insert_node_alpha(temp, insertee->name, insertee->artist);
    insertee = insertee->next;
  }
  return temp;
}

int idLetter(char *_artist){
  return strcmp(_artist, "a");
}



/*void print_library(struct song_node **lib){
  for (int i = 0; i < 27; i++){
    print_list(lib[i]);
  }
}*/
