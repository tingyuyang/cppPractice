//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>

using namespace std;

struct node
{
    int data;
    node * next;
};

/* *****************YOUR TURN! ******************************** */
/* WRITE THESE FUNCTIONS...either recursively or iteratively */

bool find(node * head, int match);
void remove_all(node * & head);
void display_every_other(node * head);

/* These functions are already written and can be called to test out your code */
void build(node * & head);      //supplied
void display_all(node * head);  //supplied
void destroy(node * &head);     //supplied
