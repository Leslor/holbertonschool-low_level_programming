# _Singly linked lists _facing_up:


Singly linked list is the most common linked list among the others.
The singly linked list can be traversed only in one direction. 
It is a collection of ordered sets of elements. 
In singly linked list, Each node has a data and a pointer to the next node.

## Structure:

/**
   * struct list_s - singly linked list
   * @str: string - (malloc'ed string)
   * @len: length of the string
   * @next: points to the next node
   *
   * Description: singly linked list node structure
   */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

## Authors :black_nib:

* Leslie Paz <[LesLor](https://github.com/LesLor)>

