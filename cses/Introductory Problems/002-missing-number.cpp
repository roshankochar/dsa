#include<iostream>
using namespace std;
int main(){
    long long int n, x;
    cin >> n;
    long long int sum = (n * (n + 1)) / 2;
    for(int i = 0; i < n -1; i++){
        cin>>x;
        sum-=x;
    }
    cout << sum << endl; 
    return 0;
}