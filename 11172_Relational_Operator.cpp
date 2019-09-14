#include <iostream>
using namespace std;

int main(){
  int y;
  cin >> y;
  for(int q = 0; q < y; q++){
    int i;
    int j;
    cin >> i;
    cin >> j;
    if(i > j){
      cout << ">" << endl;
    }
    else if(j > i){
      cout << "<" << endl;
    }
    else{
      cout << "=" << endl;
     }
  }

}
