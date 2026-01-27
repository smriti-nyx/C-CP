#include<bits/stdc++.h>
using namespace std;



int main(){

//iterating over an array 

  std::string kids[] = {"Millie", "Sadie", "Caleb", "Finn","Noah"};
// cout<<kids[2]<<"\n";
// cout<<kids[4] <<"\n";
  //cout<<kids[0] <<"\n";

  for (int i = 0; i<4; i++){
    cout<<kids[i]<<"\n";
  }


 

  for (int i = 0; i<sizeof(kids)/sizeof(std::string); i++){
    cout<<kids[i]<<"\n";
  }

  for (int i = 1; i<=12; i++){
    cout<<i<<"\n";
  }


  //for each loop = loop that eases the traversal over an iterable data set.
   std::string kids[] = {"Millie", "Sadie", "Caleb", "Finn","Noah"};
   for(std::string kid :kids){
    cout<<kid<<"\n";
  }


    return 0;

}