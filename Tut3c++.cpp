#include <bits/stdc++.h>
using namespace std;
int main() {

//switch - alternative to using many else if statemnts 
  // compare one value against matching cases.

  int month;
  cout<< "Enter the month: \n"; 
  cin>> month;

  switch(month){
    case 1 : 
    cout<< "It is January";
    break;
    case 2 : 
    cout<< "It is February";
    break;
    case 3 : 
    cout<< "It is March";
    break;
    case 4 : 
    cout<< "It is April";
    break;
    case 5: 
    cout<< "It is May";
    break;
    case 6:
    cout<< "It is June";
    break;
    case 7: 
    cout<< "It is July";
    break;
    case 8: 
    cout<< "It is August";
    break;
    case 9: 
    cout<< "It is September";
    break;
    case 10: 
    cout<< "It is October";
    break;
    case 11: 
    cout<< "It is November";
    break;
    case 12: 
    cout<< "It is December";
    break;
   default:
    cout<<"Enter a valid number";
  }


  double num1;
  double num2;
  char op;
  double result;

  double num1;
  double num2;
  char op;
  double result;
 
  
  
cout<< "*********CALCULATOR*********\n";
  cout<<"Enter a number :\n";
    cin>> num1;
  cout<<"Enter another number:\n";
  cin>> num2;
  cout<<"Choose either( +,-,*,/) \n";
  cin>> op;
switch(op) {
  case '+':
  result = num1+ num2;
     cout << "Here is your result :"<< result<< "\n";
  break ;
  case '-':
  result = num1 - num2;
     cout << "Here is your result :"<< result<< "\n";
  break;
  case '*':

  result = num1* num2;
     cout << "Here is your result :"<< result<< "\n";
  break;
  case '/' :
  result = num1/num2;
     cout << "Here is your result :"<< result<< "\n";
  break;
  default :
  cout<< "Enter a valid operator\n";
  break;
 
}
  cout<<"******************\n";

  //ternary operator : replacment to to an if /else statemnet.
  // condition ? do if condition is true : do if it isn't.


  int num;
  cout<<"Enter a number: ";
    cin>> num;
  num % 2 == 0 ? cout<< "The entered number is even" : cout<< "The entered number is odd ";



  
 
  
  


  return 0;
}