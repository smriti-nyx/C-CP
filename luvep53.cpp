// GCD & LCM 


#include <bits/stdc++.h>
using namespace std;


	// num1 = a , num2  = b and LCM = a * b /gcd 
	int gcd(int a  ,int b ){
    if ( a%b == 0 )  return b ;
	     if ( b  == 0 )  return a ;
	    return gcd (  b ,  a% b );
	       
	    }
	int main(){
	cout<<  " GCD is ; "<<gcd (12, 18 )<<"\n";
	cout<< "LCM is : "<< 12 * 18 / gcd ( 12, 18) << "\n";
	

}
