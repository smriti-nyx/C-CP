
#include <iostream>
using namespace std;

  //namespace 
  namespace first {
    int x = 1 ;

  }
  namespace second {
    int x = 2 ;

  }

  using namespace std;
  int main() {
     // using namespace second ; (didnt work)
    int x= 10;
    string name = "Sera";  
    // due to. use of namespace std , std prefix isnt req anymore 

    cout << first::x << "\n";
     cout    << second::x <<"\n";
    cout << x ;
     cout << name << "\n";
  
  
  

  return 0;
}
