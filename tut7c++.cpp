#include<bits/stdc++.h>
using namespace std;

int searcharray( int array[], int size, int element );



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



  //get total ?? (pass array to a function)

  //search an array for an element.

  int nums[]= {1,2,3,4,5,6,7,8,9,10};
  int size = sizeof(nums)/sizeof(nums[0]);
  int index;
  int mynum;

  cout<<"Enter an elemnet to search for: "<<"\n";
  cin>>mynum;

  index = searcharray(nums,size,mynum);
  
  

  

 
//return - returns a value back to the spot where you called the encompassing fucntion.

  if (index!= -1){
    cout<< mynum<< " is at index " << index << "\n";
    
  }
  else{
    cout<<mynum<< " is not in the array \n";
  }



   //sorting of an array --
  //bubble sort - if the number on the right is smaller than the num on left , store the num in left in a temporary box and move the right number to the left nums position n so on. In this way and an ascending order series is received.







   
    
  }

    return 0;

}



int searcharray(int array[], int size, int element){

  for(int i =0 ;i<size; i++){
    if(array[i]== element){
      return i;
    }
  }
  return -1; // shows that nothing was found 
}