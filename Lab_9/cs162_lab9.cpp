#include "cs162_list.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the function assign
    find(head,7);
    if (find (head,7)==true)
        cout<< "YEAH"<<endl;
    else
        cout<<"NO match"<<endl;


   // remove_all(head);
   display_every_other(head);
    display_all(head);
    destroy(head);
    
    return 0;
}
