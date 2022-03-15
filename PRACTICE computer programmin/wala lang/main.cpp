//ONLINE ORDERING SYSTEM-FB3

#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<stdio.h>

using namespace std;

//DECLARATION OF FUNCTIONS
int yesno(int x);
double category();//Selection of Category
int buy();
double menfashion();
double womenfashion();
double bags();
double hnb();
double technology();
void delivery(double total);//Total Amount to be Paid after all Orders
void details(string adrs, string name, string age, string cont, string nick);//Details for Delivery
void exit(); //Exit whenever the customer inputs invalid Product ID

main()
{
	string name, nick, age, sex, cont, adrs;
	double total;
	int x, yn;

	//data collection of the customer
	cout<<"\n\t\tWELCOME TO ITE ONLINE SHOPPING!\n\n\tPlease enter your personal information"<<endl;
	cout<<"\tFull Name: ";
	getline(cin,name);
	cout<<"\tNickname: ";
	getline(cin,nick);
	cout<<"\tAge: ";
	getline(cin,age);
	cout<<"\tSex: ";
	getline(cin,sex);
	cout<<"\tContact#: 09";
	getline(cin,cont);
	cout<<"\tAddress: ";
	getline(cin,adrs);

	do
	{
		total+=category();//adds every new item ordered
		x=buy();
	}
	while(x==1);

 	if(x==0)
		delivery(total);

	details(adrs,name,age,cont,nick);

	return 0;
}

double category()//SELECTION OF THE DESIRED CATEGORY
{
	system("cls");
	system("color 0B");
	int x;
	double tcost, cost;
	char cat;
	cout<<"\n\t=================================================================="<<endl;
	cout<<"\t||\tKindly Select your desired Category from the ff:\t||"<<endl;
	cout<<"\t||\t\tA: Men's Fashion\t\t\t\t||"<<endl;
	cout<<"\t||\t\tB: Women's Fashion\t\t\t\t||"<<endl;
	cout<<"\t||\t\tC: Bags & Accessories\t\t\t\t||"<<endl;
	cout<<"\t||\t\tD: Health & Beauty\t\t\t\t||"<<endl;
	cout<<"\t||\t\tE: Technology\t\t\t\t\t||"<<endl;
	cout<<"\t=================================================================="<<endl;
	cin>>cat;

	switch(cat)
	{
		case 'A' : case 'a':
			{
			cost=menfashion();
			break;
			}
		case 'B' : case 'b':
			{
			cost=womenfashion();
			break;
			}
		case 'C' : case 'c':
			{
			cost=bags();
			break;
			}
		case 'D' : case 'd':
			{
			cost=hnb();
			break;
			}
		case 'E' : case 'e':
			{
			cost=technology();
			break;
			}
		default:
			{
			category();
			break;
			}
	}
	tcost=cost;

	return tcost;
}

int yesno(int x)
{
	while(x!=0 && x!=1)
	{
		cout<<"\t||\tINVALID. PLEASE ENTER '1' or '0' only.\t||\t";
		cin>>x;
	}

	if(x==0||x==1)
		return x;
}

int buy()
{
	int x;

	cout<<"\t\tWould you like to buy more?(Yes=1 or No=0): ";
	cin>>x;
	x = yesno(x);

	return x;
}

