#include "list.h"


int main()
{
    list my_values;
    
    my_values.build();
          

    //PUT YOUR FUNCTION CALL HERE!

    my_values.insert(5);
    my_values.append(7);

    int y;
    y=my_values.count();
    cout<<"Yeah,you have "<<y<<" in your LLL"<<endl;

    my_values.remove_last();
    my_values.~list();

    my_values.display_all();
     
    return 0;

}
