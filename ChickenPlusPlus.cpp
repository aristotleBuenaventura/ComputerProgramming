#include <iostream>
#include "windows.h" // sleep
#include <ctime> // time and date
#include <conio.h> // cls
#include <iomanip> //setprecision, setw
using namespace std;

void again (int& isExit);// Function Declaration
float bill(float& payment, float& change, float& vatAble, float& total, float& vat, int& newTransaction);
int drinksMenu(int& drinks);
void dots();
void display();
void blink(int);
void customer(string& user);
int menu(int& choice);
int code(int& ordercode);
int quants(int& quantity);


int main() {
	// Variable Declaration
	int choice;
	int ordercode;
	int drinks;
	int quantity = 0;
	int i=0;
	string order[100];
	string price[100];
	string totalDrinks[100];
	int totalQuantity[100];
	int totalOrder[100];
	int isExit=1;
	int a;
	string user;
	time_t now = time(0);
   	tm *ltm = localtime(&now);
   	int max = 0;
   	float total = 0;
   	int pay = 0;
   	float payment = 0;
   	float change = 0;
   	float vat = 0;
   	float vatAble = 0;
   	int newTransaction;
   	
   	
system("COLOR 70"); // white background with color black font color

	//This displays the Home screen of the program
	display();
	customer(user);

 while ( isExit==1 ) {
 	
	max++; // increment
	i++;
	
	start:
		
system("CLS");

    // The main menu of the program and where the customer can select their preferred meal
	display();
	
	menu(choice); 

system("CLS");

    // This is the menu when the customer has selected number 1 in the main menu
	if(choice == 1)
		{
			chicken:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                    CHICKEN                    |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ C1 ------------+ \t       +------------ C2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|    Original Chicken (Half)  |\t       |   Original Chicken (Whole)  |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 215.00        |\t       |     Price : P 410.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ C3 ------------+ \t       +------------ C4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|      Lemon Glazed (Half)    |\t       |     Lemon Glazed (Whole)    |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 220.00        |\t       |     Price : P 420.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ C5 ------------+ \t       +------------ C6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t| Yangnyeom with Garlic (Half)|\t       |Yangnyeom with Garlic (whole)|"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 230.00        |\t       |     Price : P 440           |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ C7 ------------+ \t       +------------ C8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Jack Daniels (Half)     |\t       |   Jack Daniels (Whole)      |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 220.00        |\t       |     Price : P 420.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ C9 ------------+ \t       +------------ C10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Garlic Chicken (half)   |\t       |   Garlic Chicken (Whole)    |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 220.00        |\t       |     Price : P 420.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");

            // Drinks menu after the customer has selected chicken
            drinksChicken:
            	
system("CLS");

			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);	

					switch(drinks)
					{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default:
								goto drinksChicken;
								break;
					}
					
					quants(quantity);
					
					switch(ordercode)
					{
						case 1:
							order[i] = "Original Chicken (Half)";
							price[i] = "P 215.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 215*quantity;
							break;
						case 2:
							order[i] = "Original Chicken (Whole)";
							price[i] = "P 410.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 410*quantity;
							break;
						case 3:
							order[i] = "Lemon Glazed (Half)";
							price[i] = "P 220.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 220*quantity;
							break;
						case 4:
							order[i] = "Lemon Glazed (Whole)";
							price[i] = "P 420.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 420*quantity;
							break;
						case 5:
							order[i] = "Yangnyeom with Garlic (Half)";
							price[i] = "P 230.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 230*quantity;
							break;
						case 6:
							order[i] = "Yangnyeom with Garlic (whole)";
							price[i] = "P 440.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 440*quantity;
							break;
						case 7:
							order[i] = "Jack Daniels (Half)";
							price[i] = "P 220.00";
							totalQuantity[i] = 220;
							totalOrder[i] = 220*quantity;
							break;
						case 8:
							order[i] = "Jack Daniels (Whole)";
							price[i] = "P 420.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 420*quantity;
							break;
						case 9:
							order[i] = "Garlic Chicken (half)";
							price[i] = "P 220.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 220*quantity;
							break;
						case 10:
							order[i] = "Garlic Chicken (whole)";
							price[i] = "P 220.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 420*quantity;
							break;
					}
			} else {
				goto chicken;
			}
			
    // This is the menu when the customer has selected number 2 in the main menu
	} else if (choice == 2)
		{
			pasta:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                     PASTA                     |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ P1 ------------+ \t       +------------ P2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|    Spaghetti Bolognese      |\t       |     Spaghetti Bolognese     |" << endl;
					cout << "\t|                             |\t       |        with Meatballs       |" << endl;
					cout << "\t|     Price : P 119.00        |\t       |     Price : P 169.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ P3 ------------+ \t       +------------ P4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|    Spaghetti Carbonara      |\t       |      Lasagna Classico       |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 129.00        |\t       |     Price : P 189.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ P5 ------------+ \t       +------------ P6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|      Bacon Aglio Olio       |\t       |     Bacon Mac and Cheese    |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 145.00        |\t       |     Price : P 169.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ P7 ------------+ \t       +------------ P8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Fettucine Alfredo       |\t       |     Fetucine a la king      |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 149.00        |\t       |     Price : P 179.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ P9 ------------+ \t       +------------ P10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|    Pesto Chicken Penne      |\t       | Chicken Pops Mac and Cheese |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 189.00        |\t       |     Price : P 189.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");
            // Drinks menu after the customer has selected pasta
            drinksPasta:
            	
