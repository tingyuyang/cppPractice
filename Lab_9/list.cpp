#include "list.h"


//These are the functions to implement for this lab
//Notice that they are not in a class this time!
//This means we need to pass in head as an argument
//since there is no "data member" shared


//Check to see if the desired item is in the list
//Return true if it is found
bool find(node * head, int match) 
{
    //Step 2 - Place your code here
    if (head == NULL)
    {
        return false;
    }
    
    node * current=head;
    while (current)
    {
        if (current->data == match)
        {
            return true;
        }
       
        current = current -> next;
    }
    return false;
}

//Remove all nodes in the list
void remove_all(node * & head) 
{
      //Step 3 - Place your code here
      if (!head)
          return;
      remove_all(head ->next);
      delete head;
      head = NULL;
}


//Display every other item starting with the first
void display_every_other(node * head) 
{
      //Step 4 - Place your code here
      if (!head)
          return;
      
      cout<<head->data<<endl;
      if (head ->next)
          display_every_other(head ->next->next);
      
}

