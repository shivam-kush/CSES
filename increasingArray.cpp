#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a[n];
    for(int i =0 ; i <n; i++){
        cin >> a[i];
        }
    long long sum = 0;
    for(int j=0;j<n;j++){
        if(a[j]>a[j+1]){
            sum += abs(a[j]-a[j+1]);
            a[j+1]=a[j];
        }
    }
    cout<< sum;
}