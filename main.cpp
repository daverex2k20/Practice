#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){

int num1;
int num2;
char op;

cout<<" \n";
cout<<"Calculator"<<endl;
cout<<" \n";
cout<<"Enter your first number \n";
cout<<" \n";
cin>>num1;
cout<<" \n";
cout<<"Enter Operator ex: + , - , / , * \n";
cout<<" \n";
cin>>op;
cout<<" \n";
cout<<"Enter your second number \n";
cout<<" \n";
cin>>num2;
cout<<" \n";


switch(op){
    case '+':
    cout<<"Your answer is "<<num1+num2<<endl;
    break;

    case '-':
    cout<<"Your answer is "<<num1-num2<<endl;
    break;

    case '*':
    cout<<"Your answer is "<<num1*num2<<endl;
    break;

    case '/':
    cout<<"Your answer is "<<num1/num2<<endl;
    break;

    default:
    cout<<"... invalid operator input ( + , - , * , / )";
}



    return 0;
}