system("CLS");
			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);
					
					switch(drinks)
						{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default:
								goto drinksPasta;
								break;
						}
						
					quants(quantity);
					
					switch(ordercode) {
						case 1:
							order[i] = "Spaghetti Bolognese";
							price[i] = "P 119.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 119*quantity;
							break;
						case 2:
							order[i] = "Spaghetti Bolognese with Meatballs";
							price[i] = "P 169.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 169*quantity;
							break;
						case 3:
							order[i] = "Spaghetti Carbonara";
							price[i] = "P 129.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 129*quantity;
							break;
						case 4:
							order[i] = "Lasagna Classico";
							price[i] = "P 189.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 189*quantity;
							break;
						case 5:
							order[i] = "Bacon Aglio Olio";
							price[i] = "P 145.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 145*quantity;
							break;
						case 6:
							order[i] = "Bacon Mac and Cheese ";
							price[i] = "P 169.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 169*quantity;
							break;
						case 7:
							order[i] = "Fettucine Alfredo";
							price[i] = "P 149.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 149*quantity;
							break;
						case 8:
							order[i] = "Fetucine a la king";
							price[i] = "P 179.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 179*quantity;
							break;
						case 9:
							order[i] = "Pesto Chicken Penne";
							price[i] = "P 189.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 189*quantity;
							break;
						case 10:
							order[i] = "Chicken Pops Mac and Cheese";
							price[i] = "P 189.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 189*quantity;
							break;
					}
			} else {
				goto pasta;
			}
			
    // This is the menu when the customer has selected number 3 in the main menu
	} else if (choice == 3)
		{
			sandwich:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                    SANDWICH                   |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ S1 ------------+ \t       +------------ S2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|       Pesto Egg Roll        |\t       |      Tuna Salad Roll        |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 150.00        |\t       |     Price : P 169.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ S3 ------------+ \t       +------------ S4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|       Bacon Toastie         |\t       |    Bacon and Egg Sandwich   |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 175.00        |\t       |     Price : P 140.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ S5 ------------+ \t       +------------ S6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|      Cheese and Pickle      |\t       |    Mexican Chicken Special  |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 175.00        |\t       |     Price : P 150.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ S7 ------------+ \t       +------------ S8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|  Ham and Cheese Croissant   |\t       |   Crispy Bacon and Avocado  |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 140.00        |\t       |     Price : P 175.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ S9 ------------+ \t       +------------ S10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|       Brie and Ham          |\t       |   Salami and Cornedbeef     |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 140.00        |\t       |     Price : P 160.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");
            // Drinks menu after the customer has selected sandwich
            drinksSandwich:
            	
system("CLS");

			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);
					
					switch(drinks)
						{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default: 
								goto drinksSandwich;
								break;
						}
						
					quants(quantity);
					
					switch(ordercode) {
						case 1:
							order[i] = "Pesto Egg Roll";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
						case 2:
							order[i] = "Tuna Salad Roll ";
							price[i] = "P 169.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 169*quantity;
							break;
						case 3:
							order[i] = "Bacon Toastie";
							price[i] = "P 175.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 175*quantity;
							break;
						case 4:
							order[i] = "Bacon and Egg Sandwich";
							price[i] = "P 140.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 140*quantity;
							break;
						case 5:
							order[i] = "Cheese and Pickle";
							price[i] = "P 175.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 175*quantity;
							break;
						case 6:
							order[i] = "Mexican Chicken Special";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
						case 7:
							order[i] = "Ham and Cheese Croissant";
							price[i] = "P 140.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 140*quantity;
							break;
						case 8:
							order[i] = "Crispy Bacon and Avocado";
							price[i] = "P 175.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 175*quantity;
							break;
						case 9:
							order[i] = "Brie and Ham";
							price[i] = "P 140.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 140*quantity;
							break;
						case 10:
							order[i] = "Salami and Cornedbeef";
							price[i] = "P 160.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 160*quantity;
							break;
					}
			} else {
				goto sandwich;
			}
			
    // This is the menu when the customer has selected number 4 in the main menu
	}  else if (choice == 4)
		{
			breakfast:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                   BREAKFAST                   |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ B1 ------------+ \t       +------------ B2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|    Sausage and Egg Muffin   |\t       |        Arroz caldo          |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 240.00        |\t       |     Price : P 100.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ B3 ------------+ \t       +------------ B4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Chicken and Waffle      |\t       |        Tapa Steak           |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 280.00        |\t       |     Price : P 290.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ B5 ------------+ \t       +------------ B6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|          Chixilog           |\t       |     Mexican Omellete        |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 200.00        |\t       |     Price : P 280.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ B7 ------------+ \t       +------------ B8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Steak and Eggs          |\t       |          Spamsilog          |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 340.00        |\t       |     Price : P 190.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ B9 ------------+ \t       +------------ B10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|      Bacon and Eggs         |\t       |   Eggs and French Toast     |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 230.00        |\t       |     Price : P 150.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");
            // Drinks menu after the customer has selected breakfast
            drinksBreakfast:
            	
system("CLS");

			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);
					
					switch(drinks)
						{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default:
								goto drinksBreakfast;
								break;
						}
						
					quants(quantity);
					
					switch(ordercode) {
						case 1:
							order[i] = "Sausage and Egg Muffin";
							price[i] = "P 240.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 240*quantity;
							break;
						case 2:
							order[i] = "Arroz caldo";
							price[i] = "P 100.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 100*quantity;
							break;
						case 3:
							order[i] = "Chicken and Waffle";
							price[i] = "P 280.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 280*quantity;
							break;
						case 4:
							order[i] = "Tapa Steak";
							price[i] = "P 290.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 290*quantity;
							break;
						case 5:
							order[i] = "Chixilog";
							price[i] = "P 200.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 200*quantity;
							break;
						case 6:
							order[i] = "Mexican Omellete";
							price[i] = "P 280.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 280*quantity;
							break;
						case 7:
							order[i] = "Steak and Eggs";
							price[i] = "P 270.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 270*quantity;
							break;
						case 8:
							order[i] = "Spamsilog";
							price[i] = "P 190.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 190*quantity;
							break;
						case 9:
							order[i] = "Bacon and Eggs";
							price[i] = "P 230.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 230*quantity;
							break;
						case 10:
							order[i] = "Eggs and French Toast";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
					}
			} else {
				goto breakfast;
			}
			
    // This is the menu when the customer has selected number 5 in the main menu
	} else if (choice == 5)
		{
			veggies:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                    VEGGIES                    |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ V1 ------------+ \t       +------------ V2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|       Mango salad           |\t       |  Buttered Veggies (special) |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 120.00        |\t       |     Price : P 150.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ V3 ------------+ \t       +------------ V4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|      Buttered Veggies       |\t       |        Chopsuey             |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 80.00         |\t       |     Price : P 140.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ V5 ------------+ \t       +------------ V6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|   Grilled Eggplant Salad    |\t       |    Spicy Garlic Kangkong    |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 120.00        |\t       |     Price : P 140.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ V7 ------------+ \t       +------------ V8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|  Cucumber and Tomato Salad  |\t       |       Pechay Guisado        |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 100.00        |\t       |     Price : P 120.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ V9 ------------+ \t       +------------ V10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|       Tofu Salad            |\t       |  Ampalaya Guisado with Egg  |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 120.00        |\t       |     Price : P 150.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");
            // Drinks menu after the customer has selected veggies 
            drinksVeggies:
            	
system("CLS");

			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);
					
					switch(drinks)
						{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default:
								goto drinksVeggies;
								break;
						}
						
					quants(quantity);
					
					switch(ordercode) {
						case 1:
							order[i] = "Mango salad ";
							price[i] = "P 120.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 120*quantity;
							break;
						case 2:
							order[i] = "Buttered Veggies (special)";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
						case 3:
							order[i] = "Buttered Veggies ";
							price[i] = "P 80.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 80*quantity;
							break;
						case 4:
							order[i] = "Chopsuey";
							price[i] = "P 140.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 140*quantity;
							break;
						case 5:
							order[i] = "Grilled Eggplant Salad";
							price[i] = "P 120.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 120*quantity;
							break;
						case 6:
							order[i] = "Spicy Garlic Kangkong";
							price[i] = "P 140.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 140*quantity;
							break;
						case 7:
							order[i] = "Cucumber and Tomato Salad";
							price[i] = "P 100.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 100*quantity;
							break;
						case 8:
							order[i] = "Pechay Guisado";
							price[i] = "P 120.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 120*quantity;
							break;
						case 9:
							order[i] = "Tofu Salad";
							price[i] = "P 120.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 120*quantity;
							break;
						case 10:
							order[i] = "Ampalaya Guisado with Egg";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
					}
			} else {
				goto veggies;
			}
			
    // This is the menu when the customer has selected number 6 in the main menu
	} else if (choice == 6)
		{
			dessert:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                    DESSERT                    |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ V1 ------------+ \t       +------------ V2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|        Macha Lava           |\t       |       French Gelato         |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 180.00        |\t       |     Price : P 200.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ V3 ------------+ \t       +------------ V4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|       Golden Toast          |\t       |     Triple Layer Cake       |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 150.00        |\t       |     Price : P 200.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ V5 ------------+ \t       +------------ V6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|      Miso Butterscotch      |\t       |       Apple Fritters        |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 150.00        |\t       |     Price : P 250.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ V7 ------------+ \t       +------------ V8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|       Cheese Cake           |\t       |       Dessert Sampler       |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 100.00        |\t       |     Price : P 220.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ V9 ------------+ \t       +------------ V10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|        Tiramisu             |\t       |     Assorted Cupcakes       |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 180.00        |\t       |     Price : P 180.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");
            // Drinks menu after the customer has selected dessert
            drinksDessert:
            	
system("CLS");

			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);
					
					switch(drinks)
						{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default:
								goto drinksDessert;
								break;
						}
						
					quants(quantity);
					
					switch(ordercode) {
						case 1:
							order[i] = "Macha Lava";
							price[i] = "P 180.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 180*quantity;
							break;
						case 2:
							order[i] = "French Gelato";
							price[i] = "P 200.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 200*quantity;
							break;
						case 3:
							order[i] = "Golden Toast";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
						case 4:
							order[i] = "Triple Layer Cake";
							price[i] = "P 200.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 200*quantity;
							break;
						case 5:
							order[i] = "Miso Butterscotch";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
						case 6:
							order[i] = "Apple Fritters";
							price[i] = "P 250.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 250*quantity;
							break;
						case 7:
							order[i] = "Cheese Cake";
							price[i] = "P 100.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 100*quantity;
							break;
						case 8:
							order[i] = "Dessert Sampler";
							price[i] = "P 220.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 220*quantity;
							break;
						case 9:
							order[i] = "Tiramisu";
							price[i] = "P 180.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 180*quantity;
							break;
						case 10:
							order[i] = "Assorted Cupcakes";
							price[i] = "P 180.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 180*quantity;
							break;
					}
			} else {
				goto dessert;
			}
			
    // This is the menu when the customer has selected number 7 in the main menu
	} else if (choice == 7)
		{
			soup:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                      SOUP                     |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ S1 ------------+ \t       +------------ S2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|      Chicken Afritada       |\t       |      Chicken Corn Soup      |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 140.00        |\t       |     Price : P 120.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ S3 ------------+ \t       +------------ S4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|      Crab and Corn soup     |\t       |    Chicken Asparagus Soup   |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 150.00        |\t       |     Price : P 180.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ S5 ------------+ \t       +------------ S6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|        Chicken Mami         |\t       |        Beef Pares           |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 100.00        |\t       |     Price : P 110.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ S7 ------------+ \t       +------------ S8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|    Creamy Chicken Sopas     |\t       |     Beef Ribs Sinigang      |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 130.00        |\t       |     Price : P 220.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ S9 ------------+ \t       +------------ S10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|      Boiled Beef Soup       |\t       |        Manila Clam          |" << endl;
					cout << "\t|                             |\t       |     and Mussel Tinola       |" << endl;
					cout << "\t|     Price : P 140.00        |\t       |     Price : P 170.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");
            // Drinks menu after the customer has selected soup
            drinksSoup:
            	
