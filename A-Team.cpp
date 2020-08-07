#include <iostream>

using namespace std;

int main(){
  int n, p1,p2,p3, count =0;
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> p1 >> p2 >> p3;
    if(p1 + p2 + p3 >= 2){
      count++;
    }
  }
  cout << count << endl;

  return 0;
}