double menfashion()
{
	system("cls");
	system("color 3E");
	string item[] = {"Bench 3-in-1 Pack Hipster Brief","Bench 5-in-1 Pack Bikini Brief","Bench Black Jeans","Bench Boxy Tee (Black)","Bench Boxy Tee (Blue)","Bench Boxy Tee (White)","Bench Denim Jeans","Bench Graphic Tee Black","Bench Graphic Tee Green","Bench Hoodie Jacket Gray","Bench Hoodie Jacket Maroon","Bench Long Sleeve Polo Shirt (Green)","Bench Long Sleeve Polo Shirt (Yellow)","Bench Polo Shirt (Gray)","Bench Polo Shirt (Maroon)","Bench Polo Shirt (Mint Green)","Bench Striped Long Sleeve (Blue&White)","Bench Striped Tee (Blue)","Bench Tanga Brief (1 pc) Gray","Bench Tanga Brief (1 pc) White","Bench Tank Top (Black)","Bench Tank Top (Blue)","Bench Tank Top (Gray)","H&M Black Shirt","H&M F.R.I.E.N.D.S. Black Hoodie","H&M Mona Lisa Sweatshirt","H&M Spongebob Hoodie","H&M Spongebob Printed Sweatshirt","H&M Sporty White Hooded Jacket","H&M Striped Sweatshirt","Penshoppe Pokemon Gotta Catch 'Em All Hoodie","Penshoppe Pokemon Pikachu Shirt","Penshoppe Pokemon Pikachu Track Pants","Penshoppe Pokemon Snorlax Tee","Penshoppe Pokemon Squirtle Tee","Penshoppe Shorts Black","Penshoppe Shorts White","Uniqlo Black Undershirt","Uniqlo Blue Pants","Uniqlo Brown Pants","Uniqlo Light Brown Pants","Uniqlo Mickey Mouse Polo Shirt (Blue)","Uniqlo Mickey Mouse POlo Shirt (White)","Uniqlo Plain Black Polo Shirt","Uniqlo Plain Blue Polo Shirt","Uniqlo Plain Yellow Polo Shirt","Uniqlo White Pants","Uniqlo White Undershirt","Whilly Chavarria X Bench Denim Jacket (Limited Edition)","Willy Chvarria X Bench Cropped Jacket (Limited Edition)"};
	double price[] = {349,459,899,499,499,499,999,399,399,699,699,639,639,699,699,699,899,459,129,129,349,349,349,549,1690,899,1690,1690,1990,1490,1099,599,899,499,499,699,699,249,1099,1099,1099,899,899,599,599,599,1099,199,1499,1499};
	const int pid[] = {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150};

	cout<<left;
	cout<<"\n\n\t=================================================================================="<<endl;
	cout<<setw(3)<<"\t||"<<setw(5)<<"Product ID\t\tProduct Name\t\t\t\t\tPrice\n"<<setw(3)<<"\t||"<<endl;

	int r;
	for(r=0; r<=49; r++){
    	cout.setf(ios::left,ios::adjustfield);
		cout<<setw(3)<<"\t|| "<<setw(10)<<pid[r]<<setw(55)<<item[r];
		cout.setf(ios::right,ios::adjustfield);
		cout<<setw(10)<<"Php "<<price[r]<<endl;
	}
	cout<<"\t=================================================================================="<<endl;

	int id, quantity;
	double amt,cosst;

	cout<<"\n\tWhat would you like to buy? (Enter Product ID): ";
	cin>>id;

	if(id>150||id<=100)
		exit();
	else
		cout<<"\n\tHow many pcs of "<<item[id-101]<<" would you want to buy?";
		cin>>quantity;
		amt = (quantity*price[id-101]);
		cosst+= amt;

	return cosst;
}

