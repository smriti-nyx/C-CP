#include<bits/stdc++.h>
using namespace std ;
int main() {


    //increasing order of precedence of data types 
// double > float> ll int > long int > int > characters 

//note:double uses twice the memory of float.

//the operation is performed and the output is given out in the data type of the higher data type , for ex

cout<<7/2 <<"\n";
cout<<7/2.0<<"'\n"; // 3.5 will be printed since double has higher priority than //int 


double a = 3/2;
cout<<a;
//ans will come out as 1 and not 1.5 since 3/2 gives 1 as answer and then it got stored in the double , so 1.5 wa snever stored in double and hence the answer.


//-10^9 < int < 10^9
//-10^12 < long int  < 10^12
//-10^18 < long long int < 10^18




int a = 100000;
int b = 100000;
int c = a*b;
cout<<c<<"\n"; //value overflowed since c output exceeds the range of int values 
int mx = INT_MAX; //in-defined variable ; prints the max value of an integer.
cout<<mx;

//intMIN<int<intMAX
//     <<+1<<
//     >>-1>>



long int x = 100000;
long int y = 100000;
long int z = x*y;
cout<<z; // long int lies in the range and hence the predicted vlalue is printed .



    return 0;
}