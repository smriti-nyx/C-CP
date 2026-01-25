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

    std:: string name;

 cout<<"What is your name ? \n";
  std::getline(std::cin , name); // reads the words after spaces too.
  
  cin>> name;

  cout<< " hey "<< name <<"\n";

   //empty , clear, append ,length
  std:: string name ;
  cout<<"Enter you name : \n";
  cin>>name;
  if (name.empty()){
    cout<<"You did not enter a name ";
  }
  else{
    cout<< "Hey "<< name<< "\n";
  
  }
  name.clear();
  cout<<"Hello " << name << "\n";

   //array - a data structure that can hold multiple values
  //values are accessed by index no
  //kind of like a variable that holds multiple values

  std::string car[] = { "mary" , "larry", "jane", "ellie", "naura"};
  
car[1 ]= "neva";
    cout<<car[0]<< "\n";
    cout<<car[1]<< "\n";
  


return 0;
}