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
      ////////////////do sth here
      char * type;
      char * location;
      char * season;
      char * info;
      char * date;

};

class Adventure
{
   public:
      Adventure();
      ~Adventure();//destructor
      //void new();//read in new activity info
      void displayseason(char seasont[]);
      void add_info();
      void displayall();
      int get_size();
      int get_count();
   private:
      Activity * myactivity;
      int count;
      int size;
};

