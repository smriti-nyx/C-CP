#include<bits/stdc++.h>
using namespace std;
int main(){
    //while loops, do while loops 
    std:: string name ;

  while(name.length() < 12){
    cout<<"Enter your name: \n";

      cin>> name;
  }
  cout<<"Your name is "<< name<< "\n";



  //for loops 
  for (int i = 1; i<=10; i++){
    cout<<"Happy new year \n";

  }


  //break = break out of a loop
  //continue = skip current iteration.

  for(int i = 1 ; i<=20; i++){
    if(i ==13){
    break;
  }
  cout<<i<<"\n";

  }


  for(int i = 1 ; i<=20; i++){
    if(i ==13){
    continue;
  }
  cout<<i<<"\n";

  }


  //nested loops 
  int columns ;
  int rows;
  char symbol;
  cout<<"Enter the no. of columns : \n";
  cin>> columns;

  cout<<"Enter the no. of rows : \n";
  cin>> rows;

  cout<<"Enter the symbol: \n";
  cin>> symbol;

  for( int i =1 ; i <= rows; i++){
    for(int j = 1; j<= columns;j++){
      cout<<symbol;
    }
    cout<<symbol <<"\n";
  }



  


  
  
return 0;

}