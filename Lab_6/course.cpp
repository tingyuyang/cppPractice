//implemented in this file.

#include "cs162_course.h"

//Implement the body of these functions for Lab #6

//Constructor - initialize all data members to their zero equivalent value
course::course()//constructor. initialize.
{
	//Place the code for the constructor here
        first_name[0]='\0';
        last_name[0]='\0';
        crn = 0;
        designator[0]='\0';
        section = 0;


}


//Read in the CRN, Course Description and Section
//Store these into the private data members of the class
void course::read_course()
{
        //Implement this function
        //#6
        cout<<"Please enter the CRN of your course: ";
        cin>>crn;
        cin.ignore(100,'\n');

        cout<<"Please enter your course designator: ";
        cin.get(designator,SIZE,'\n');
        cin.ignore(100,'\n');

        cout<<"Please enter your course section: ";
        cin>>section;
        cin.ignore(100,'\n');

}


//Display the name and course information
void course::display()
{

    display_name();
    cout<<"Your course is "<< crn<< designator<< section<<endl;


}

//Take the argument and compare it to the student's name
//If it is the same, return a true - otherwise return false
bool course::is_match(char a_first_name[], char a_last_name[])
{
       //Implement this function
       if(strcmp(a_first_name,first_name)==0 && strcmp(a_last_name,last_name == 0))
           return true;
       else
           return false;


}


//Challenge - reset the course information for a student if they
//want to drop, given the CRN. Only drop the course if the CRN
//matches. Return true if the operation was successful and false
//if the CRN doesn't match
bool course::drop(int CRN)
{
      // Challenge

}



