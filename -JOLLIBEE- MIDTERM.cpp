#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <ctime>
#include <windows.h>
using namespace std;
//#include<conio.h>
//#include <stdlib.h>
int main()
{

double vat;
int ordercode;
int i=0,x=0,choice,transaction=0,drinks=0,a,b,sleep,itempurchase=0;
int limit=0,quantity,order,pay,change=0,toy;
int yesno=1,totalquantity[100],totalorder[100],total=0,add;
string totaldrinks[100],price[100];
string allorder[100],name1,name,icon;
int again = 1;
char *l = " ------------------------------------------------------------------------------\n";
login:
string user;
string pass ="";
char ch;
	icon [0] = 2;
	icon [1] = 16;
	icon [2] = 17;
	icon [3] = 4;
	icon [4] = 2;
	icon [5] = 240;



    cout << "\n\n";
	cout << "      	                   -------------------------\n";
	cout << "  		     - - - - - - - - - - - - -  \n";
	cout << "			      	   LOGIN " << icon [4] ;
	cout << "  				  	                             - - - - - - - - - - - - -  \n";
	cout << "  	      	         -------------------------\n";


	cout << "\n\n                               Username: ";
    cin  >> user;
    cout << "\n\n                               Password: ";
    ch = _getch();


while( ch != 13 )

    {//character 13 is enter
      pass.push_back(ch);
      cout << 'x';
      ch = _getch();
    }

       cout << "                \n\n \n + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + ";
if(user == "NovicedotPH" && pass == "1234")

	{


   // cout << "\nHello ";
  //	cin  >>user;



		ofstream myfile;
        myfile.open ("Database1.txt", ios::app);

        getline (cin, name);
        	myfile <<"\n\n\nCustomer's Name: "<< name1 ;
        	myfile << "\n\nYou have ordered: "<<"\t\t\t\t\t Transaction # "<<transaction<<"\n";
			myfile << l;
			myfile << "              ITEM\t        |  DRINKS  | UNIT PRICE |  QUANTITY  | AMOUNT\n";
			myfile << l;

        myfile.close();



beginning:

do
{


limit++;
again++;
itempurchase++;
i++;





	      			cout << "\n\n\n                                     Welcome to Jollibee!\n";
            //break;


 				    cout << "                       " << "    _____\n";
   				    cout << "                       " << "   /     \\   ____   ____    __ __\n";
   					cout << "                       " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
  					cout << "                       " << " /    Y    \\  ___/|   |   \\|  |  |\n";
  					cout << "                       " << " \\____|____/\\____>____|____|_____|\n\n";


					cout << "\n\t\t\t+ ----------------------------- +" << endl;
					cout << "\n\t\t\t| ----------------------------- |" << endl;
			     	cout << "\n\t\t\t| 1)    CHICKENJOY              |" << endl;
			 		cout << "\t\t\t| 2)    YUMBURGER               |"   << endl;
					cout << "\t\t\t| 3)    DESSERTS                |"	<< endl;
					cout << "\t\t\t| 4)    BREAKFAST               |"	<< endl;
					cout << "\t\t\t| 5)    SUPER MEALS             |"   << endl;
					cout << "\t\t\t| 6)    BURGER STEAK            |"   << endl;
					cout << "\t\t\t| 7)    KIDDIE MEALS            |"	<< endl;
					cout << "\t\t\t| 8)    SOUP AND SIDES          |"	<< endl;
					cout << "\t\t\t| 9)    JOLLY SPAGHETTI         |"	<< endl;
					cout << "\t\t\t| 10)   JOLLY HOTDOG AND PIES   |"	<< endl;
					cout << "\n\t\t\t| ----------------------------- |"	<< endl;
					cout << "\n\t\t\t+ ----------------------------- +\n\n\n\n\n\n" << endl;



		cout << " " << icon [1] << " Please Enter your Choose: ";
		cin  >> choice;
system("CLS");
//CHICKENJOY
	if(choice == 1)
	{


					cout << "\n\t        -----------------------------------------------"<<endl;
					cout << "\t       |                CHICKENJOY - MENU              |"<<endl;
					cout << "\t        -----------------------------------------------\n"<<endl;


					cout << "\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2 ----------+"<<endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|  1pcs. Chicken Joy SOLO    |\t       |   1pcs. Chicken Joy VM     |" << endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|     Price : P 84.00        |\t       |     Price : P 99.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t| 1pc. Chickenjoy w/ Fries   |\t       |  1pc. Chickenjoy w/ Fries  |" << endl;
					cout << "\t|           SOLO             |\t       |           & Drinks         |" << endl;
					cout << "\t|     Price : P 105.00       |\t       |     Price : P 124.00       |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 ----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t| 1pc. Chickenjoy w/ Palabok |\t       | 1pc. Chickenjoy w/ Palabok |"<<endl;
					cout << "\t|           SOLO             |\t       |          VALUE MEAL        |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     Price : P 115.00       |\t       |     Price : P 135.00       |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +----------- ^-^ #7 ---------+ \t       +---------- ^-^ #8 ---------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t| 1pc. Chickenjoy w/ Creamy  |\t       |  1pc. Chickenjoy w/ Creamy |"<<endl;
					cout << "\t|    Macaroni Soup - Solo    |\t       |   Macaroni Soup w/ Drinks  |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     Price : P 115.00       |\t       |     Price : P 135.00       |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +----------- ^_^ #9 ---------+ \t       +---------- ^-^ #10----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     1pc. Chickenjoy w/     |\t       |     1pc. Chickenjoy w/     |"<<endl;
					cout << "\t|    Buttered Corn - Solo    |\t       |   Buttered Corn w/ Drinks  |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     Price : P 109.00       |\t       |     Price : P 124.00       |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

					cout << "\n\n        +----------- ^-^ #11---------+ \t       +---------- ^-^ #12----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     6pc. Chicken Joy       |\t       |     8pc. Chicken Joy       |"<<endl;
					cout << "\t|           Solo             |\t       |         Value Meal         |"<<endl;
					cout << "\t|     Price : P 439.00       |\t       |     Price : P 599.00       |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +----------- ^-^ #13 --------+ \t       +---------- ^-^ #14----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|  6pc. Chickenjoy w/ Rice,  |\t       |  8pc. Chickenjoy w/ Rice,  |"<<endl;
					cout << "\t|  Jolly Spaghetti & Drinks  |\t       |  Jolly Spaghetti & Drinks  |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     Price : P 459.00       |\t       |     Price : P 659.00       |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;



//MENU
		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;
system("CLS");





 if( ordercode == 2 || ordercode == 4 || ordercode == 6 || ordercode == 8 || ordercode == 10 || ordercode == 12 || ordercode == 14 )
 {
 		cout << "\n\n                        " << icon [5] << " Choice of Drink [Select 1] " << icon [5] << "\n\n";
		  			cout << "\t\t\t + ------------------------ +"   << endl;
					cout << "\t\t\t |          DRINKS "<< icon [3]  <<"        |"   << endl;
					cout << "\t\t\t |                          |"   << endl;
					cout << "\t\t\t |     1)    COKE           |"   << endl;
					cout << "\t\t\t |     2)    SPRITE         |"   << endl;
					cout << "\t\t\t |     3)    ROYAL          |"   << endl;
					cout << "\t\t\t |     4)    NESTEA         |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;


	    cout << " " << icon [1] <<" Please Choose Drinks: ";
		cin  >> drinks;


	switch(drinks)
	{
			case 1:
					totaldrinks [i] =" COKE    ";
					break;

			case 2:
					totaldrinks [i] =" SPRITE  ";
					break;

			case 3:
					totaldrinks [i] =" ROYAL   ";
					break;

			case 4:
					totaldrinks [i] =" NESTEA  ";
					break;
			default:
					totaldrinks [i] = "   --    ";
	}

}else if (ordercode == 1 || ordercode == 3 || ordercode == 5 || ordercode == 7 || ordercode == 9 || ordercode == 11 || ordercode == 13)
	{
	totaldrinks [i] = "   --    ";
	}



//QUAnTITY

	cout << "\n" << " Please Enter Quantity: ";
	cin  >> quantity;



	switch(ordercode)
	{
			case 1:
				/*	allorder	  [i] = "  1pc. Cj + Butter.Corn VM
				//	allorder	  [i] = "  Double Chezy Yumburger VM
				//	allorder	  [i] = "  B. Steak + Shanghai VM
				//	allorder	  [i] = "  Cj. Spag + shanghai SM
					allorder      [i] = "   6pc. Cj. + Rice + Spag VM  ";
				//	allorder      [i] = "  6pc. ChickenJoy w/ Spaghetti VM  ";*/

					allorder	  [i] = "   ChickenJoy Solo            ";
					price		  [i] = "   P 84  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 84*quantity;
					break;

			case 2:

					allorder	  [i] = "   ChickenJoy VM              ";
					price		  [i] = "   P 95  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 99*quantity;
					break;

			case 3:

					allorder	  [i] = "   ChickenJoy w/ Fries        ";
					price		  [i] = "   P 105 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 105*quantity;
	  				break;

	   		case 4:

					allorder	  [i] = "   ChickenJoy w/ Fries VM     ";
					price		  [i] = "   P 124 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 124*quantity;
	   				break;

	   		case 5:

					allorder	  [i] = "   Chickenjoy + Palabok       ";
					price		  [i] = "   P 115 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 115*quantity;
	   				break;

	   		case 6:

					allorder	  [i] = "   Chickenjoy + Palabok VM    ";
					price		  [i] = "   P 135 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 135*quantity;
	   				break;

			case 7:

					allorder	  [i] = "   Cj. + Creamy Macaroni      ";
					price		  [i] = "   P 115 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 115*quantity;
	   				break;

			case 8:

					allorder	  [i] = "   Cj. + Creamy Macaroni VM   ";
					price		  [i] = "   P 135 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 135*quantity;
	   				break;

			case 9:

					allorder	  [i] = "   ChickenJoy + Buttered Corn ";
					price		  [i] = "   P 109 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 109*quantity;
	   				break;

			case 10:

					allorder	  [i] = "   Cj. + Buttered Corn VM     ";
					price		  [i] = "   P 124 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 124*quantity;
	   				break;

			case 11:

					allorder	  [i] = "   6 pc. Chicken Joy          ";
					price		  [i] = "   P 439 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 439*quantity;
	   				break;

			case 12:

					allorder	  [i] = "   8 pc. Chicken Joy          ";
					price		  [i] = "   P 599 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 599*quantity;
	   				break;

	   		case 13:

					allorder	  [i] = "   6 pc. Cj. + Rice + Spag VM ";
					price		  [i] = "   P 459 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 459*quantity;
	   				break;

			case 14:

					allorder	  [i] = "   8 pc. Cj. + Rice + Spag VM ";
					price		  [i] = "   P 659 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 659*quantity;
	   				break;
	}
//	cout << "\nHow many"<<allorder [i]<<"\n";


}

//YUMBURGER
	if(choice==2)
{

					cout << "\n\t\t  -----------------------------------------------"<<endl;
					cout << "\t\t |                 YUMBURGER - MENU              |" <<endl;
					cout << "\t\t  -----------------------------------------------\n"<<endl;


					cout << "\n\n        +----------- ^-^ Y1 ---------+ \t       +---------- ^-^ Y2-----------+"<<endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|        Yumburger           |\t       |         Yumburger          |" << endl;
					cout << "\t|           Solo             |\t       |         Value Meal         |" << endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|     Price : P 39.00        |\t       |     Price : P 65.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;

					cout << "\n\n        +----------- ^-^ Y3 ---------+ \t       +---------- ^-^ Y4-----------+"<<endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|      Cheesy Yumburger      |\t       |       Cheesy Yumburger     |" << endl;
					cout << "\t|           Solo             |\t       |          Value Meal        |" << endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|     Price : P 50.00        |\t       |     Price : P 65.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +----------- ^-^ Y5 ---------+ \t       +---------- ^-^ Y6-----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|    Yumburger  /w Fries     |\t       |     Yumburger  /w Fries    |"<<endl;
					cout << "\t|           Solo             |\t       |         Value Meal         |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     Price : P 89.00        |\t       |     Price : P 103.00       |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;


					cout << "\n\n        +----------- ^-^ Y7 ---------+ \t       +---------- ^-^ Y8-----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|  Bacon Cheesy Yumburger    |\t       |  Bacon Cheesy Yumburger    |"<<endl;
					cout << "\t|           Solo             |\t       |          Value Meal        |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     Price : P 66.00        |\t       |     Price : P 84.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +----------- ^-^ Y9 ---------+ \t       +---------- ^-^ Y10----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|   Cheesy Deluxe Yumburger  |\t       |   Cheesy Deluxe Yumburger  |"<<endl;
					cout << "\t|           Solo             |\t       |          Value Meal        |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     Price : P 95.00        |\t       |     Price : P 109.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +----------- ^-^ Y11 --------+ \t       +---------- ^-^ Y12----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|  Double Cheesy Yumburger   |\t       |   Double Cheesy Yumburger  |"<<endl;
					cout << "\t|           Solo             |\t       |          Value Meal        |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|     Price : P 187.00       |\t       |     Price : P 199.00       |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;


		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;






 if( ordercode == 2 || ordercode == 4 || ordercode == 6 || ordercode == 8 || ordercode == 10 | ordercode == 11 || ordercode == 12 )
 {
 		cout << "\n\n                        " << icon [5] << " Choice of Drink [Select 1] " << icon [5] << "\n";
		  			cout << "\n\t\t\t + ------------------------ +" << endl;
					cout << "\t\t\t |          DRINKS "<< icon [3]  <<"        |"   << endl;
					cout << "\t\t\t |                          |"   << endl;
					cout << "\t\t\t |     1)    COKE           |"   << endl;
					cout << "\t\t\t |     2)    SPRITE         |"   << endl;
					cout << "\t\t\t |     3)    ROYAL          |"   << endl;
					cout << "\t\t\t |     4)    NESTEA         |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;


	    cout << " " << icon [1] <<" Please Choose Drinks: ";
		cin  >> drinks;


	switch(drinks)
	{
			case 1:
					totaldrinks [i] =" COKE    ";
					break;

			case 2:
					totaldrinks [i] =" SPRITE  ";
					break;

			case 3:
					totaldrinks [i] =" ROYAL   ";
					break;

			case 4:
					totaldrinks [i] =" NESTEA  ";
					break;
			default:
					cout << " Wrong Input  \n\n";
	}

}else if (ordercode == 1 || ordercode == 3 || ordercode == 5 || ordercode == 7 || ordercode == 9  )
	{
	totaldrinks [i] = "   --    ";
	}



//QUAnTITY



		cout << " " << icon [1] << " Please Enter Quantity: ";
		cin  >> quantity;

	switch(ordercode)
	{
			case 1:
				/*	allorder	  [i] = "  1pc. Cj + Butter.Corn VM
				//	allorder	  [i] = "  Double Chezy Yumburger VM
				//	allorder	  [i] = "  B. Steak + Shanghai VM
				//	allorder	  [i] = "  Cj. Spag + shanghai SM
					allorder      [i] = "   6pc. Cj. + Rice + Spag VM  ";
				//	allorder      [i] = "  6pc. ChickenJoy w/ Spaghetti VM  ";*/

					allorder	  [i] = "   Yumburger SOLO             ";
					price		  [i] = "   P 39  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 39*quantity;
					break;

			case 2:

					allorder	  [i] = "   Yumburger Value Meal       ";
					price		  [i] = "   P 65  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 65*quantity;
					break;

			case 3:

					allorder	  [i] = "   Cheesy Yumburger Solo      ";
					price		  [i] = "   P 50  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 50*quantity;
	  				break;

	  		case 4:

					allorder	  [i] = "   Cheesy Yumburger VM        ";
					price		  [i] = "   P 65  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 65*quantity;
	   				break;

	   		case 5:

			 		allorder	  [i] = "   Yumburger + Fries Solo     ";
					price		  [i] = "   P 89  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 89*quantity;
	   				break;

	   		case 6:

					allorder	  [i] = "   Yumburger + Fries VM       ";
					price		  [i] = "   P 103 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 103*quantity;
	   				break;

	   		case 7:

					allorder	  [i] = "   Bacon Cheesy Yumburger Solo";
					price		  [i] = "   P 66  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 66*quantity;
	   				break;

			case 8:

					allorder	  [i] = "   Bacon Cheesy Yumburger VM  ";
					price		  [i] = "   P 95  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 95* quantity;
	   				break;

			case 9:

					allorder	  [i] = "   Cheesy Deluxe Yumbgr. Solo ";
					price		  [i] = "   P 109 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 109*quantity;
	   				break;

			case 10:

					allorder	  [i] = "   Cheesy Deluxe Yumbgr. VM   ";
					price		  [i] = "   P 109 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 109*quantity;
	   				break;

			case 11:

					allorder	  [i] = "   Double Cheesy Yumburger VM ";
					price		  [i] = "   P 187 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 187*quantity;
	   				break;

			case 12:

					allorder	  [i] = "   Double Cheesy Yumburger VM ";
					price		  [i] = "   P 199 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 199*quantity;
	   				break;

	}

}

	if(choice==3)
{


			cout << "\n\t\t  -----------------------------------------------"<<endl;
			cout << "\t\t |                 DESSERT - MENU                |"<<endl;
			cout << "\t\t  -----------------------------------------------\n"<<endl;

			cout << "\n\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2 -----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|        Coke Float          |\t       |        Royal Float         |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Price : P 35.00        |\t       |     Price : P 35.00        |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

			cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 -----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Coke Zero Float       |\t       |      Chocolate Sundae      |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 35.00       |\t       |      Price : P 55.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

			cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 -----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Peach Mango Pie        |\t       |      Peach Mango 3 Pies    |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 35.00       |\t       |      Price : P 94.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;



		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;

		 if (ordercode == 1 || ordercode == 3 || ordercode == 2 || ordercode == 4 || ordercode == 5 || ordercode == 6 )
	{
	totaldrinks [i] = "   --    ";
	}

		cout << " " << icon [1] << " Please Enter Quantity: ";
		cin  >> quantity;

	switch(ordercode)
	{
			case 1:


					allorder	  [i] = "   Coke Float                 ";
					price		  [i] = "   P 35  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 35*quantity;
					break;

			case 2:

					allorder	  [i] = "   Royal Float                ";
					price		  [i] = "   P 35  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 35*quantity;
					break;

			case 3:

					allorder	  [i] = "   Coke Zero Float            ";
					price		  [i] = "   P 35  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 35*quantity;
	  				break;

	  		case 4:

					allorder	  [i] = "   Chococlate Sundae          ";
					price		  [i] = "   P 55  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 55*quantity;
	   				break;

	   		case 5:

			 		allorder	  [i] = "   Peach Mango Pie            ";
					price		  [i] = "   P 35  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 35*quantity;
	   				break;

	   		case 6:

					allorder	  [i] = "   Peach Mango 3 Pie          ";
					price		  [i] = "   P 95  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 95*quantity;
	   				break;


	}

}

if(choice==4)
{

			cout << "\n\t\t  -----------------------------------------------"<<endl;
			cout << "\t\t |                  BREAKFAST - MENU             |"<<endl;
			cout << "\t\t  -----------------------------------------------\n"<<endl;


			cout << "\n\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|   Cheesy Bacon Pie Solo    |\t       |   Cheesy Bacon Pie Trio    |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 54.00       |\t       |      Price : P 154.00      |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

			cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|   Cheesy Corned Beef Pie   |\t       | Cheesy Corned Beef Pie VM  |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 54.00       |\t       |      Price : P 69.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;


			cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 ----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|    Egg Pancake Sandwich    |\t       |    Breakfast Burger Steak  |"<<endl;
			cout << "\t|         w/ Coffee          |\t       |          w/ Coffee         |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 95.00       |\t       |      Price : P 84.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;


			cout << "\n\n        +------------ ^-^ #7 --------+ \t       +---------- ^-^ #8 ---------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|  2pc. Breakfast Chickenjoy |\t       | 2pc. Breakfast Chickenjoy  |"<<endl;
			cout << "\t|          w/ Coffee         |\t       |         w/ Coffee          |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 95.00       |\t       |      Price : P 84.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;



		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;






 if(  ordercode == 4  )
 {
 		cout << "\n\n                        " << icon [5] << " Choice of Drink [Select 1] " << icon [5] << "\n";
		  			cout << "\n\t\t\t + ------------------------ +" << endl;
					cout << "\t\t\t |          DRINKS "<< icon [3]  <<"        |"   << endl;
					cout << "\t\t\t |                          |"   << endl;
					cout << "\t\t\t |     1)    COKE           |"   << endl;
					cout << "\t\t\t |     2)    SPRITE         |"   << endl;
					cout << "\t\t\t |     3)    ROYAL          |"   << endl;
					cout << "\t\t\t |     4)    NESTEA         |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;


	    cout << " " << icon [1] <<" Please Choose Drinks: ";
		cin  >> drinks;


	switch(drinks)
	{
			case 1:
					totaldrinks [i] ="  COKE   ";
					break;

			case 2:
					totaldrinks [i] =" SPRITE  ";
					break;

			case 3:
					totaldrinks [i] =" ROYAL   ";
					break;

			case 4:
					totaldrinks [i] =" NESTEA  ";
					break;
			default:
					cout << " Wrong Input  \n\n";
	}

}else if (ordercode == 1 || ordercode == 3 || ordercode == 5 || ordercode == 2 || ordercode == 6 || ordercode == 7 || ordercode == 8  )
	{
	totaldrinks [i] = "   --    ";
	}



//QUAnTITY



		cout << " " << icon [1] << " Please Enter Quantity: ";
		cin  >> quantity;

	switch(ordercode)
	{
			case 1:


					allorder	  [i] = "   Cheesy Bacon Pie - Solo    ";
					price		  [i] = "   P 54  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 54*quantity;
					break;

			case 2:

					allorder	  [i] = "   Cheesy Bacon Pie - Trio    ";
					price		  [i] = "   P 154 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 154*quantity;
					break;

	   		case 3:

			 		allorder	  [i] = "   Cheesy Corned Beef Pie     ";
					price		  [i] = "   P 54  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 54*quantity;
	   				break;

	   		case 4:

					allorder	  [i] = "   Cheesy Corned Beef Pie VM  ";
					price		  [i] = "   P 69  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 69*quantity;
	   				break;

	   		case 5:

					allorder	  [i] = "   Egg Pancake Sand. + Coffee ";
					price		  [i] = "   P 95  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 95*quantity;
	   				break;

			case 6:

					allorder	  [i] = "   Breakfast Burger Steak     ";
					price		  [i] = "   P 84  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 84*quantity;
	   				break;

	   		case 7:

					allorder	  [i] = "   2pc. BrkFast Chickenjoy    ";
					price		  [i] = "   P 95  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 95*quantity;
	   				break;


	   		case 8:

					allorder	  [i] = "   2pc. BrkFast Cj. Coffee    ";
					price		  [i] = "   P 84  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 84*quantity;
	   				break;



	}

}


// SUPER MEAL
	if(choice==5)
{

			cout << "\n\t\t  -----------------------------------------------"<<endl;
			cout << "\t\t |                SUPER MEAL - MENU             |"<<endl;
			cout << "\t\t  -----------------------------------------------\n"<<endl;



			cout << "\n\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t| Yumburger,Jolly Spaghetti, |\t       | Chickenjoy,Jolly Spaghetti |"<<endl;
			cout << "\t|    Fries and Drinks        |\t       |   & Shanghai Super Meal    |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Price : P 95.00        |\t       |     Price : P 84.00        |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

			cout << "\n\n                          +----------- ^_^ #3 ---------+  "<<endl;
			cout << "                          |                            |\t";
			cout << "\n                          | Yumburger,Jolly Spaghetti, |\t";
			cout << "\n                          |    Fries and Drinks        |\t";
			cout << "\n                          |                            |\t";
			cout << "\n                          |     Price : P 95.00        |\t";
			cout << "\t\t                          +----------------------------+\t\n\n";


		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;






 if( ordercode == 1|| ordercode == 3 )
 {
 		cout << "\n\n                        " << icon [5] << " Choice of Drink [Select 1] " << icon [5] << "\n";
		  			cout << "\n\t\t\t + ------------------------ +" << endl;
					cout << "\t\t\t |          DRINKS "<< icon [3]  <<"        |"   << endl;
					cout << "\t\t\t |                          |"   << endl;
					cout << "\t\t\t |     1)    COKE           |"   << endl;
					cout << "\t\t\t |     2)    SPRITE         |"   << endl;
					cout << "\t\t\t |     3)    ROYAL          |"   << endl;
					cout << "\t\t\t |     4)    NESTEA         |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;


	    cout << " " << icon [1] <<" Please Choose Drinks: ";
		cin  >> drinks;


	switch(drinks)
	{
			case 1:
					totaldrinks [i] =" COKE    ";
					break;

			case 2:
					totaldrinks [i] =" SPRITE  ";
					break;

			case 3:
					totaldrinks [i] =" ROYAL   ";
					break;

			case 4:
					totaldrinks [i] =" NESTEA  ";
					break;

			default:
					cout << " Wrong Input  \n\n";
	}

}

else if (ordercode == 2 )
	{
	totaldrinks [i] = "   --    ";
	}
//QuanTITY
		cout << " " << icon [1] << " Please Enter Quantity: ";
		cin  >> quantity;

	switch(ordercode)
	{
			case 1:



					allorder	  [i] = "   Ybrger + spag. + fries SM  ";
					price		  [i] = "   P 165 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 165*quantity;
					break;

			case 2:

					allorder	  [i] = "   Chickj. Spag + shanghai SM ";
					price		  [i] = "   P 154 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 154*quantity;
					break;

	   		case 3:

			 		allorder	  [i] = "   Ybrger + Spag. + Fries SM  ";
					price		  [i] = "   P 116 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 116*quantity;
	   				break;

	}

}

	if(choice==6)
{

			cout << "\n\t\t  -----------------------------------------------"<<endl;
			cout << "\t\t |               BURGER STEAK - MENU             |"<<endl;
			cout << "\t\t  -----------------------------------------------\n"<<endl;


			cout << "\n\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Yumburger Steak       |\t       |      Yumburger Steak       |"<<endl;
			cout << "\t|           Solo             |\t       |         Value Meal         |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Price : P 55.00        |\t       |     Price : P 66.00        |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;


			cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|  Yumburger Steak w/ fries  |\t       |  Yumburger Steak w/ fries  |"<<endl;
			cout << "\t|           Solo             |\t       |          Value Meal        |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Price : P 75.00        |\t       |     Price : P 87.00        |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;


			cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|  Burger Steak w/ Shanghai  |\t       |  Burger Steak w/ Shanghai  |"<<endl;
			cout << "\t|           Solo             |\t       |          Value Meal        |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Price : P 99.00        |\t       |     Price : P 110.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;

		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;






 if( ordercode == 2 || ordercode == 4 || ordercode == 6  )
 {
 		cout << "\n\n                        " << icon [5] << " Choice of Drink [Select 1] " << icon [5] << "\n";
		  			cout << "\n\t\t\t + ------------------------ +" << endl;
					cout << "\t\t\t |          DRINKS "<< icon [3]  <<"        |"   << endl;
					cout << "\t\t\t |                          |"   << endl;
					cout << "\t\t\t |     1)    COKE           |"   << endl;
					cout << "\t\t\t |     2)    SPRITE         |"   << endl;
					cout << "\t\t\t |     3)    ROYAL          |"   << endl;
					cout << "\t\t\t |     4)    NESTEA         |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;


	    cout << " " << icon [1] <<" Please Choose Drinks: ";
		cin  >> drinks;


	switch(drinks)
	{
			case 1:
					totaldrinks [i] =" COKE    ";
					break;

			case 2:
					totaldrinks [i] =" SPRITE  ";
					break;

			case 3:
					totaldrinks [i] =" ROYAL   ";
					break;

			case 4:
					totaldrinks [i] =" NESTEA  ";
					break;
			default:
					cout << " Wrong Input  \n\n";
	}

}else if (ordercode == 1 || ordercode == 3 || ordercode == 5 )
	{
	totaldrinks [i] = "   --    ";
	}



//QUAnTITY



		cout << " " << icon [1] << " Please Enter Quantity: ";
		cin  >> quantity;

	switch(ordercode)
	{
			case 1:


					allorder	  [i] = "   Yumburger Steak Solo       ";
					price		  [i] = "   P 55  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 55*quantity;
					break;

			case 2:

					allorder	  [i] = "   Yumburger Steak VM         ";
					price		  [i] = "   P 66  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 66*quantity;
					break;

	   		case 3:

			 		allorder	  [i] = "   Yumburger Steak + Fries    ";
					price		  [i] = "   P 75  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 75*quantity;
	   				break;

	   		case 4:

					allorder	  [i] = "   Yumburger Steak + Fries VM ";
					price		  [i] = "   P 87  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 87*quantity;
	   				break;

	   		case 5:

					allorder	  [i] = "   Yumburger Steak + Shanghai ";
					price		  [i] = "   P 99  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 99*quantity;
	   				break;

			case 6:

					allorder	  [i] = "   Yumbrgr Steak + Shanghai VM";
					price		  [i] = "   P 110 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 110*quantity;
	   				break;



	}

}

	if (choice == 7)
{

			cout << "\n\t\t  -----------------------------------------------"<<endl;
			cout << "\t\t |                  KIDDIE MEAL - MENU           |"<<endl;
			cout << "\t\t  -----------------------------------------------\n"<<endl;


			cout << "\n\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2 -----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|        Yum Burger          |\t       |     Yum Burger - VM        |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Price : P 35.00        |\t       |     Price : P 45.00        |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

			cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|       Burger Steak         |\t       |   Burger Steak w/ Drinks   |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 75.00       |\t       |      Price : P 85.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;


			cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 -----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|        Chickenjoy          |\t       |    Chickenjoy w/ Drinks    |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 84.00       |\t       |      Price : P 95.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

			cout << "\n\n        +----------- ^-^ #7 ---------+ \t       +---------- ^-^ #8 -----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Jolly Spaghetti        |\t       |  Jolly Spaghetti w/ Drinks |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 64.00       |\t       |      Price : P 85.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;


		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;


 if ( ordercode == 2|| ordercode == 4 || ordercode == 6 || ordercode == 8 )
 {

 		cout << " " << icon [1] << " Choose 1 toy: ";
		  			cout << "\n\t\t\t+ ------------------------ +" << endl;
					cout << "\t\t\t|        KIDDIE TOYS       |"   << endl;
					cout << "\t\t\t|                          |"   << endl;
					cout << "\t\t\t|     1)    MARIO          |"   << endl;
					cout << "\t\t\t|     2)    SPONGEBOB      |"   << endl;
					cout << "\t\t\t|     3)    SQUIDWARD      |"   << endl;
					cout << "\t\t\t|     4)    PATRICK        |"    << endl;
					cout << "\t\t\t+ ------------------------ +\n" << endl;
if (ordercode >=1 && ordercode<=8 )
{

     	cout << " " << icon [1] <<" Please : ";
		cin  >> toy;


 		cout << "\n\n                        " << icon [5] << " Choice of Drink [Select 1] " << icon [5] << "\n";
		  			cout << "\n\t\t\t + ------------------------ +" << endl;
					cout << "\t\t\t |          DRINKS "<< icon [3]  <<"        |"   << endl;
					cout << "\t\t\t |                          |"   << endl;
					cout << "\t\t\t |     1)    COKE           |"   << endl;
					cout << "\t\t\t |     2)    SPRITE         |"   << endl;
					cout << "\t\t\t |     3)    ROYAL          |"   << endl;
					cout << "\t\t\t |     4)    NESTEA         |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;


	    cout << " " << icon [1] <<" Please Choose Drinks: ";
		cin  >> drinks;


	switch(drinks)
	{
			case 1:
					totaldrinks [i] =" COKE    ";
					break;

			case 2:
					totaldrinks [i] =" SPRITE  ";
					break;

			case 3:
					totaldrinks [i] =" ROYAL   ";
					break;

			case 4:
					totaldrinks [i] =" NESTEA  ";
					break;
			default:
					cout << " Wrong Input  \n\n";
	}
	}


}
	else if (ordercode == 1 || ordercode == 3 || ordercode == 5  || ordercode == 7)
	{
		cout << " " << icon [1] << " Choose 1 toy: ";
		  			cout << "\n\t\t\t+ ------------------------ +" << endl;
					cout << "\t\t\t|        KIDDIE TOYS       |"   << endl;
					cout << "\t\t\t|                          |"   << endl;
					cout << "\t\t\t|     1)    MARIO          |"   << endl;
					cout << "\t\t\t|     2)    SPONGEBOB      |"   << endl;
					cout << "\t\t\t|     3)    SQUIDWARD      |"   << endl;
					cout << "\t\t\t|     4)    PASTRICK       |"   << endl;
					cout << "\t\t\t+ ------------------------ +\n" << endl;

		cout << " " << icon [1] <<" Please : ";
		cin  >> toy;
	totaldrinks [i] = "   --    ";
	}
//QuanTITY
		cout << " " << icon [1] << " Please Enter Quantity: ";
		cin  >> quantity;

	switch(ordercode)
	{
			case 1:



					allorder	  [i] = "   Yum Burger                 ";
					price		  [i] = "   P 35  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 35*quantity;
					break;

			case 2:

					allorder	  [i] = "   Yum Burger VM              ";
					price		  [i] = "   P 45  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 45*quantity;
					break;

	   		case 3:

			 		allorder	  [i] = "   Burger Steak - Solo        ";
					price		  [i] = "   P 75  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 95*quantity;
	   				break;

			case 4:

			 		allorder	  [i] = "   Burger Steak - Value Meal  ";
					price		  [i] = "   P 85  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 85*quantity;
	   				break;

			case 5:

			 		allorder	  [i] = "   ChickenJoy - Solo          ";
					price		  [i] = "   P 84  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 84*quantity;
	   				break;

	   		case 6:

			 		allorder	  [i] = "   ChickenJoy - Value Meal    ";
					price		  [i] = "   P 95  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 95*quantity;
	   				break;

			case 7:

			 		allorder	  [i] = "   Jolly Spaghetti Solo       ";
					price		  [i] = "   P 64  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 84*quantity;
	   				break;

			case 8:

			 		allorder	  [i] = "   Jolly Spaghetti  Value Meal";
					price		  [i] = "   P 85  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 85*quantity;
	   				break;
	}

}


	if(choice == 8)
{

			cout << "\n\t\t  -----------------------------------------------"<<endl;
			cout << "\t\t |                 SOUPS & SIDES - MENU          |"<<endl;
			cout << "\t\t  -----------------------------------------------\n"<<endl;


			cout << "\n\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|       Buttered Corn        |\t       |    Creamy Macaroni Soup    |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 36.00       |\t       |      Price : P 44.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

			cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Jolly Crispy Fries     |\t       |     Jolly Crispy Fries     |"<<endl;
			cout << "\t|          -large            |\t       |          - Jumbo           |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|       Price : P 66.00      |\t       |       Price : P 80.00      |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;

			cout << "\n\n                          +----------- ^_^ #5 ---------+  "<<endl;
			cout << "                          |                            |\t";
			cout << "\n                          |     Jolly Crispy Fries     |\t";
			cout << "\n                          |         - Regular          |\t";
			cout << "\n                          |                            |\t";
			cout << "\n                          |      Price : P 44.00       |\t";
			cout << "\t\t                          +----------------------------+\t\n";



		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;

				 if (ordercode == 1 || ordercode == 3 || ordercode == 2 || ordercode == 4 || ordercode == 5  )
	{
	totaldrinks [i] = "   --    ";
	}

//QuanTITY
		cout << " " << icon [1] << " Please Enter Quantity: ";
		cin  >> quantity;

	switch(ordercode)
	{
			case 1:



					allorder	  [i] = "   Buttered Corn              ";
					price		  [i] = "   P 36  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 36*quantity;
					break;

			case 2:

					allorder	  [i] = "   Creamy Macaroni Soup       ";
					price		  [i] = "   P 44  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 44*quantity;
					break;

	   		case 3:

			 		allorder	  [i] = "   Jolly Crispy Fries - Large ";
					price		  [i] = "   P 66  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 66*quantity;
	   				break;

			case 4:

			 		allorder	  [i] = "   Jolly Crispy Fries - Jumbo ";
					price		  [i] = "   P 80  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 80*quantity;
	   				break;

			case 5:

			 		allorder	  [i] = "   Jolly Crispy Fries - Reg.  ";
					price		  [i] = "   P 44  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 44*quantity;
	   				break;


	}
}



	if(choice == 9)
{

			cout << "\n\t\t  -----------------------------------------------"<<endl;
			cout << "\t\t |              JOLLY SPAGHETTI - MENU          |"<<endl;
			cout << "\t\t  -----------------------------------------------\n"<<endl;


			cout << "\n\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|    Jolly Spaghetti Solo    |\t       |     Jolly Spaghetti VM     |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 55.00       |\t       |      Price : P 65.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

			cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|   Jolly Spaghetti + Fries  |\t       |  Jolly Spaghetti + Burger  |"<<endl;
			cout << "\t|           & Drink          |\t       |            Steak           |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 103.00      |\t       |      Price : P 115.00      |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;

			cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 ----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Jolly Spaghetti VM     |\t       |   Jolly Spaghetti Family   |"<<endl;
			cout << "\t|         w/ Yumburger       |\t       |             Pan            |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|       Price : P 98.00      |\t       |      Price : P 220.00      |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;



		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;






 if( ordercode == 5|| ordercode == 2 || ordercode == 3 )
 {
 		cout << "\n\n                        " << icon [5] << " Choice of Drink [Select 1] " << icon [5] << "\n";
		  			cout << "\n\t\t\t + ------------------------ +" << endl;
					cout << "\t\t\t |          DRINKS "<< icon [3]  <<"        |"   << endl;
					cout << "\t\t\t |                          |"   << endl;
					cout << "\t\t\t |     1)    COKE           |"   << endl;
					cout << "\t\t\t |     2)    SPRITE         |"   << endl;
					cout << "\t\t\t |     3)    ROYAL          |"   << endl;
					cout << "\t\t\t |     4)    NESTEA         |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;


	    cout << " " << icon [1] <<" Please Choose Drinks: ";
		cin  >> drinks;


	switch(drinks)
	{
			case 1:
					totaldrinks [i] =" COKE    ";
					break;

			case 2:
					totaldrinks [i] =" SPRITE  ";
					break;

			case 3:
					totaldrinks [i] =" ROYAL   ";
					break;

			case 4:
					totaldrinks [i] =" NESTEA  ";
					break;
			default:
					cout << " Wrong Input  \n\n";
	}
}
	else if (ordercode == 1 || ordercode == 4 || ordercode == 6 )
	{
	totaldrinks [i] = "   --    ";
	}
//QuanTITY
		cout << " " << icon [1] << " Please Enter Quantity: ";
		cin  >> quantity;

	switch(ordercode)
	{
			case 1:



					allorder	  [i] = "   Jolly Spaghetti - Solo     ";
					price		  [i] = "   P 55  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 55*quantity;
					break;

			case 2:

					allorder	  [i] = "   Jolly Spaghetti - VM       ";
					price		  [i] = "   P 65  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 65*quantity;
					break;

	   		case 3:

			 		allorder	  [i] = "   Jolly Spaghetti + Fries VM ";
					price		  [i] = "   P 103 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 103*quantity;
	   				break;

			case 4:

			 		allorder	  [i] = "   Jolly Spag. + Burger Steak ";
					price		  [i] = "   P 115 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 115*quantity;
	   				break;

			case 5:

			 		allorder	  [i] = "   Jolly Spag. + Yumburger VM ";
					price		  [i] = "    P 98 ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 98*quantity;
	   				break;

	   		case 6:

			 		allorder	  [i] = "   Jolly Spaghetti Family Pan ";
					price		  [i] = "    P 220";
					totalquantity [i] =     quantity;
					totalorder    [i] = 220*quantity;
	   				break;


	}
}
	if(choice==10)
{

			cout << "\n\t\t  -----------------------------------------------"<<endl;
			cout << "\t\t |           JOLLY HOTODG & PIES - MENU           |"<<endl;
			cout << "\t\t  -----------------------------------------------\n"<<endl;



			cout << "\n\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Tuna Pie - Solo       |\t       |      Tuna Pie - Trio       |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|      Price : P 50.00       |\t       |      Price : P 154.00      |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;



			cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|    Tuna Pie w/ Drinks      |\t       |     Jolly Hotdog - Solo    |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Price : P 65.00        |\t       |      Price : P 55.00       |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+"<<endl;


			cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6-----------+"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Cheesy Classic         |\t       |    Cheesy Classic Jolly    |"<<endl;
			cout << "\t|      Jolly Hotdog          |\t       |   Hotdog w/ Fries & Float  |"<<endl;
			cout << "\t|                            |\t       |                            |"<<endl;
			cout << "\t|     Price : P 85.00        |\t       |      Price : P 116.00      |"<<endl;
			cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;



		cout << " " << icon [1] <<" From the list of the food What do you like? ";
		cin  >> ordercode;






 if( ordercode == 7 || ordercode == 3 )
 {
 		cout << "\n\n                        " << icon [5] << " Choice of Drink [Select 1] " << icon [5] << "\n";
		  			cout << "\n\t\t\t + ------------------------ +" << endl;
					cout << "\t\t\t |          DRINKS "<< icon [3]  <<"        |"   << endl;
					cout << "\t\t\t |                          |"   << endl;
					cout << "\t\t\t |     1)    COKE           |"   << endl;
					cout << "\t\t\t |     2)    SPRITE         |"   << endl;
					cout << "\t\t\t |     3)    ROYAL          |"   << endl;
					cout << "\t\t\t |     4)    NESTEA         |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;


	    cout << " " << icon [1] <<" Please Choose Drinks: ";
		cin  >> drinks;


	switch(drinks)
	{
			case 1:
					totaldrinks [i] =" COKE    ";
					break;

			case 2:
					totaldrinks [i] =" SPRITE  ";
					break;

			case 3:
					totaldrinks [i] =" ROYAL   ";
					break;

			case 4:
					totaldrinks [i] =" NESTEA  ";
					break;
			default:
					cout << " Wrong Input  \n\n";
	}
}

	else if (ordercode == 1 || ordercode == 2 || ordercode == 6 || ordercode == 5 || ordercode == 4  )
	{
	totaldrinks [i] = "   --    ";
	}
//QuanTITY
		cout << " " << icon [1] << " Please Enter Quantity: ";
		cin  >> quantity;

	switch(ordercode)
	{
			case 1:



					allorder	  [i] = "   Tuna Pie - Solo            ";
					price		  [i] = "   P 50  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 165*quantity;
					break;

			case 2:

					allorder	  [i] = "   Tuna Pie - Trio            ";
					price		  [i] = "   P 154 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 154*quantity;
					break;

	   		case 3:

			 		allorder	  [i] = "   Tuna Pie - Drinks          ";
					price		  [i] = "   P 65  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 116*quantity;
	   				break;

			case 4:

			 		allorder	  [i] = "   Jolly Hotdog Solo          ";
					price		  [i] = "   P 55  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 116*quantity;
	   				break;

			case 5:

			 		allorder	  [i] = "   Cheesy Classic Hotdog      ";
					price		  [i] = "   P 85  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 85*quantity;
	   				break;

			case 6:

			 		allorder	  [i] = "   Hotdog + Fries + Float     ";
					price		  [i] = "   P 116 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 116*quantity;
	   				break;

	}



}
/*

	 	ofstream myfile;
        myfile.open ("Database1.txt", ios::app);

        getline (cin, name);

        myfile <<allorder[i] <<"   " <<totaldrinks[i] <<"   " <<price[i] <<"        "  <<totalquantity[i] <<"        P " <<totalorder[i] << "\n" ;
        myfile.close();
*/
//ORDER AGAIN
			cout<<"\n\n ORDER AGAIN ? [1] yes [0] no : ";
			cin>>yesno;
}

 while( (yesno == 1) || (yesno != 0 ));



			cout << "\n\n";

			cout << "Generating your Bill ";

			for ( a = 1; a <= 2; a ++)
			{
				Sleep(500);
				cout << "...";

			}

			cout << "\n\n\n";


			cout << "                                     JOLLIBEE " << icon [0] << "\n";
			cout << "                               Jose Yulo Sr. Ave. Cor. \n";
			cout << "                            Silangan Industrial Park Road\n";
			cout << "                      +++++++++++++++++++++++++++++++++++++++\n\n\n";


	 time_t now = time(0);

   tm *ltm = localtime(&now);

   // print various components of tm structure.
  			cout << "  Date: "<< 1 + ltm->tm_mon <<" / ";
 			cout <<  ltm->tm_mday << " / ";
 			cout << 1900 + ltm->tm_year << "                                      ";

  			cout << "Time: "<< 1 + ltm->tm_hour << ":";
   			cout << 1 + ltm->tm_min << ":";
 			 cout << 1 + ltm->tm_sec << endl;

			cout << "  Cashier  : Ange & Lyka\n";
			cout << "  Customer : " <<user;


		//	char *l = " ------------------------------------------------------------------------------\n";
			cout << "\n\n\n  You have ordered: "<<"\t\t\t\t\t   Transaction # " <<again <<"\n";

			cout << "              ITEM\t        |  DRINKS  | UNIT PRICE |  QUANTITY  | AMOUNT\n";
			cout << l;


	for(i = 1; i<=limit; i++)
		{
	cout <<allorder[i] <<"  | " <<totaldrinks[i] <<"| " <<price[i] <<"  |     "  <<totalquantity[i] <<"      |  P " <<totalorder[i] <<"\n";
		}

	cout << l<<"\n";


//TOTAL
	for(i = 1; i <= limit; i++)
	{

		total = total + totalorder[i];
	}
//PAY BILL
	do
	{

	cout<<"                                                           Total: P " << total << "\n";
	cout<<"  Enter Received cash : ";
	cin>> pay;
/*
		ofstream myfile;
        myfile.open ("Database1.txt", ios::app);

        getline (cin, name);
        myfile << l << "\n";
        myfile << "\n\nTOTAL: " << total;
        myfile << "\nPAY: " << pay;
        myfile.close();
*/

		if  (pay < total)
			{
			cout << "\n" << l;
			cout <<"                        KULANG ANG BAYAD MO -_- ";
			cout << "\n" << l;
			}


		else{

				change = pay - total;
				cout << "  Changed Due         : "    << change       <<"\n";
				cout << "  Items Purchased     : "    << itempurchase;

				vat = total * 0.12;
				cout << " \n  12% VAT Included    : " << vat  ;

	/*
		ofstream myfile;
        myfile.open ("Database1.txt", ios::app);

        getline (cin, name);
        myfile << l << "\n";
        myfile << "\nCHANGE: "<<change;
        myfile.close();
    */
        cout << "\n\n";
        cout << "                          This serves as your Official Receipt.\n";
		cout << "                           Thank you, and please come again.\n";
		cout << "                          Visit us also at www.Jollibee.com.ph\n";

			}

	}
	 while (pay < total);




		cout << "\n\nNew Transaction? [1] yes [0] no? : ";
		cin  >> again;

		if (again == 1)
		{
			goto beginning;
		}

		if (again == 0)
		{
			cout << "Thank you Come again";
		}


	}

	else
	{
		cout<<"Username or Password is Incorrect";
	}

	}





		/*else
			{
			cout<<"\n                       Thank you! Please Come back Again.";
			}
		*/



/*
  	else
	{
      cout << "\nWrong Input...\n";
    }

  	  cout << " Do you want to Login Again ? [y] yes [n] no : ";
      cin  >> again;
      cout << "\n";

    if (again == 'Y' || again == 'y')
	{
    	goto login;
	}
	else{
		cout << "THANK YOU AND COME AGAIN! ";
		return 0;
	}

*/










