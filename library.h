#ifndef LIBRARY_H
#define FOO_H

//void print_library(struct song_node **lib);
struct song_node * addSong(struct song_node * lib, struct song_node *insertee);
int idLetter(char *_artist);
void print_library(struct song_node **lib);
#endif
