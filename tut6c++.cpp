#include<bits/stdc++.h>
using namespace std;



void hbd(){
  cout<<"Happy birthday to you \n";
  cout<<"Happy birthday to you \n";
  cout<<"May god bless you\n\n"; //pay attendtion to extra line character here for creating a new para when  //the fucntion is recalled
}

void tbh(std::string name, int age ){
  cout<<"Be honest "<< name<< " You are" << age<< "\n";
  
}

void square(double result ){
 
  cout<<"The sqaure is : "<< result<< "\n";
  
}


int main(){
// function- a block of reusable code
  
  
hbd();
  hbd();
  hbd();


  std::string name;
  int age;
  cout<<"Enter your name: \n";
 cin>> name;
  cout<<"Enter your age: \n";
  cin>>age;
  tbh(name, age);



   double length;
  double result ;
 //result wont be written here
  cout<<"Enter the length : \n";
  cin>>length;
   result = length * length ; //read length first and then compute or define result .

  square(result);

  


    return 0;
}

