#include "list.h"

//These are the functions you will be writing
//Everything else has already been written for you!

//Constructor
list::list()
{
     //Step 4 - Implement the constructor here
    head = NULL;
}


//Display all items in a linear linked list
void list::display_all()
{
     //Step 5 - Implement the display_all function here
    node * current=head; 
    while (current)
    {
       cout<<current->data<<endl;
        current =current->next;
        
    }
}


//Count the number of times the first node's data appears
//in the list, and return that count.
int list::count_first()
{
     //Step 6 - Implement the count_first here
     //(remember to return the count!

    node * current = head;
    int i=0;
    while (current)
    {
        if (current->data == head ->data)
            i=i+1;
        current = current->next;
    }

    return i;
}

//Return true if the last node's data appears
//in the list more than once.
bool list::find_last()
{
    //Step 7 - Place your code here
    node * temp = head;
    node *current = head;
    while (current -> next)
    {
        current = current ->next;
    }

    while (temp->next)
    {
        if (temp->data == current->data)
            return true;
        temp = temp ->next;
    }
        return false;

}
