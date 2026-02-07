#include <bits/stdc++.h>
using namespace std;

int main() {
	 
	 //POINTERS  - stores address.
int x = 4;
int *p_x = &x;
cout<<"Add of x:"<<&x<<"\n";
cout<<"val at p_x:"<<p_x<<"\n";
 cout<<"val at *p_x:"<<*p_x<<"\n";


 *p_x = 5;
 cout<<"x:"<<&x<<"\n";
  cout<<"val at p_x :"<<p_x<<"\n";
  cout<<"val at p_x +1  :"<<p_x +1<<"\n";
  
  
  //int **p_p_x = &p_x;
 //cout<<"Add of x:"<<&x<<"\n";
	 

}
