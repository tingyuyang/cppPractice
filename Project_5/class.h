
#include <iostream>
using namespace std;

class Activity
{
   public:
      Activity();
      ~Activity();//destructor

      //description/date to activity
      void add_info();

      //display info if season matches
      void displayseason(char season[]);

      //display all activity info
      void displayall();

   private:
      char * type;
      char * location;
      char * season;
      char * info;
      char * date;

};

struct node
{
   Activity sports;
   node * next;
};


class Adventure
{
   public:
      Adventure();
      ~Adventure();//destructor
      //for LLL & remember to add them into the int main function?
      void insert();
      void displaylll();
      void displayseasonlll(char season[]);
   private:
    
      node * head; 
};

