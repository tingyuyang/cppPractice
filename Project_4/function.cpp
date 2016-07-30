//the functions for the main
//build up all the functions here

#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>

#include "class.h"

Activity::Activity()//the construtoir to initialize every variable
{
   type = NULL;
   location = NULL;
   season = NULL;
   info = NULL;
   date =NULL;  
}

Activity::~Activity()//the destructor
{
   if (type != NULL)
      delete []type;
   if (location != NULL)
      delete []location;
   if (season != NULL)
      delete []season;
   if (info != NULL)
      delete []info;
   if (date != NULL)
      delete []date;
}
void Activity::add_info()//the function for user to input the new information..
{
   int len = 0;// to count how many letters in the input word
   char temptype[50];//temporary variable to string copy the user input//for input type
   cout<<"Please type the name of the activity: ";
   cin.get(temptype,50,'\n');//get the user input
   cin.ignore(100,'\n');
   len = strlen(temptype);//get the number of letters in the words from user input
   type = new char[len+1];
   strcpy(type,temptype);//to copy the input from temp to the type variable under Activity class

   char temploc[50];//for location
   cout<<"Please type the locatiin of the activity: ";
   cin.get(temploc,50,'\n');
   cin.ignore(100,'\n');
   len = strlen(temploc);
   location = new char[len+1];
   strcpy(location,temploc);

   char tempseason[50];//for activity season
   cout<<"Please type the season of the activity: ";
   cin.get(tempseason,50,'\n');
   cin.ignore(100,'\n');
   len = strlen(tempseason);
   season = new char[len+1];
   strcpy(season,tempseason);

   char tempinfo[50];//for the user description of the activity
   cout<<"Please type the information of the activity: ";
   cin.get(tempinfo,50,'\n');
   cin.ignore(100,'\n');
   len = strlen(tempinfo);
   info = new char[len+1];
   strcpy(info,tempinfo);

   char tempdate[50];//for the user to input the date of the activity
   cout<<"Please enter the last time you did this activity(format: 7/13/2015): ";
   cin.get(tempdate,50,'\n');
   cin.ignore(100,'\n');
   len =strlen(tempdate);
   date= new char[len+1];
   strcpy(date, tempdate);
}

//display all///only info so far
void Activity::displayall()//to display the information of the activity
{
   cout<<"The activity name is "<<type<<" in "<<location<<" during season "<<season<<", the user description is "<<info <<endl;
}

//for season comparing,display the activity info
void Activity::displayseason(char inseason[])//function to display if the season matches user input
{
   if (strcmp(inseason,season)==0)//so if the string compare matches user input, will apply the display function.
      displayall();
   else
      cout<<"There is no activity matches your input"<<endl;
}

/////////////////ADVENTURE
//constructor
Adventure::Adventure()//constructor to initialize
{
   count = 0;
   cout<<"How many activity do you want?"<<endl;
   cin>>size;//so user can initialize the data
   cin.ignore(100,'\n');
   myactivity = new Activity[size];
}

//loop for adding up the info from activity
void Adventure::add_info()//add the information from activity class to adventure
{
   myactivity[count].add_info();
   ++count;//and increment the count variable
}
//to display all the information
void Adventure::displayall()//function to display all the information of the activities
{
   for (int i=0; i<count;++i)//so can display one by one till reach the count varaible
   {
      myactivity[i].displayall();
   }

}
//display seasoned matched activity
void Adventure::displayseason(char seasont[])//to display all the activity matches
{
   for (int i=0;i<count;++i)
   {
      myactivity[i].displayseason(seasont);
   }
}

//return get count
int Adventure::get_count()//get the count every time the variable increment
{
   return count;
}

//size
int Adventure::get_size()//get size from the user input
{
   return size;
}


//deconstructor
Adventure::~Adventure()
{
      delete []myactivity;
      count = 0;
      size = 0;
}