system("CLS");

			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);
					
					switch(drinks)
						{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default:
								goto drinksSoup;
								break;
						}
						
					quants(quantity);
					
					switch(ordercode) {
						case 1:
							order[i] = "Chicken Afritada";
							price[i] = "P 140.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 140*quantity;
							break;
						case 2:
							order[i] = "Chicken Corn Soup";
							price[i] = "P 120.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 120*quantity;
							break;
						case 3:
							order[i] = "Crab and Corn soup";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
						case 4:
							order[i] = "Chicken Asparagus Soup";
							price[i] = "P 180.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 180*quantity;
							break;
						case 5:
							order[i] = "Chicken Mami";
							price[i] = "P 100.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 100*quantity;
							break;
						case 6:
							order[i] = "Beef Pares";
							price[i] = "P 110.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 110*quantity;
							break;
						case 7:
							order[i] = "Creamy Chicken Sopas";
							price[i] = "P 130.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 130*quantity;
							break;
						case 8:
							order[i] = "Beef Ribs Sinigang";
							price[i] = "P 220.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 220*quantity;
							break;
						case 9:
							order[i] = "Boiled Beef Soup";
							price[i] = "P 140.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 140*quantity;
							break;
						case 10:
							order[i] = "Manila Clam and Mussel Tinola";
							price[i] = "P 170.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 170*quantity;
							break;
					}
			} else {
				goto soup;
			}
			
    // This is the menu when the customer has selected number 8 in the main menu
	} else if (choice == 8)
		{
			pizza:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                     PIZZA                     |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ Z1 ------------+ \t       +------------ Z2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|          Original           |\t       |         Pepperoni           |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 115.00        |\t       |     Price : P 190.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ Z3 ------------+ \t       +------------ Z4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|          Tuna Fish          |\t       |          Sausage            |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 180.00        |\t       |     Price : P 180.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ Z5 ------------+ \t       +------------ Z6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|           Bacon             |\t       |        Mozzarella           |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 160.00        |\t       |     Price : P 139.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ Z7 ------------+ \t       +------------ Z8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|          Mushroom           |\t       |           Peppers           |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 180.00        |\t       |     Price : P 130.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ Z9 ------------+ \t       +------------ Z10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|           Onion             |\t       |            Clams            |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 130.00        |\t       |     Price : P 190.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");
            // Drinks menu after the customer has selected pizza
            drinksPizza:
            	
system("CLS");
			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);
					
					switch(drinks)
						{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default:
								goto drinksPizza;
								break;
						}
						
					quants(quantity);

					switch(ordercode) {
						case 1:
							order[i] = "Original";
							price[i] = "P 115.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 115*quantity;
							break;
						case 2:
							order[i] = "Pepperoni";
							price[i] = "P 190.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 190*quantity;
							break;
						case 3:
							order[i] = "Tuna Fish";
							price[i] = "P 180.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 180*quantity;
							break;
						case 4:
							order[i] = "Sausage";
							price[i] = "P 180.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 180*quantity;
							break;
						case 5:
							order[i] = "Bacon";
							price[i] = "P 160.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 160*quantity;
							break;
						case 6:
							order[i] = "Mozzarella";
							price[i] = "P 139.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 139*quantity;
							break;
						case 7:
							order[i] = "Mushroom";
							price[i] = "P 180.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 180*quantity;
							break;
						case 8:
							order[i] = "Peppers";
							price[i] = "P 130.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 130*quantity;
							break;
						case 9:
							order[i] = "Onion";
							price[i] = "P 130.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 130*quantity;
							break;
						case 10:
							order[i] = "Clams";
							price[i] = "P 190.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 190*quantity;
							break;
					}
			} else {
				goto pizza;
			}
			
    // This is the menu when the customer has selected number 9 in the main menu
	} else if (choice == 9)
		{
			family:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                   FAMILY MEAL                 |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ F1 ------------+ \t       +------------ F2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|       Spaghetti Pan         |\t       |         Palabok Pan         |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 320.00        |\t       |     Price : P 350.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ F3 ------------+ \t       +------------ F4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|   6 pc. Chicken Bucket      |\t       |    8 pc. Chicken Bucket     |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 650.00        |\t       |     Price : P 750.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ F5 ------------+ \t       +------------ F6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     4 pc. Chicken Box       |\t       |      Family Burger Box      |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 600.00        |\t       |     Price : P 800.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ F7 ------------+ \t       +------------ F8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|    Snack Burger Bundle      |\t       |   Fries and Drinks Bundle   |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 300.00        |\t       |     Price : P 220.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ F9 ------------+ \t       +------------ F10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|       Family Pizza          |\t       |        Family Soup          |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 550.00        |\t       |     Price : P 450.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");
            // Drinks menu after the customer has selected family meal
            drinksFamily:
            	
system("CLS");

			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);
					
					switch(drinks)
						{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default:
								goto drinksFamily;
								break;
						}
						
					quants(quantity);
					
					switch(ordercode) {
						case 1:
							order[i] = "Spaghetti Pan";
							price[i] = "P 320.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 320*quantity;
							break;
						case 2:
							order[i] = "Palabok Pan";
							price[i] = "P 350.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 350*quantity;
							break;
						case 3:
							order[i] = "6 pc. Chicken Bucket";
							price[i] = "P 650.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 650*quantity;
							break;
						case 4:
							order[i] = "8 pc. Chicken Bucket";
							price[i] = "P 750.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 750*quantity;
							break;
						case 5:
							order[i] = "4 pc. Chicken Box";
							price[i] = "P 600.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 600*quantity;
							break;
						case 6:
							order[i] = "Family Burger Box";
							price[i] = "P 800.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 800*quantity;
							break;
						case 7:
							order[i] = "Snack Burger Bundle";
							price[i] = "P 300.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 300*quantity;
							break;
						case 8:
							order[i] = "Fries and Drinks Bundle";
							price[i] = "P 220.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 220*quantity;
							break;
						case 9:
							order[i] = "Family Pizza";
							price[i] = "P 550.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 550*quantity;
							break;
						case 10:
							order[i] = "Family Soup";
							price[i] = "P 450.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 450*quantity;
							break;
					}
			} else {
				goto family;
			}
			
    // This is the menu when the customer has selected number 10 in the main menu
	} else if (choice == 10)
		{
			kids:
					cout << "\n\t           -----------------------------------------------"<<endl;
					cout << "\t          |                    KIDS MEAL                  |"<<endl;
					cout << "\t           -----------------------------------------------\n"<<endl;
					cout << "\n        +------------ K1 ------------+ \t       +------------ K2 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|      Chicken Tenders        |\t       |         Kids Fries          |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 200.00        |\t       |     Price : P 100.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ K3 ------------+ \t       +------------ K4 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t| Grilled PB & Banana Sandwich|\t       |     Cheese Quesadilla       |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 100.00        |\t       |     Price : P 120.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +------------ K5 ------------+ \t       +------------ K6 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Fish Sticks & Fries     |\t       |    Fried Steak Fingers      |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 150.00        |\t       |     Price : P 240.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n\n        +------------ K7 ------------+ \t       +------------ K8 ------------+"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|      Kid Cheeseburger       |\t       |     Kid Caesar Salad        |"<<endl;
					cout << "\t|                             |\t       |                             |"<<endl;
					cout << "\t|     Price : P 120.00        |\t       |     Price : P 150.00        |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
					cout << "\n        +------------ K9 ------------+ \t       +------------ K10 -----------+"<<endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|      Chicken Nuggets        |\t       |   Grilled Ham & Cheese      |" << endl;
					cout << "\t|                             |\t       |                             |" << endl;
					cout << "\t|     Price : P 120.00        |\t       |     Price : P 110.00        |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					
					code(ordercode);
					
system("CLS");
            // After choosing a meal a new menu for drinks is displayed
            drinksKids:
            	
system("CLS");

			if (ordercode == 1 || ordercode == 2 || ordercode == 3 || ordercode == 4 || ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9 || ordercode == 10)
			{
				drinksMenu(drinks);
				
					switch(drinks)
						{
						case 1:
								totalDrinks [i] =" Coke    ";
								break;

						case 2:
								totalDrinks [i] =" Sprite  ";
								break;

						case 3:
								totalDrinks [i] =" Iced Tea   ";
								break;

						case 4:
								totalDrinks [i] =" Water  ";
								break;
						case 5:
								totalDrinks [i] =" None  ";
								break;
						default:
								goto drinksKids;
								break;
						}
						
					quants(quantity);

					switch(ordercode) {
						case 1:
							order[i] = "Chicken Tenders";
							price[i] = "P 200.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 200*quantity;
							break;
						case 2:
							order[i] = "Kids Fries";
							price[i] = "P 100.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 100*quantity;
							break;
						case 3:
							order[i] = "Grilled PB & Banana Sandwich";
							price[i] = "P 100.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 100*quantity;
							break;
						case 4:
							order[i] = "Cheese Quesadilla";
							price[i] = "P 120.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 120*quantity;
							break;
						case 5:
							order[i] = "Fish Sticks & Fries";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
						case 6:
							order[i] = "Fried Steak Fingers";
							price[i] = "P 240.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 240*quantity;
							break;
						case 7:
							order[i] = "Kid Cheeseburger";
							price[i] = "P 120.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 120*quantity;
							break;
						case 8:
							order[i] = "Kid Caesar Salad";
							price[i] = "P 150.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 150*quantity;
							break;
						case 9:
							order[i] = "Chicken Nuggets";
							price[i] = "P 120.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 120*quantity;
							break;
						case 10:
							order[i] = "Grilled Ham & Cheese";
							price[i] = "P 110.00";
							totalQuantity[i] = quantity;
							totalOrder[i] = 110*quantity;
							break;
					}
			} else {
				goto kids;
			}
        } else {
			goto start;
		}	
		again (isExit);
	}
	
	blink(a);
					
