#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    int ans = 0;
    set<int> s;
    for(int i = 0; i < n; i++) {
        if(s.find(arr[i]) == s.end()) {
            s.insert(arr[i]);
            ans++;
        }
    }
    cout<< ans << endl;
    return 0;
}