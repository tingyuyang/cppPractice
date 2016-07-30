//and purpose of the program

#include "cs162_course.h"

int main()
{

    //Step #4 - Create an object of the class here:
    course mycourse;



    //Steps #5-10 - Call the member functions here:
    //5-call the read_name function
    mycourse.read_name();
    
    //6
    mycourse.read_course();
    
    //7
    mycourse.display();

    //8
    char first[SIZE];
    char last{SIZE};
    if(mycourse.is_match(first,last))
    {
        cout<<"YEAJAKLJSAO:SJOPA:"<<endl;
    }

    
    return 0;
}
