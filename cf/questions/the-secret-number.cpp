#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>
#define pii pair<int,int>

using namespace std;
int main(){
    //https://codeforces.com/contest/2132/problem/B
    int t;
    long long int n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long int> ans;
        for(int i = 1; pow(10,i) + 1 <= n ; i++){
            if(n % (1 + (long long int)pow(10,i)) == 0){
                // cout<<n / (1 + (long long int)pow(10,i))<<endl;
                ans.push_back(n / (1 + (long long int)pow(10,i)));
            }
        }
        // cout<<ans[1]<<endl;
        if(ans.size() == 0){
            cout<<0;
        }
        else{
            cout<<ans.size()<<endl;
            // sort(ans.begin(),ans.end());
            for(int i = ans.size()-1; i >= 0; i--){
                cout<<ans[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}