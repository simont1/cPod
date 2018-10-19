#ifndef LIBRARY_H
#define LIBRARY_H


struct song_node *table[27];
void addSong(char *_song, char *_artist);
int idLetter(char *_artist);
void print_library();
void removeSong(char *_song, char *_artist);
void print_letter(char *s);
void printArtist(char *_artist);
struct song_node * finder(char *_song, char*_artist);
struct song_node * artistFinder(char *_artist);
void shuffle();
void clear_library();
#endif
