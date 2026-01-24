
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  
 
  int main() {
 
//using - used as an alternative to typedef coz it is also easier to work with templates 


using txt_t = std:: string;
txt_t state = "Ohio";
cout << " I was born and brought up in " << state<< "\n";

  int students = 21;
 // students = students +1;
 // students+=1;
 // students++;

 // students = students -1;
  //students-= 2;
  //students --;

 // students  = students *2;
 // students *=4;

  int bats = 4 ;
  double remainder = bats % 2;
  double remainder1 = bats % 3;

  
  cout << students <<"\n";
cout << remainder<<"\n";
  cout << remainder1<<"\n";

  
//priority  is parenthesis > multiplication or division > addition and subtraction.
  
//Arithmetic operators 

//Addition
//switches 


//type conversion 
//type conversion : conversion of one data type into another .
  //implicit = automatic 
  // explicit = precede value with new data type.
   double x = (int) 3.14;
   char y= 100; //ascii value will be applied 
   int questions = 8;
  int attempted_questions = 10;
  double score = (double) questions /(double) attempted_questions *100;
 

cout <<x<< "\n";
   cout <<y<< "\n";
    cout<< score<< " % \n"; 

     //cout <<(extraction operator)
  //cin >>(insertion operator )
  int age ;
std:: string name;
  cout << "What's your name ?" <<"\n"; 
  cin >> name;
   cout <<"Hello "<< name << "\n";
    cout <<"What's your age ? :" <<"\n";
  cin>> age;
  cout<<"You're " << age << " years old. \n" ;

  // useful math related problems 
  double  x = 3;
  double y = 4;
  double pie = 3.14;
  double z ;
  double t;
   double b;
   double r ;
  
// t = pow(2,3 );
//  a = sqrt(100);
 // b = abs(-3);
  //r = round(pie);
//z  = std ::max(x,y);
//u = std:: min(x,y);
//t = ceil(3.14);



 //cout << t<<"\n"; 
   //cout << a<<"\n"; 
    // cout << b <<"\n"; 
 //cout<< z << "\n";
// cout<< u << "\n";

 double b;
    double l;
   double h;
    cout <<"Enter the breadth of the traingle:" << "\n";
    cin>> b;
    cout<< "Enter the length of the triangle;"<< "\n";
    cin>> l;
    h = sqrt(pow(l,2) + pow(b,2)); 
    cout <<h << "\n";
    cin>> h;

    //if else statements 
  int age;
  cout<<"Enter your age: \n";
  cin>>age;
  
  if(age >=18) {
    cout<< "You're an adult .\n";
  }
  else {
    cout<< "You're not an adult. \n";
  }
 

  

  



  
  

  return 0;
}
