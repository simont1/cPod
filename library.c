#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include "song_node.h"

struct song_node * table[27];
int numSongs = 0;

void addSong(char *_song, char *_artist){
  int x = idLetter(_artist);
  table[x] = insert_node_alpha(table[x], _song, _artist);
  numSongs +=1;
}


void removeSong(char *_song, char *_artist){
  int x = idLetter(_artist);
  table[x] = removeNode(table[x], _artist, _song);
  numSongs -=1;
}

int idLetter(char *_artist){
  char start = _artist[0];
  int pos = start - 97;

  if(!(pos >= 0 && pos < 26)){
    pos=26;
  }
  return pos;
}

struct song_node * finder(char *_song, char*_artist){
  int x = idLetter(_artist);
  struct song_node * temp = table[x];
  while(temp){
    if ((strcmp(_artist, temp-> artist)==0) && (strcmp(_song, temp->name) == 0) ){
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}

struct song_node * artistFinder(char *_artist){
  int x = idLetter(_artist);
  struct song_node * temp = table[x];
  while(temp){
    if(strcmp(_artist, temp->artist)==0){
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}


void print_letter(char *s){
  int x = idLetter(s);
  print_list(table[x]);
}

void printArtist(char *_artist){
  int x = idLetter(_artist);
  struct song_node * temp = table[x];
  while(temp){
    if(strcmp(_artist, temp->artist) == 0){
      print_node(temp);
    }
    temp = temp->next;
  }
  printf("\n");
}

void shuffle(){
  int lenShuffle = 5;
  while(lenShuffle){
    int pickSong = rand() % numSongs;
    for(int i = 0; i < 27; i++){
      struct song_node * temp = table[i];
      while(temp){
        if(pickSong == 0){
          printf("Song %d: ", 5 - lenShuffle);
          print_node(temp);
        }
        pickSong -= 1;
        temp = temp->next;
      }
    }
    lenShuffle = lenShuffle - 1;
  }
  printf("\n");
}

void clear_library(){
  for(int i = 0; i < 27; i++){

    table[i] = free_list(table[i]);
  }
}

void print_library(){
  for (int i = 0; i < 27; i++){
    if(table[i]){
      printf("%c list: \n\t", table[i]->artist[0]);
      print_list(table[i]);
    }
    // else{
    //   printf("No songs found for Artist Names starting with %c\n", i+'a');
    // }
  }
}
