/*
This program can help to store the information of activities from the user input, and also display all the information from the user inpits
In addition, the program can display the activity that matches the user season input.
   */

#include "class.h"

//prototype of bool again"
bool again();//so the loop can stop if the user want to stop

int main()
{

   Adventure object;//object is the one for activityclass
   cout<<"Welcome new user！please follow the command as given"<<endl;
   cout<<"This program can help you to store/display the information of the stored activities"<<endl;
   do{//the do while loop so the user can choose to quit or continue.


      do
      {
	 object.insert();//for user to input their data
      }while ( again()==true);   //the loop will stop if user want to 
     
      
      cout<<"Do you want to display all the information?(Y/N)"<<endl;
      char answer;//so answer if the user want to display the info
      cin>>answer;
      cin.ignore(100,'\n');
      answer = toupper (answer);
      if (answer == 'Y')//if user input y, the loop will display all the informatioon from the display function
	object.displaylll();//display all the information about stored data.

      char season[50];//season, to get the user picked season
      cout<<"Please enter the activity season you'd like to check: ";
      cin.get(season,50,'\n');
      object.displayseasonlll(season);//so if the season matches, display the activity info.
     

   }while (again()==true);

   return 0;
}

bool again()//bool again function to ask user if they want to continue input
{
   cout<<"Would you like to continue(Y/N)?"<<endl;
   char answer;
   cin >> answer;
   cin.ignore(100,'\n');
   answer = toupper(answer);
   if (answer=='Y')
      return true;
   else
      return false;
}

