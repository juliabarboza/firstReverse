#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) { 

    string str2 = "";
  for(int i = str.size(); i >=0; i-- )
  {
      str2 += str[i];
  }
  return str2; 
            
}

int main() { 
  
  // keep this function call here
  cout << FirstReverse(gets(stdin));
  return 0;
    
}
