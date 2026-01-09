//run the code using the command - g++ -std=c++17 <file-name>.cpp

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>
#define pii pair<int,int>

using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        if(v[n-1] != x){
            v.push_back(v[n-1] + ((x - v[n-1])*2));
        }
        v.insert(v.begin(),0);
        int ans = 1;
        for(int i = v.size()-1; i > 0; i--){
            ans = max(ans, v[i] - v[i-1]);
        }
        cout<<ans<<endl;

    }
    return 0;
}