double womenfashion()
{
	system("cls");
	system("color 4D");
	string item[] = {"Cartier Necklace (Stainless)","Chopard Necklace (Gold)","Bvlgari Necklace (Stainless)","Boucheron Necklace (Silver)","Buccellati Necklace (Gold)","Authentic Bracelet (Gold)","Pandora Bracelet (Silver)","Miansai Sterling Bracelet (Silver Nexus)","Bicocchi Bracelet (Yellow Gold)","Stud Earrings (Natural Diamond)","Yurman Earrings","Chanel Earings (Whte)","Hermes Earrings (Rose Gold)","Engraved Ring (Blue Sapphire)","Pandora Ring (Silver)","Promise Ring (Gold)","Retro Hairpin (Rhinestone Twists)","Minimalist Hairpin (Pink)","Parisian Heels (Black)","Asum Heels (Red)","Otto Heels (Transparent)","Parisian Flatshoes (Brown)","Havianas Slippers Violet","Kirei Slippers (Pink)","Reef Slippers (Red)","Birkenstock Slippers (Yellow)","Sandugo Sandals (Orange)","Ajio Sandals (Red)","Ajio Sandals (Pink)","Ajio Sandals (Violet)","Roadster Sandals (White)","Roadster Sandals (Black)","Roadster Sandals (Violet)","Peripera Liptint set (Mix color)","Gecomo Liptint Set (Mix color)","Everbilena Face powder set (Pink Fair)","Matte Face powder set (Pink light)","Avon Face powder set (Golden deep)","Careline Eye liner set (Black)","Careline Eye liner set (Brown)","Matte Eye liner set (Black)","Matte Eye liner set (Brown)","Revlon Lipstick set (Limited Edition)","Avon Lipstick set (Mix color)","Matte Lipstick set (Shades of Red)","Careline Brushes and tool set","Bench Skirt (Black)","Bench Skirt (White)","Penshoppe crop top (Yellow)","Uniqlo dress (Blue)","OXGN sweatshirt (Red)"};
	double cost[] = {1499,1999,2499,1999,2499,1100,1700,700,700,700,500,500,500,500,500,1499,1499,1499,1499,1499,1499,1499,1250,1250,1250,1300,1300,1300,1300,900,900,900,1800,1099,899,899,799,699,699,699,499,499,499,199,149,100,180,199,249};
	const int id[] = {201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249};

	cout<<left;
	cout<<"\n\n\t=================================================================================="<<endl;
	cout<<setw(3)<<"\t||"<<setw(5)<<"Product ID\t\tProduct Name\t\t\t\t\tPrice\n"<<setw(3)<<"\t||"<<endl;

	int r;
	for(r=0; r<=48; r++){
        cout.setf(ios::left,ios::adjustfield);
		cout<<setw(3)<<"\t|| "<<setw(10)<<id[r]<<setw(55)<<item[r];
		cout.setf(ios::right,ios::adjustfield);
		cout<<setw(10)<<"Php "<<cost[r]<<endl;
	}
	cout<<"\t=================================================================================="<<endl;

	int cod,quan;
	double a,cosst;

	cout<<"\n\tWhat would you like to buy? (Enter Product ID): ";
	cin>>cod;

	if(cod>249||cod<=200)
		exit();
	else
		cout<<"\n\tHow many pcs of "<<item[cod-201]<<" would you want to buy?";
		cin>>quan;
		a = (quan*cost[cod-201]);
		cosst+=a;

	return cosst;
}

double bags()
{
	system("cls");
	system("color 6E");
	string item[] = {"Hawk Bag (Blue)","Hawk Bag (Green)","Hawk Bag (Maroon)","Hawk Bag (Red)", "Hawk Bag (Yellow)","Jansport bag (Blue)","Jansport bag (Green)","Jansport Bag (Maroon)","Jansport Bag (Red)","Jansport Bag(Yellow)","Jordan Bag (Blue)","Jordan Bag(Green)","Jordan Bag (Maroon)","Jordan Bag (Red)","Jordan Bag (Yellow)","Nike Bag (Blue)","Nike Bag (Green)","Nike Bag (Maroon)","Nike Bag (Red)","Nike Bag (Yellow)","Nike Sling bag (Yellow)","Penshoppe Sling bag (Black)","Bench Sling bag (white)","Jordan Sling bag (black and white)","Supreme body bag (red)","Supreme body bag (black)","Shoulder bag (Black)","Brief case (Transparent)","Brief case (matte black)","Gym bag (Jordan)","Gym bag (Nike)","Nike cap (white)","Nike cap (black)","Adidas cap (white)","Adidas cap (black)"};
	double cost[] = {1000,1000,1000,1000,1000,1200,1200,1200,1200,1200,1500,1500,1500,1500,1500,1300,1300,1300,1300,1300,1200,1200,1200,1200,1200,1000,1000,1000,1300,1300,1300,999,999,1199,1199};
	const int id[] = {301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,323,325,326,327,328,329,330,331,332,333,334,335};

	cout<<left;
	cout<<"\n\n\t=================================================================================="<<endl;
	cout<<setw(3)<<"\t||"<<setw(5)<<"Product ID\t\tProduct Name\t\t\t\t\tPrice\n"<<setw(3)<<"\t||"<<endl;

	int r;
	for(r=0; r<=34; r++){
        cout.setf(ios::left,ios::adjustfield);
		cout<<setw(3)<<"\t|| "<<setw(10)<<id[r]<<setw(55)<<item[r];
		cout.setf(ios::right,ios::adjustfield);
		cout<<setw(10)<<"Php "<<cost[r]<<endl;
	}
	cout<<"\t=================================================================================="<<endl;
	int pid, quan;
	double a,cosst;

	cout<<"\n\tWhat would you like to buy? (Enter Product ID): ";
	cin>>pid;

	if(pid>335||pid<=300)
		exit();
	else
		cout<<"\n\tHow many pcs of "<<item[pid-301]<<" would you want to buy?";
		cin>>quan;
		a = (quan*cost[pid-301]);
		cosst+=a;

	return cosst;
}

