#include <iostream>
using namespace std;

int main() {
  // cout << "Give n"<< endl;
  long long a;
  cin >> a;
  cout << endl;
  long long sum = a*(a+1)*0.5;
  int numbers[a-1];
  for(int i=0 ;i< sizeof(numbers)/sizeof(numbers[0]); i++){
    cin >> numbers[i];
    sum = sum - numbers[i];
  }
  cout << sum << endl;
}