system("CLS");

            // Total bill including items, drinks, price, quantity, and the amount that the customer has accumulated
			cout << "\n\n";
			cout << "                                                      ChickenPlusPlus\n ";
			cout << "                                                   Blk 7 Lot 15 Mustasa st.\n";
			cout << "                                                  Tumana, Marikina City 1800\n";
			cout << "                                                         477-3848\n";
			dots();
  			cout << "                     Date: "<< 1 + ltm->tm_mon <<" / " << ltm->tm_mday << " / " << 1900 + ltm->tm_year << endl;
  			cout << "                     Time: "<<  ltm->tm_hour << ":"<< ltm->tm_min << ":"<< ltm->tm_sec << endl;
			cout << "                     Cashier  : Aristotle, Azarel, and Justine\n";
			cout << "                     Customer : " << user << endl;
			dots();
			cout << "                     You have ordered: " << endl;
			cout << "                     Items" << setw(42)<<"|  Drinks"<< setw(14)<<"| Price "<< setw(13)<<" | Quantity"<< setw(10)<<" | Amount\n";
			dots();
			
			for(i=1;i<=max;i++)
			{
			cout <<"                     "<< order[i] << setw(40 - order[i].length())<<" | " <<totalDrinks[i] << setw(15 - totalDrinks[i].length()) <<" | " <<price[i]<<" | " <<totalQuantity[i] << setw(12)<<" | P " <<totalOrder[i] <<"\n";
			total += totalOrder[i];
			}
			
			dots();
			cout <<"\n                                                                                         Total: P " <<  fixed<<setprecision(2) << total << "\n";
			
			// This is where the user will enter the amount of money that they will pay.
			bill(payment, change, vatAble, total, vat, newTransaction);
} // end of main function

