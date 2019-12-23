//arthemetic operators
 #include<iostream>
 
 using namespace std;
 
 int main()
 {
 	int num1, num2;
 	double add,divide, sub, modulo,mult;
 	cout<<"Enter first number";
 	cin>>num1;
 	cout<<"Enter second number";
 	cin >>num2;
 	//arthemetic calcutions
 	add= num1+num2;
 	divide=num1/num2;
 	sub= num1-num2;
 	modulo =num1%num2;
 	mult =num1*num2;
 	cout<<"Addition of two numbers is"<<" " <<add<<endl;
 	cout<<"Division of two numbers is"<<" " <<divide<<endl;
 	cout<<"Substraction of two numbers is"<<" " <<sub<<endl;
 	cout<<"Modulos of two numbers is"<<" " <<modulo<<endl;
 	cout<<"multiplication of two numbers is"<<" " <<mult<<endl;
 	
 }
