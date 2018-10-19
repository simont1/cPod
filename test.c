
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "song_node.h"
#include "library.h"

int main(){
  srand(time(NULL));

  printf("LINKED LIST TESTS\n");
  printf("======================================\n\n");

  printf("TESTING insert_front & print_list\n\n");
  char *s_1 = "time";
  char *a_1 = "pink floyd";
  printf("INSERTING artist: %s, song: %s\n", a_1, s_1);
  struct song_node * p_test_1 =  insert_front(0, s_1, a_1);
  print_list(p_test_1);
  printf("\n");

  char *s_2 = "even flow";
  char *a_2 = "pearl jam";
  printf("INSERTING artist: %s, song: %s\n", a_2, s_2);
  p_test_1 =  insert_front(p_test_1, s_2, a_2);
  print_list(p_test_1);
  printf("\n");

  char *s_21 = "dolly";
  char *a_21 = "beetles";
  printf("INSERTING artist: %s, song: %s\n", a_21, s_21);
  p_test_1 =  insert_front(p_test_1, s_21, a_21);
  print_list(p_test_1);
  printf("\n");
  printf("======================================\n\n");




  
  printf("TESTING free_list\n\n");
  
  p_test_1 = free_list(p_test_1);
  printf("List after freeing:\n");
  print_list(p_test_1);
  
  printf("======================================\n\n");




  
  printf("TESTING insert_node_alpha\n\n");

  printf("INSERTING artist: %s, song: %s\n", a_1, s_1);
  p_test_1 =  insert_node_alpha(0, s_1, a_1);
  print_list(p_test_1);
  printf("\n");

  printf("INSERTING artist: %s, song: %s\n", a_2, s_2);
  p_test_1 =  insert_node_alpha(p_test_1, s_2, a_2);
  print_list(p_test_1);
  printf("\n");

  printf("INSERTING artist: %s, song: %s\n", a_21, s_21);
  p_test_1 =  insert_node_alpha(p_test_1, s_21, a_21);
  print_list(p_test_1);
  printf("\n");

  char *s_3 = "september";
  char *a_3 = "testearth wind fire";
  printf("INSERTING artist: %s, song: %s\n", a_3, s_3);
  p_test_1 = insert_node_alpha(p_test_1, s_3, a_3);
  print_list(p_test_1);
  printf("\n");
  
  printf("======================================\n\n");




  printf("TESTING searchSpecific\n\n");
  printf("SEARCHING FOR artist: %s, song: %s\n", a_3, s_3);
  struct song_node *found = searchSpecific(p_test_1, s_3, a_3);
  if(found){
    printf("Found: ");
    print_node(found);
  }
  else{
    printf("Song not found!");
  }
  printf("\n\n");

  char *s_5 = "crys from CS kids";
  char *a_5 = "debugging";
  printf("SEARCHING FOR artist: %s, song: %s\n", a_5, s_5);

  found = searchSpecific(p_test_1, s_5, a_5);
  if(found){
    printf("Found: ");
    print_node(found);
  }
  else{
    printf("Song not found!");
  }
  printf("\n\n");
  printf("======================================\n\n");

  printf("TESTING searchFirst\n\n");
  printf("SEARCHING FOR artist: %s", a_3);
  found = searchFirst(p_test_1, a_3);
  printf("\n");
  if(found){
    printf("Found: ");
    print_node(found);
  }
  else{
    printf("Song not found!");
  }
  printf("\n\n");

  printf("SEARCHING FOR artist: %s", a_5);

  found = searchFirst(p_test_1, a_5);
  printf("\n");
  if(found){
    printf("Found: ");
    print_node(found);
  }
  else{
    printf("Song not found!");
  }
  printf("\n\n");
  printf("======================================\n\n");


  printf("TESTING selectRandomNode\n\n");
  found = selectRandomNode(p_test_1);
  printf("Random node: ");
  print_node(found);
  printf("\n");
  found = selectRandomNode(p_test_1);
  printf("Random node: ");
  print_node(found);
  printf("\n");
  found = selectRandomNode(p_test_1);
  printf("Random node: ");
  print_node(found);
  printf("\n");
  
  printf("======================================\n\n");

  printf("TESTING removeNode\n\n");
  printf("REMOVING artist: %s, song: %s\n", a_5, s_5);
  found = removeNode(p_test_1, a_5, s_5);
  if(found){
    printf("New List: ");
    print_list(p_test_1);
  }
  else{
    printf("Song not found!");
  }
  printf("\n");
  printf("REMOVING artist: %s, song: %s\n", a_1, s_1);
  found = removeNode(p_test_1, a_1, s_1);
  if(found){
    printf("New List:\n");
    print_list(p_test_1);
  }
  else{
    printf("Song not found!");
  }

  printf("REMOVING artist: %s, song: %s\n", a_21, s_21);
  found = removeNode(p_test_1, a_21, s_21);
  if(found){
    printf("New List:\n");
    print_list(found);
  }
  else{
    printf("Song not found!");
  }

  printf("REMOVING artist: %s, song: %s\n", a_3, s_3);
  found = removeNode(found, a_3, s_3);
  if(found){
    printf("New List:\n");
    print_list(found);
  }
  else{
    printf("Song not found!");
  }
  
  printf("\n");
  printf("======================================\n");
 
  printf("MUSIC LIBRARY TESTS\n");
  printf("======================================\n\n");
  
  printf("TESTING addSong & print_library\n\n");
  printf("======================================\n\n");

  printf("adding artist: %s, song: %s", a_1, s_1);
  addSong(s_1, a_1);
  printf("\nCurrent Library:\n");
  print_library();
  printf("\n");
  printf("adding artist: %s, song: %s", a_2, s_2);
  addSong(s_2, a_2);
  printf("\nCurrent Library:\n");
  print_library();
  printf("\n");
  printf("adding artist: %s, song: %s", a_21, s_21);
  addSong(s_21, a_21);
  printf("\nCurrent Library:\n");
  print_library();
  printf("\n");
  
  printf("adding artist: %s, song: %s", a_5, s_5);
  addSong(s_5, a_5);
  printf("\nCurrent Library:\n");
  print_library();
  printf("\n");

  char *s_6 = "bobby";
  char *a_6 = "pearl jam";
  printf("adding artist: %s, song: %s", a_6, s_6);
  addSong(s_6, a_6);
  printf("\nCurrent Library:\n");
  print_library();
  printf("\n");

  char *s_8 = "sammy";
  char *a_8 = "pearl jam";
  printf("adding artist: %s, song: %s", a_8, s_8);
  addSong(s_8, a_8);
  printf("\nCurrent Library:\n");
  print_library();
  printf("\n");

  char *s_7 = "parrker";
  char *a_7 = "pink floyd";
  printf("adding artist: %s, song: %s", a_7, s_7);
  addSong(s_7, a_7);
  printf("\nCurrent Library:\n");
  print_library();
  printf("\n");
  
  printf("TESTING print_letter\n\n");
  char *b = "b";
  printf("Printing songs of letter: %c\n", *b);
  print_letter(b);
  printf("\n");
  char *d = "d";
  printf("Printing songs of letter: %c\n", *d);
  print_letter(d);
  printf("\n");    
  char *p = "p";
  printf("Printing songs of letter: %c\n", *p);
  print_letter(p);
  printf("\n");
  
  printf("======================================\n\n");
  
  printf("TESTING finder\n\n");
  printf("Looking for artist: %s, song: %s\n", a_1, s_1);
  found = finder(s_1, a_1);
  if(found){
    printf("Song found!\n");
    print_node(found);
  }
  else{
    printf("Song not found!\n");
  }

  char *n_1 = "potato";
  char *n_2 = "doughnut";
  printf("\n\nLooking for artist: %s, song: %s\n", n_1, n_2);
  found = finder(n_1, n_2);
  if(found){
    printf("Song found!\n");
    print_node(found);
  }
  else{
    printf("Song not found!\n");
  }


  printf("\n");
  printf("TESTING artistFinder & printArtist \n\n");

  printf("\nLooking for artist: %s", a_7);
  found = artistFinder(a_7);
  printf("\n");
  if(found){
    printf("Artist found!\n");
    printArtist(a_7);
  }
  else{
    printf("Song not found!\n");
  }

  printf("\nLooking for artist: %s", a_6);
  found = artistFinder(a_6);
  printf("\n");
  if(found){
    printf("Artist found!\n");
    printArtist(a_6);
  }
  else{
    printf("Song not found!\n");
  }
  
  printf("\nLooking for artist: %s", n_1);
  found = artistFinder(n_1);
  printf("\n");
  if(found){
    printf("Artist found!\n");
    printArtist(n_1);
  }
  else{
    printf("Song not found!\n");
  }


  printf("\n");  
  printf("======================================\n\n");
  
  printf("TESTING shuffle\n\n");

  printf("Shuffle 1\n");
  shuffle();
  printf("\n");

  printf("Shuffle 2\n");
  shuffle();
  printf("\n");

  printf("Shuffle 3\n");
  shuffle();
  printf("\n");

  printf("======================================\n\n");

  printf("TESTING removeSong\n\n");

  printf("Original: \n");
  print_library();
  printf("\n");
  
  printf("REMOVING artist: %s, song: %s\n", a_5, s_5);
  removeSong(s_5, a_5);
  print_library();
  printf("\n");

 

  printf("REMOVING artist: %s, song: %s\n", a_21, s_21);
  removeSong(s_21, a_21);
  print_library();
  printf("\n");


  printf("======================================\n\n");
  printf("TESTING clear_library\n\n");
  printf("Library Before Clear:\n");
  print_library();
  printf("\n");
  clear_library();
  printf("Library After Clear:\n");
  print_library(); 
  printf("======================================\n\n");

  return 0;
}
