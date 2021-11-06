#include <iostream>
using namespace std;

int main() {
  string input;
  long long count=1;
  long long ma=1;
  getline(cin,input);
  for(int i=1; i<input.length(); i++){
    if(input[i] == input[i-1]){
      count++;
      ma = max(count,ma);
    }else if(input[i] != input[i-1]){
      ma= max(ma,count);
      count=1;
    }
  }
  cout<< ma;
}
