#ifndef LIBRARY_H
#define LIBRARY_H

//void print_library(struct song_node **lib);
struct song_node ** addSong(struct song_node ** _table, char * _artist, char *_name);
void findArtist(struct song_node **_table, char * _artist);
struct song_node * findSong(struct song_node **_table, char * _artist, char *_name);
int idLetter(char *_artist);
void print_library(struct song_node **lib);
#endif
