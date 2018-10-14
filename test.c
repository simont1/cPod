#include <stdio.h>
#include <stdlib.h>
#include "song_node.h"

int main(){

  char *s_1 = "no women no cry";
  char *a_1 = "bob marley";
  struct song_node * p_test_1 =  insert_front(0, s_1, a_1);

  char *s_2 = "blackbird";
  char *a_2 = "beetles";
  p_test_1 =  insert_node_alpha(p_test_1, s_2, a_2);
  
  char *s_21 = "dolly";
  char *a_21 = "beetles";
  p_test_1 =  insert_node_alpha(p_test_1, s_21, a_21);

  char *s_3 = "september";
  char *a_3 = "earth wind fire";
  p_test_1 =  insert_node_alpha(p_test_1, s_3, a_3);

  char *s_4 = "africa";
  char *a_4 = "toto";
  p_test_1 =  insert_node_alpha(p_test_1, s_4, a_4);

  char *s_5 = "crys from CS kids";
  char *a_5 = "debugging";  
  p_test_1 = insert_node_alpha(p_test_1, s_5, a_5);


  printf("LINKED LIST TESTS\n====================================\n\n");
  printf("Testing print_list:\n");
  print_list(p_test_1);
  printf("\n====================================\n\n");

  printf("Testing print_node:\n");
  print_node(p_test_1);
  printf("\n====================================\n\n");


  
  //printf("CLEARING Linked List\n");
  //p_test_1 = free_list(p_test_1);

  print_list(p_test_1);
  printf("%p\n", p_test_1);
  
  return 0;
}
