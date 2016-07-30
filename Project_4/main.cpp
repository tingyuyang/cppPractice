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
   int size = object.get_size();//so get the size from the user input
   int count = 0;
   do
   {
      object.add_info();//adding information of activities
      count=object.get_count();//and increment count variable at the same time
   }while (count<size && again()==true);//stop the loop till it reaches the size variable,&& user want to stop the loop
   
   cout<<"Do you want to display all the information?(Y/N)"<<endl;
   char answer;//so answer if the user want to display the info
   cin>>answer;
   cin.ignore(100,'\n');
   answer = toupper (answer);
   if (answer == 'Y')//if user input y, the loop will display all the informatioon from the display function
     object.displayall();

   char season[50];//season, to get the user picked season
   cout<<"Please enter the activity season you'd like to check: ";
   cin.get(season,50,'\n');
   object.displayseason(season);
   //to display the information with the macthed season.
  

   //heyhey,dear tutor : thank you for the help of this semester~it was really helpful~~wish you all the best<3.

   return 0;
}

bool again()//bool again function to ask user if they want to continue input
{
   cout<<"Would you like to insert another activity(Y/N)?"<<endl;
   char answer;
   cin >> answer;
   cin.ignore(100,'\n');
   answer = toupper(answer);
   if (answer=='Y')
      return true;
   else
      return false;
}

