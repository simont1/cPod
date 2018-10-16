#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "song_node.h"
int main(){
  srand(time(NULL));

  char *s_1 = "pink floyd";
  char *a_1 = "time";
  struct song_node * p_test_1 =  insert_front(0, s_1, a_1);
  
  char *s_2 = "even flow";
  char *a_2 = "pearl jam";
  p_test_1 =  insert_front(p_test_1, s_2, a_2);

  
  char *s_21 = "dolly";
  char *a_21 = "beetles";
  p_test_1 =  insert_front(p_test_1, s_21, a_21);

  char *s_3 = "september";
  char *a_3 = "earth wind fire";
  p_test_1 =  insert_front(p_test_1, s_3, a_3);

  char *s_4 = "africa";
  char *a_4 = "toto";
  p_test_1 =  insert_front(p_test_1, s_4, a_4);

  /* char *s_5 = "crys from CS kids"; */
  /* char *a_5 = "debugging"; */
  /* p_test_1 = insert_front(p_test_1, s_5, a_5); */
  print_list(p_test_1);
  printf("\n\n");
  removeNode(p_test_1, s_2, a_2);
  printf("\n\n");

  print_list(p_test_1);

  /* printf("LINKED LIST TESTS\n====================================\n\n"); */
  /* printf("Testing print_list:\n"); */
  /* print_list(p_test_1); */
  /* printf("\n====================================\n\n"); */

  /* /\* printf("Testing print_node:\n"); *\/ */
  /* /\* print_node(p_test_1); *\/ */
  /* /\* printf("\n====================================\n\n"); *\/ */



  /* //printf("CLEARING Linked List\n"); */
  /* //p_test_1 = free_list(p_test_1); */

  /* /\* print_list(p_test_1); *\/ */
  /* /\* printf("%p\n", p_test_1); *\/ */
  /* struct song_node * result = searchSpecific(p_test_1, s_3, a_3); */
  /* printf("Resulting memory location of search: %p\n", result); */
  /* printf("Song: %s\n", result->name); */
  /* printf("Artist: %s\n", result->artist); */

  /* struct song_node * result2 = searchSpecific(p_test_1, "apple", "banana"); */
  /* printf("%p\n", result2); */
  /* /\* printf("%s\n", result2->name); *\/ */
  /* /\* printf("%s\n\n", result2->artist); *\/ */

  /* struct song_node * firstSong = searchFirst(p_test_1, a_2); */
  /* printf("Resulting memory location of search: %p\n", firstSong); */
  /* printf("Song: %s\n", firstSong->name); */
  /* printf("Artist: %s\n", firstSong->artist); */



  return 0;
}
