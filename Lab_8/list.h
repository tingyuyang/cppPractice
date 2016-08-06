#include <iostream>
using namespace std;

bool again();


//Let's begin with linear linked lists by having a list of integer data
struct node
{
       int data;
       node * next;
};

//Manage a collection of data using a linear linked list 
class list
{
    public:

	//These are the functions that you will be implementing!
        void insert(int to_add); //Step #4 - Insert at beginning
        void append(int to_add); //Step #5 - Append at the end
        int count();		 //Step #6 - Count the # of nodes
        void remove_last(); 	 //Step #7 - Remove the last node
        ~list();    		 //Step #8 - deallocate all dynamic memory
   	void copy_last();	 //Challenge
       
	//These functions have already been implemented (for you): 
        list();             //constructor - initializes data members
        void display_all(); //display all items
	void build();	    //build a LLL from the user

    private:
        node * head;                 //The head of a linear linked list
        
};
