#include "cs162_list.h"


//Implement the following functions for Lab #8

//Insert a node at the beginning of a linear linked list
void list::insert(int to_add)
{
	//Step #4 - Write the code here
    if (!head)//if the list is empty
    {
        head = new node;
        head->data = to_add;
        head->next = NULL;
    }
    else//if there is a list, construct before the list;
    {
        node * temp = new node;
        temp ->data = to_add;
        temp ->next = head;
        head = temp;
    }

}

//Append a node to the end of a linear linked list
void list::append(int to_add)
{
        //Step #5 - Write the code here
    node * current;

    while (current ->next)
    {
        current = current ->next;
    }

    current->next = new node;
    current->next->data = to_add;
    current->next->next = NULL;

}

//Count the number of nodes in the LLL, returning the result
int list::count()
{
    int i=0;
    node * current=head;
    while (current)
    {
        current = current->next;
        i=i+1;
    }

    return i;//U HAVE TO RETURN HERE!!

}

//Remove the last node from the list
void list::remove_last()
{
   	//Step #7 - Write the code here
    node * last=head;
    node * previous=head;
    while(last->next)
    {
        previous = last;
        last = last->next;
    }

    delete last;
    previous->next = NULL;
}

//Deallocate all nodes (Destructor)
list::~list()
{
        //Step #8 - Write the code here
   node * temp;
    while (head)
    {
        temp = head->next;
        delete head;
        head = temp;
    }
}

//Challenge - 
void list::copy_last()
{

}      
