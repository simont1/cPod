#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include "song_node.h"


struct song_node * addSong(struct song_node **_table, char * _artist, char *_name){
  char start = _artist[0];
  int pos = start - 97;

  return insert_node_alpha(_table[pos], _artist, _name);
}

int idLetter(char *_artist){
  return strcmp(_artist, "a");
}



void print_library(struct song_node **lib){
  for (int i = 0; i < 27; i++){
    if(lib[i]){
      print_list(lib[i]);
    }
    else{
      printf("No songs found for Artist Names starting with %c", i+'0');
    }
  }
}