double hnb()
{
	system("cls");
	system("color 1F");
	string item[] = {"Conditioning Make-up Remover (120mL)","Creamy Foam Cleanser (120g) ","Perfecting Toner (120mL)","Gentle Milk Cleanser (120mL) ","Vitalizing Serum (28g)","Hydrating Eye Essence (15g) ","Hydrating + Lifting Sheet Mask (3 masks) ","Protective Day Lotion (30mL)","Protective Day Cream (28g)","Replenishing Night Gel (28g) ","Replenishing Night Cream (28g)","Deluxe Combination /Oily pack","Deluxe Dry/Sentsitive Pack","Nano Silver","TPCKTopCock Silver","Original Frozen Collagen 2 in 1","Pronicy (1 pair pods)","Frozen Collagen and Detox","Kokando Byarakku Tabs","Frozen Collagen with Glutathione","Daiso Diet Supplement","Orig Frozen Detox 2 in 1","The CellSentials","Mini CellSentials","Usanimals","Proflavanol C100","CoQuinone 30","Biomega","MagneCal D","Procasa","Visionex","Hepasil DTX","USANA Probiotic","Proglucamune","Poly C" };
	double cost[] = {1600,2050,2050,2050,3000,3000,1450,2200,2200,2200,2200,13200,13200,800,398,399,39,186,83,249,66,223,3900,1150,1300,3150,3400,2200,1900,2550, 2700, 2900, 1750, 2200,1450};
	const int id[] = {401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424,425,426,427,428,429,430,431,432,433,434,435};

	cout<<left;
	cout<<"\n\n\t=================================================================================="<<endl;
	cout<<setw(3)<<"\t||"<<setw(5)<<"Product ID\t\tProduct Name\t\t\t\t\tPrice\n"<<setw(3)<<"\t||"<<endl;

	int r;
	for(r=0; r<=34; r++){
        cout.setf(ios::left,ios::adjustfield);
		cout<<setw(3)<<"\t|| "<<setw(10)<<id[r]<<setw(55)<<item[r];
		cout.setf(ios::right,ios::adjustfield);
		cout<<setw(10)<<"Php "<<cost[r]<<endl;
	}
	cout<<"\t=================================================================================="<<endl;

	int pid, quan;
	double a,cosst;

	cout<<"\n\tWhat would you like to buy? (Enter Product ID): ";
	cin>>pid;

	if(pid>435||pid<=400)
		exit();
	else
		cout<<"\n\tHow many pcs of "<<item[pid-401]<<" would you want to buy?";
		cin>>quan;
		a = (quan*cost[pid-401]);
		cosst+=a;

	return cosst;
}

