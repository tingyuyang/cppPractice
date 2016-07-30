//Tingyu Yang Program#3
//manager.h file

using namespace std;

struct electronics//struct the electtonics
{
   char item[20];//the item for the struct electronics
   char manufacturer[20];
   char model[30];
   char condition[100];
   float value;//value is number, so float
   char trade;//because trade variable enter Y or N, so not an array
};

class manager
{
   public:
      manager();//constructor to initialize the variable
      void readfile(char file[]);//function to read in the file
      void display_sale();//display item available for sale
      void display_trade();//display the item available for trading
      void input();//to read in the user input information
      void input_add();//for user to add information into thr list if they want sale their electronics
      void remove();//user to purchase the item, so the item will be removed
   private:
      electronics sale [50];//sale for storing the information 
      int amount;  //amount to count how many item is in the txt file.
};

