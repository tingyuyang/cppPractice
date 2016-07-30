//Tingyu Yang,Program#3
//This program will help you to see the information of the sale/trade electronics
//the user can choose if they want to enter the item for sale.They can see the items in the menu to trade or for sell.
//In addition, they can choose to add item at the end of the list.
//Bonus, they can choose to purchase a product(model)from the list, and the product will be removed in the list
#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>

#include "manager.h"

int main()
{
   manager boss;//boss is for manager from the class
   char file[50]="saleitems.txt";//file is the variable and help program to read the information from the txt file
   boss.readfile(file);
   
   char answer='Y';//set the answer into Y first, so it can go into the loop
  
   while (answer == 'Y')
   {
      cout<<"Do you want to enter your item for sale?Y/N "<<endl;
      cin>>answer;//if the answer is N, it will escape from the loop
      answer = toupper (answer);
      cin.ignore();
      
      if(answer=='Y')
	 boss.input();//if ppl want to enter item for sale.it will conduct the input function
	 
   }

   boss.input_add();//to add the information at the end of the list(if user did not input, there will have nothing to input into the list
   boss.display_sale();//function to display the information of sale item
   boss.display_trade();//function to display the information of trade item
   
   answer='Y';

   while (answer == 'Y')
   {
      cout<<"Purchase?Y/N  "<<endl;
      cin>>answer;
      answer = toupper(answer);
      cin.ignore();
      if (answer == 'Y')
      {
	 boss.remove();//so if user said Y for purchasing, will conduct the remove function
      }
   }
   return 0;
}

///constructor
manager::manager()//constructor,set every variable into 0, to nothing
{
   for (int i = 0;i<10;++i)
   {
      sale[i].item[0] ='\0';
      sale[i].manufacturer[0] ='\0';
      sale[i].model[0] ='\0';
      sale[i].condition[0] ='\0';
      sale[i].value =0;
      sale[i].trade ='\0';

   }
   amount = 0;
}

//get user input
void manager::input()//function to store the information for user if they want to add item for sale.
{
   cout<<"Please enter your item type: ";
   cin.get(sale[amount].item,20,'\n');
   cin.ignore(100,'\n');

   cout<<"Please enter the manufactuere: ";
   cin.get(sale[amount].manufacturer,20,'\n');
   cin.ignore(100,'\n');

   cout<<"Please enter the item model: ";
   cin.get(sale[amount].model,30,'\n');
   cin.ignore(100,'\n');

   cout<<"Please enter the item condition: ";
   cin.get(sale[amount].condition,100,'\n');
   cin.ignore(100,'\n');

   cout<<"Please enter the item value: ";
   cin>>sale[amount].value;
   cin.ignore();

   cout<<"Would like to trade the item? Y/N";
   cin >> sale[amount].trade;
   cin.ignore();
   
  amount=amount+1;

}
//
void manager::input_add()//to add the user input into the exist txt file input
{
   ofstream file_out;
   file_out.open("saleitems.txt");//function to add information into the list

   for(int i=0;i<amount;++i)//add info till the loop is finished
   {

      file_out<<sale[i].item<<':';
      file_out<<sale[i].manufacturer<<':';
      file_out<<sale[i].model<<':';
      file_out<<sale[i].condition<<':';
      file_out<<sale[i].value<<':';
      file_out<<sale[i].trade<<'\n';
   }
}

//BONUS QUESTION
void manager::remove()//function to remove at the end of the purchase
{
   char purchase[50];
   cout<<"What you would like to purchase(please type the information of the model only)?"<<endl;
   cin.get(purchase,50,'\n');

   ofstream file_out;
   file_out.open("saleitems.txt");
   for (int i=0;i<amount; ++i)
   {
      if(strcmp(sale[i].model,purchase)==0)//if user purchased something matched from the list, the item will be removed
      {
	 cout << "You just purchased/removed"<<purchase<<"from the list"<<endl;
      }
      else
      {
	 file_out<<sale[i].item<<':';
	 file_out<<sale[i].manufacturer<<':';
	 file_out<<sale[i].model<<':';
	 file_out<<sale[i].condition<<':';
	 file_out<<sale[i].value<<':';
	 file_out<<sale[i].trade<<'\n';
      }
   }

}
//read file
void manager::readfile(char file[])//funtion to read the information from the txt file
{
   ifstream input;
   input.open(file);
   
   if (!input)//so if it can not be opened, it will escape from the loop
   {
      cout<<"the file s not opened."<<endl;
      return;
   }
   
   input.get(sale[amount].item,20,':');//get the first word information first
   input.ignore(100,':');

   while (!input.eof())//the loop will continue till it meets at the end of the txt file
   {
      input.get(sale[amount].manufacturer,20,':');
      input.ignore(100,':');

      input.get(sale[amount].model,30,':');
      input.ignore(100,':');

      input.get(sale[amount].condition,100,':');
      input.ignore(100,':');

      input>>sale[amount].value;
      input.ignore(100,':');

      input>> sale[amount].trade;
      input.ignore(100,'\n');
 
      amount=amount+1;//keep increasing the amount variable each time 

      input.get(sale[amount].item,20,':');
      input.ignore();
   }
   
   input.close();
}

//display the sell:ing electronics
void manager::display_sale()//function to display the item which is available for sale
{
   int i=0;
   
   while (i<=amount)
   {
      if (sale[i].trade=='N')//so if trade ==N, it means the item is for sale instead
      {
	 cout<< "The available SALE item is " <<sale[i].item <<endl;
      }

      i=i+1;
   }
}

//display the trade item
void manager::display_trade()
{
   int i=0;
   while (i<=amount)
   {
      if (sale[i].trade=='Y')//so if trade == Y, it means the item is available for trading
	 cout<<"The available TRADE item is "<<sale[i].item<<endl;

      i=i+1;
   }
  


}