double technology()
{
	system("cls");
	system("color 0A");
	string item[] = {"Apple Iphone 11 (Red)","Apple Iphone 11 Pro Max (Gray)","Realme 5 Pro (Blue)","Realme 5 Pro (Green)","Realme 5i (Green)","Realme 5i (Blue)","Realme X2 Pro (Blue)","Realme X2 Pro (White)","Realme X50 5G (Blue)","Realme X50 5G (White)","Realme XT (Blue)","Realme XT (White)","Samsung Galaxy A71 (Black)","Samsung Galaxy A71 (White)","Vivo S1 Pro (Red)","Vivo S1 Pro (White)","Vivo V17 Pro (Black)","Vivo V17 Pro (White)","Fruit Silicone Case for Huawei Nove 5T/Nova3i/P30/P20","Gradient Pink Blue Heart Case for Iphone 11 Pro","Spongebob Phone Case for Iphone 6s/8/X/Xs","Stitch Phone Case for OPPO F11/F9 Pro/F1S/A39","Sulley/Mike/Hello Kitty Phone Case for Iphone 6+/7/X","Transparent 3D Bear Case for Vivo Y91C/S1 Pro/V17","BOSE Wireless Earphone","JBL Wireless Headphone","Redmi Airdots Wireless Earphone","ROMOSS Powerbank 10400mAh","ROMOSS Powerbank 20000mAh" };
	double cost[] = {40300,59000,9990,9990,6890,6890,12000,12000,21950,21950,8000,8000,21990,21990,15000,15000,18500,18500,60,195,70,80,100,195,3600,3200,2500,950,1400};
	const int id[] = {501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529};

	cout<<left;
	cout<<"\n\n\t=================================================================================="<<endl;
	cout<<setw(3)<<"\t||"<<setw(5)<<"Product ID\t\tProduct Name\t\t\t\t\tPrice\n"<<setw(3)<<"\t||"<<endl;

	int r;
	for(r=0; r<=28; r++){
        cout.setf(ios::left,ios::adjustfield);
		cout<<setw(3)<<"\t|| "<<setw(10)<<id[r]<<setw(55)<<item[r];
		cout.setf(ios::right,ios::adjustfield);
		cout<<setw(10)<<"Php "<<cost[r]<<endl;
	}
	cout<<"\t=================================================================================="<<endl;

	int pid, quan;
	double a,cosst;

	cout<<"\n\tWhat would you like to buy? (Enter Product ID): ";
	cin>>pid;

	if(pid>529||pid<=500)
		exit();
	else
		cout<<"\n\tHow many pcs of "<<item[pid-501]<<" would you want to buy?";
		cin>>quan;
		a = (quan*cost[pid-501]);
		cosst+=a;

	return cosst;
}

void delivery(double total) //Displaying the Total Amount to be Paid by the customer
{
	system("cls");
	system("color 1E");
	cout<<"\n\t||\tTOTAL COST IS: "<<total<<" Pesos ";
	return;
}

void details(string adrs, string name, string age, string cont, string nick) //Details for Delivery
{
	int check=0;
    int i=0;

	//capitalizing every 1st letter of word
    while(adrs[i]){
        if(check==0){
            adrs[i]=toupper(adrs[i]);
            check=1;
        }else if(isspace(adrs[i]))
            check=0;
        i++;
    }

    int see=0;
    int y=0;

    //capitalizing every 1st letter of word
	while(name[y]){
        if(see==0){
            name[y]=toupper(name[y]);
            check=1;
        }else if(isspace(name[y]))
            see=0;
        y++;
    }

    int look=0;
    int l=0;

    //capitalizing every 1st letter of word
	while(nick[l]){
        if(look==0){
            nick[l]=toupper(nick[l]);
            look=1;
        }else if(isspace(nick[l]))
            look=0;
        l++;
    }

    cout<<"\n\t||\n\t||\tTHANK YOU FOR SHOPPING, "<<nick<<"!\n\t||\tPlease wait for a message on the delivery date, 3-7 days after ordering.";
    cout<<"\n\t||\n\t||\tTo be delivered at:";
	cout<<"\n\t||\t"<<adrs<<endl;
	cout<<"\t||\t"<<name<<", "<<age<<", "<<cont;

	int x;
	cout<<"\n\t||\n\t||\tWould you like to make another transaction? \n\t||\t1: YES or 0: NO ";
	cin>>x;
	x=yesno(x);

	if (x==0)
	{
		cout<<"\n\t\tTHANK YOU FOR USING ITE ONLINE SHOPPING!";
		}
	else if (x==1)
	{
		main();
		}

	return;
}

void exit()
{
	cout<<"\n\tTHE PROGRAM WILL EXIT. THANK YOU FOR USING OUR ONLINE ORDERING SYSTEM.";

	return;
}
