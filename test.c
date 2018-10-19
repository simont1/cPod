
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
  printf("======================================\n\n");
 

  printf("TESTING INSERT_FRONT & PRINT_LIST\n\n");
  printf("======================================\n\n");


  printf("TESTING INSERT_FRONT & PRINT_LIST\n\n");
  printf("======================================\n\n");

  /* /\* printf("LINKED LIST TESTS\n====================================\n\n"); *\/ */
  /* /\* printf("Testing print_list:\n"); *\/ */
  /* /\* print_list(p_test_1); *\/ */
  /* /\* printf("\n====================================\n\n"); *\/ */

  /* /\* /\\* printf("Testing print_node:\n"); *\\/ *\/ */
  /* /\* /\\* print_node(p_test_1); *\\/ *\/ */
  /* /\* /\\* printf("\n====================================\n\n"); *\\/ *\/ */



  /* /\* //printf("CLEARING Linked List\n"); *\/ */
  /* /\* //p_test_1 = free_list(p_test_1); *\/ */

  /* /\* /\\* print_list(p_test_1); *\\/ *\/ */
  /* /\* /\\* printf("%p\n", p_test_1); *\\/ *\/ */
  /* /\* struct song_node * result = searchSpecific(p_test_1, s_3, a_3); *\/ */
  /* /\* printf("Resulting memory location of search: %p\n", result); *\/ */
  /* /\* printf("Song: %s\n", result->name); *\/ */
  /* /\* printf("Artist: %s\n", result->artist); *\/ */

  /* /\* struct song_node * result2 = searchSpecific(p_test_1, "apple", "banana"); *\/ */
  /* /\* printf("%p\n", result2); *\/ */
  /* /\* /\\* printf("%s\n", result2->name); *\\/ *\/ */
  /* /\* /\\* printf("%s\n\n", result2->artist); *\\/ *\/ */

  /* /\* struct song_node * firstSong = searchFirst(p_test_1, a_2); *\/ */
  /* /\* printf("Resulting memory location of search: %p\n", firstSong); *\/ */
  /* /\* printf("Song: %s\n", firstSong->name); *\/ */
  /* /\* printf("Artist: %s\n", firstSong->artist); *\/ */


  /* char *s_100 = "jeremy"; */
  /* char *a_100 = "pearl jam"; */
  /* char *s_101 = "alive"; */
  /* char *a_101 = "pearl jam"; */
  /* char *s_102 = "sirens"; */
  /* char *a_102 = "pearl jam"; */
  /* char *s_103 = "still into you"; */
  /* char *a_103 = "paramore"; */
  /* char *s_104 = "hallelujah"; */
  /* char *a_104 = "pentatonix"; */
  /* printf("=================================\n"); */
  /* struct song_node * table[27]; */
  /* int i = 26; */
  /* addSong(s_1, a_1); */
  /* addSong(s_100, a_100); */
  /* addSong(s_101, a_101); */
  /* addSong(s_102, a_102); */
  /* addSong(s_103, a_103); */
  /* addSong(s_104, a_104); */
  /* print_library(); */
  /* printf("======================\n"); */
  /* addSong(s_2, a_2); */
  /* print_letter("p"); */
  /* printf("======================\n"); */
  /* removeSong(s_1, a_1); */
  /* print_library(); */
  /* printf("======================\n"); */
  /* printArtist(a_2); */
  /* struct song_node * pointing1 = finder("sirens", "pearl jam"); */
  /* struct song_node * pointing2 = finder("poopy", "pee"); */
  /* print_node(pointing1); */
  /* printf("\n"); */
  /* print_node(pointing2); */
  /* printf("\n"); */
  /* printf("======================\n"); */
  /* struct song_node * pointing3 = artistFinder("pentatonix"); */
  /* print_node(pointing3); */
  /* printf("\n"); */
  /* printf("======================\n"); */
  /* shuffle(); */
  /* printf("======================\n"); */
  /* clear_library(); */
  /* print_library(); */
  /* //table[0] = insert_node_alpha(0, NULL, NULL); */


  /* printf("\n"); */


  /* printf("\n"); */
  
  /* // int a1 = idLetter(a_1); */
  /* // int a2 = idLetter(a_2); */

  /* print_list(table[0]); */


  return 0;
}