void display() {
	                    //This displays the Home screen of the program
	      			cout << "\n\n\n                           Welcome to ChickenPlusPlus\n";
 				    cout << "     " << "    ___   _   _   _    ___   _  __   ____   __    _       _        _\n" ;
   				    cout << "     " << "  // __| | |_| | | | // __| | |/ // |  __| |  \\  | |     | |      | |   \n" ;
   					cout << "     " << " |  |    |     | | ||  |    |   //  | |__  |   \\ | |   __| |__  __| |__  \n" ;
					cout << "     " << " |  |    |  _  | | ||  |    |  <    |  __| | |\\\\ | |  |__   __||__   __|    \n" ;
					cout << "     " << " |  |__  | | | | | ||  |__  |   \\   | |__  | | \\   |     | |      | |  \n" ;
  					cout << "     " << "   \\___| |_| |_| |_|  \\___| |_|\\_\\  |____| |_|  \\__|     |_|      |_|     \n" ;
}

int menu(int& choice){
						cout << "\n\t\t\t+ ***************************** +" << endl;
					cout << "\n\t\t\t| ***************************** |" << endl;
			     	cout << "\n\t\t\t| 1) Chicken                    |" << endl;
			 		cout << "\t\t\t| 2) Pasta                      |"   << endl;
					cout << "\t\t\t| 3) Sandwich                   |"	<< endl;
					cout << "\t\t\t| 4) Breakfast                  |"	<< endl;
					cout << "\t\t\t| 5) Veggies                    |"   << endl;
					cout << "\t\t\t| 6) Dessert                    |"   << endl;
					cout << "\t\t\t| 7) Soup                       |"	<< endl;
					cout << "\t\t\t| 8) Pizza                      |"	<< endl;
					cout << "\t\t\t| 9) Family Meal                |"	<< endl;
					cout << "\t\t\t| 10) Kiddie Plus               |"	<< endl;
					cout << "\n\t\t\t| ***************************** |"	<< endl;
					cout << "\n\t\t\t+ ***************************** +\n\n" << endl;
					
					cout << " " << " Please Enter your Choice: ";
					cin  >> choice; 
}

