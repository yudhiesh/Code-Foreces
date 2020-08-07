#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n, x =0;
  cin >> n;
  for (int i = 0; i < n; ++i){
    string s;
    cin >> s;
    if(s[0] == '+')
      x++;
    if(s[0] == '-')
      x--;
    if(s[2] == '+')
      x++;
    if(s[2] == '-')
      x--;
    
  }
  cout << x << endl;

  return 0;
}


