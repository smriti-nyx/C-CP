//SCOPES

// if something (ex - a variable ) is defined in b/w the curly brackets , 
// the brackets create a new scope and here for ex, that variable cant be used outside the bracket .
#include<bits/stdc++.c>
using namespace std;


int a; //A GLOBAL VARIABLE , can be used anywhere in the enitire code, even inside the codes.


int main(){


    int n;
    cin>>n;
if(n %2 == 0){
    int x = 2
}

cout<<x; // here x wont be printed and "x was not defined in this scope" will bethe output


 //printing sum of digits of an input number
    int num;
    cin>> num;
   int digit_sum = 0;
    while(num> 0){
      int  last_digit = num % 10;
       digit_sum = digit_sum + last_digit;
      num = num /10;
    }
    cout<<digit_sum;


    //CONTINUE
    for(int i = 1; i<11 ; i++){
       if( i == 4){
           continue;
       }
       cout<<i<<"\n" ;
   }
 /*1
2
3
5
6
7
8
9
10*/

   //BREAK     
   
   for(int i = 1; i< 11; i++){
       if(i == 4){
           break;
       }
       cout<<i<<"\n";
   }
	
//1
//2
//3

    return 0;
}


//FOR LOOP 
//for( initialisation ; condition ; operation){
// } even the cout operation can be put in place of operations.
//break : you come out of the loop you are in 
//continue : that anwer is skipped but the loop is executed again for other outputs until all the sligible ones are printed .


