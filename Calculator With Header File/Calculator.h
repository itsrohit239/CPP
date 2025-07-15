#include <iostream>

 using namespace std;

 inline void show(){	
 	 
 	 double A,B;
 	 char Operator;
 	 
 	 cout<<"Enter First Value Of A: ";
 	 cin>>A;
 	 cout<<"Enter Second Value Of B: ";
 	 cin>>B;
 	 cout<<"Enter Operator(+,-,*,/): ";
 	 cin>>Operator;

 
 switch(Operator) {
 	case '+':
 	 cout<<"Addition: "<<A+B;
     break;
 		
 	case '-':
	 cout<<"Substraction: "<<A-B;
	 break;
	 
	case '*':
	 cout<<"Multiplication: "<<A*B;
	 break;
	 
	case '/':
	 if(B!=0){
	 	cout<<"Division: "<<A/B;
	 }else{
	 	cout<<"Invalid Division!!";
	 break;
}
	default:
	 cout<<"Error!!.. invalid Operator";  	
  
 }
 }
