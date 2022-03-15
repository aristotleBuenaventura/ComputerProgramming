#include <iostream>

using namespace std;

int divide(int,int);
int num1=5,num2=3,num3=6,div=0;
int main() {
	// main function
	cout << "\tTECHNOLOGICAL INSTITUTE OF THE PHILIPPINES QUEZON CITY" << endl;
	cout << "\t\tFirst Semester S.Y. 2020-2021"<< endl;
	cout << "\t\tITE001 Computer Programming 1\n"<< endl;
	cout << "Name: " << "Aristotle" << "\t\tDate: " << "1/6/2021" << endl;
	cout << "Program: " << "BSIT" << "\t\tSection: " << "IS11S1" << endl;
	cout << "Assignment 4.1 Returning Values from Function\n"<< endl;

	div=divide(num3,num1);
	cout << div;
	
}

int divide(int num3, int num1) {
	div = num3/num1;
	
	return div;
}
