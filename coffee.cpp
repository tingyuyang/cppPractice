//this code helped the user to order coffe with different size,cup_number, milk_type,milk amount, syrup_flavor of the Coffee

#include <cstring>
#include <iostream>
using namespace std;

//function prototype
bool welcome();//basic explain the purpose of this program|| the user can choose to continue(serve new customer) or quit(after work hours)  
void bye();//quit program and say goodbye
void choose_size(char size[]);//help to choose the coffee size of small, medium or large
int cup_number();//choose the cup number
void milk_amount(char amount[]);//chooose the milk amount of no-mill, a little bit, or a lot
void milk_type(char type[]);//choose the milk type between soymilk, non_fat milk or plain
void syrup_flavor(char flavor[]);//choose syrup falbor between chocolate, vanilla or nut

//int main fuction 
int main()
{
    int quit = 0; // this variable is for user to quit the program if they press 'N'.
    cout<< "Welcome, New User!"
        <<"This program will assist you help the customer to order coffees."<<endl;
     cout<<"Please answer based on the question."
        <<"The customer can order drinks, and this program will read each drink after each finished ordered."
        <<endl;
     cout<<"You can choose to continue this program for new customer, or continue the program for after working hour"<<endl;
     cout<<"This program will only continue till you enter the right command"<<endl
         <<"If you enter the wrong command, the program will continue to ask questions"<<endl<<endl;
   
     do // the loop is for user to quit the program if user press'N'
    {

        bool wel;//variable to store the information to quit the program or not (note to myself:because it store the info from welcome() function, type must be the same ("bool" here)
        wel= welcome();
       
        if (wel == false){
            bye();
            quit = quit + 1;
            return 0;
        }

        if (wel == true){
            
            // how many cups 
            int cup;
            cup= cup_number();
            cout << "You just ordered " << cup << " cups of coffee." << endl <<endl;
            
            //while loop for coffee 
            int i; // the i variable for cups of coffee till the order is complete.
            i = 0;
            while (i < cup){
            
                //size
                char size[100];
                choose_size(size);
                cout<<"The coffe size is "<<size <<endl <<endl;

                //milk amount
                char amount[100];
                milk_amount(amount);
                cout<<"Based on the milk amount, your drink is a(an) "<<amount <<endl <<endl;
                
                if (strcmp(amount,"Espresso") != 0){
                    //milk type
                    char type[100];
                    milk_type(type);
                    cout << "The milk type is "<< type << endl <<endl;
                }

                //syrup
                char flavor[100];
                syrup_flavor(flavor);
                cout << "The syrup flavor is " <<flavor<< endl << endl;

                // final echoing
                cout << "You just oredered a cup of " << size <<" "<< flavor<<" " << amount<< "." << endl <<endl;
                i = i + 1;
            }
        }

    }while ( quit == 0);

    return 0;
}

// how many cups order 
int cup_number()
{
    int cups;
    do
    {
        cout<< "How many cups do you want?" << endl;
        cin>>cups;
        cin.ignore (100,'\n');
    } while (cups <0);
    return cups;
}

//what size do you want
void choose_size(char size[])
{
    char cup_size;
    do   
    {
        cout << "What size do you want? (s/m/l)"<< endl;
        cin >> cup_size;
        cin.ignore(100, '\n');
    }while (cup_size!='s'&& cup_size!='m' && cup_size!='l');
    
    if (cup_size=='s')
        strcpy(size, "small");
    else if (cup_size == 'm')
        strcpy (size, "medium");
    else if (cup_size=='l')
        strcpy(size, "large");
    
}

//milk amount
void  milk_amount(char amount[])
{
    char volume;

    do
    {
        cout << "How much milk would like to have?(n for no milk/ b for a little bit / f for a lot )"<<endl;
        cin >> volume;
        cin.ignore(100, '\n');
    }while (volume != 'n' &&  volume!= 'b' && volume!= 'f' );

    if(volume == 'n')
        strcpy (amount, "Espresso");
    if (volume == 'b')
        strcpy (amount, "Macchiato");
    if(volume == 'f')
        strcpy (amount, "Cappucino");
}

//milk type
void  milk_type(char type[])
{
    char milk;
    do
    {
        cout<<"Which milk type would you want (s for soymilk/ n for non-fat / p for plain)"<<endl;
        cin >> milk;
        cin.ignore (100, '\n');
    }while (milk!='s' &&  milk!= 'n'&& milk!='p');

    if (milk=='s')
        strcpy (type,  "soy");
    if (milk == 'n')
        strcpy (type, "non-fat");
    if (milk=='p')
        strcpy (type, "plain");
}

//syrup flavor
void syrup_flavor(char flavor[])
{
    char syrup;
    do
    {
        cout<<"Which syrup flavor(c for chocolate/ v for vanilla/ n for nut)"<<endl;
        cin>>syrup;
        cin.ignore(100,'\n');
    }while (syrup!='c'&& syrup!='v'&& syrup!='n');

    if (syrup == 'c')
        strcpy (flavor, "chocolate");
    if (syrup=='v')
        strcpy(flavor, "vanilla");
    if (syrup== 'n')
        strcpy (flavor, "nut");
}

//build up fuction for welcome
bool welcome()
{
    char answer;
    do
    {
        cout<< "To welcome new customer, please press'Y' / To  quit the program, please press'N'"<< endl;

        cin >> answer;
        cin.ignore(100,'\n');
        answer= toupper(answer);
    }while (answer !='Y' && answer!='N');
    
    if(answer == 'Y')
        return true;
    
    else if (answer == 'N')
        return false;
}


//fuction for quit
void bye()
{
    cout<< "Thank you, see you next time!"<< endl;
}
