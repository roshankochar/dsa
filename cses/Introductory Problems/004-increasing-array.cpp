#include<iostream>
using namespace std;
int main(){
    long long int n, x, largestYet = 0, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(x < largestYet){
            ans += largestYet - x;
        } else {
            largestYet = x;
        }
    }
    cout<< ans << endl;
    return 0;
}