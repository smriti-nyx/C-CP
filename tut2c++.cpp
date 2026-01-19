
#include <iostream>
#inclue <vector>
using namespace std;

  
 
  int main() {
     //typedef - reserved keyword used to create additional name (alias) for another data type
//          new identifier for a  new data type 
//           helps with readibility and reduces typos 

// using command 


 // typedef std::vector < std::pair< std:: string << int > pairlist_t ;// _t is a default way to name new data type names. 
typedef std:: string txt_t;
  typedef int num_t;
  num_t age = 24;
  txt_t name = "Sera";
  cout << age << "\n";
  cout << "My name is " << name << "\n";
  
  
  
  

  return 0;
}
