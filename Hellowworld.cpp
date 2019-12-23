// C++ program to sizes of data types 

#include<iostream> // this for input and output
using namespace std; //standard libraries 

int main() // this a function where executions starts
{ 
	cout << "Size of char : " << sizeof(char)<< " byte" << endl;  // this for displaying the stream
	cout << "Size of int : " << sizeof(int) 
	<< " bytes" << endl; 
	cout << "Size of short int : " << sizeof(short int) 
	<< " bytes" << endl; 
	cout << "Size of long int : " << sizeof(long int) 
	<< " bytes" << endl; 
	cout << "Size of signed long int : " << sizeof(signed long int) 
	<< " bytes" << endl; 
	cout << "Size of unsigned long int : " << sizeof(unsigned long int) 
	<< " bytes" << endl; 
	cout << "Size of float : " << sizeof(float) 
	<< " bytes" <<endl; 
	cout << "Size of double : " << sizeof(double) 
	<< " bytes" << endl; 
	cout << "Size of wchar_t : " << sizeof(wchar_t) 
	<< " bytes" <<endl; 
	
	return 0; 
} 

