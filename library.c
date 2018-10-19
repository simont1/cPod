#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include "song_node.h"


struct song_node ** addSong(struct song_node **_table, char * _artist, char *_name){
  char start = _artist[0];
  int pos = start - 97;

  if(!(pos >= 0 && pos < 26)){
    pos=26;
  }
  _table[pos] =  insert_node_alpha(_table[pos], _name, _artist);
  
  return NULL;
}

int idLetter(char *_artist){
  return strcmp(_artist, "a");
}


void findArtist(struct song_node **_table, char * _artist){
  char start = _artist[0];
  int pos = start - 97;

  if(!(pos >= 0 && pos < 26)){
    pos=26;
  }
  struct song_node * art = searchFirst(_table[pos], _artist);

  if(art){
    printf("Artist [%s] Found!\n", _artist);
    while (art && strcmp(art->artist,_artist)==0){
      print_node(art);
      art = art->next;
    }
    return;
  }

  printf("Artist Not Found!\n");
}

struct song_node * findSong(struct song_node **_table, char * _artist, char *_name){
  char start = _artist[0];
  int pos = start - 97;

  if(!(pos >= 0 && pos < 26)){
    pos=26;
  }
  struct song_node * song = searchSpecific(_table[pos], _name, _artist);

  if(song){
    return song;
  }
  printf("Song not found");
  return song;
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