void customer(string& user) {
	cout << "\n\n\n\n\t Please Enter your Full Name: "; // Data collection of the customer
	getline(cin,user);
}

int code(int& ordercode) {
					cout << " Enter the number that you like to order [1-10]: ";
					cin  >> ordercode;
}

int drinksMenu(int& drinks) {
	cout << "\n\n                        " << "       Choice of Drink  " << "\n\n";
		  			cout << "\t\t\t + ------------------------ +"   << endl;
					cout << "\t\t\t |          DRINKS          |"   << endl;
					cout << "\t\t\t |                          |"   << endl;
					cout << "\t\t\t |     1)    Coke           |"   << endl;
					cout << "\t\t\t |     2)    Sprite         |"   << endl;
					cout << "\t\t\t |     3)    Iced Tea       |"   << endl;
					cout << "\t\t\t |     4)    Water          |"   << endl;
					cout << "\t\t\t |     5)    None           |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;
					
				    cout <<" Please Select 1 Drink: ";
					cin  >> drinks;
}

int quants(int& quantity) {
	
	cout << "\n" << " Please enter quantity: ";
	cin  >> quantity;
	
}

float bill(float& payment, float& change, float& vatAble, float& total, float& vat, int& newTransaction) { // This is where the user will enter the amount of money that they need to pay.

		do {
				
			cout << "                     Enter your payment: ";
			cin >> payment;
			
				if (payment < total){
					cout << "\n                     Not enough money, please input again your payment\n\n";
				} else {
					change = payment - total;
					vatAble = total / 1.12;
					vat = vatAble * 0.12;
					cout << "\n                     Cash: " <<  fixed << setprecision(2) << payment << endl;
					cout << "                     VATable: " << fixed << setprecision(2) << vatAble << endl;
					cout << "                     12% VAT: " << fixed << setprecision(2) << vat << endl;
					cout << "                     Total: " <<  fixed << setprecision(2) << total << endl;
					cout << "                     Change: " <<  fixed << setprecision(2) << change << endl;
					cout << "\n";
					dots();
					cout << "                                                 THIS RECEIPT SHALL BE VALID FOR\n ";
					cout << "                                                FIVE (5) YEARS FROM THE DATE OF\n";
					cout << "                                                         PERMIT TO USE\n";
					dots();
					
					// The customer will be asked if he/she wants to have another transaction
					transaction:
					cout << "\n\n                     Do you want a new transaction? [1] yes [0] no : ";
		    		cin >> newTransaction;
		    		if (newTransaction == 1) { 
		    			main();
					} else if (newTransaction == 0) {
						cout << "\n\n                     Thank you and come again!\n\n";
					} else {
						goto transaction;
					}
				}
		    }while (payment < total);
		}

void again (int& isExit) { // The customer will be asked if he/she wants to order more
			
		again:
			
        cout<<"\n\n Will you order again ? [1] yes [0] no : ";
			cin>>isExit;
			if (isExit == 0) {
				isExit = 0;
			} else if (isExit == 1) {
				isExit = 1;
			}else {
				goto again;
			}
}

void blink(int a) {
	cout << "\n\n";
			cout << "Preparing your total bill "; // shows blinking dots before showing the receipt
			for ( a = 1; a <= 2; a ++)
			{
				Sleep(500);
				cout << "...";
			}
}

void dots() {
	cout << "                    -------------------------------------------------------------------------------------" << endl;
}
