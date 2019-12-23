// program to test grades

#include<iostream>

using namespace std;

int main()
{
	int mark;
	cout<<"Enter your mark"<<endl;
	cin>>mark;
	
	if(mark>=70 && mark<= 100)
	{
		cout<<"pass" <<"  "<<"you get A";
		
	}
	else if(mark>= 60 && mark<= 69)
	{
		cout<<"pass"<<"  "<<"you get B+";
		
	}
	else if(mark >= 50 && mark<= 59)
	{
		cout<<"pass"<<"  "<<"you get B-";
	}
	else if(mark >= 40 && mark<= 49)
	{
		cout<<"pass"<<"  "<<"you get C";
	}
	else if(mark >= 30 && mark<= 39)
	{
		cout<<"Average"<<"  "<<"you get D";
	}
	else 
	{
		cout<<" you failed the examination wit an F grade";
	}
}
