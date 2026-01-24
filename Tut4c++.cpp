#include<bits/stdc++.h>
using namespace std;
int main(){
    double num1;
  double num2;
  char op;
  double result;
 
  
  
//logical operators 
  //&& = check if two conditions are true 
  // || = check  if atleast one of the two conditions is true 
  //!=  reverses the logical  state of its operand  .

  int temp;
  cout <<"Enter the temperature: \n";
  cin>> temp;
  if (temp > 0 && temp < 30){
    cout<<"The temperature is good \n";
    
  }
  else {
    cout<< "The temperature is not good\n";
    
  }

  
return 0;
}