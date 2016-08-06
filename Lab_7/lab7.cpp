#include "list.h"

//Start in Step 3 by uncommenting out the code to create 
//a list object and build it!

int main()
{
    //Create an object of class list
    list my_list;

    //Call the build function to create a Linear Linked List
    //(The build member function has already been written)
    my_list.build();
    my_list.display_all();

    int y;
    y=my_list.count_first();
    cout<<"You have "<<y<<" numbers similar to the 1st integer.(include the first integer)"<<endl;

    bool truth;
    truth = my_list.find_last();
    if (truth == true)
        cout<<"You have more than one match with ur last item!!"<<endl;

    //Place your code here to call the functions for Lab #7


    return 0;
}
