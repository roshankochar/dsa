//run the code using the command - g++ -std=c++17 <file-name>.cpp

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#define pii pair<int,int>

using namespace std;

bool check(map<int,int> &mp, int n){
    int sum = 0;
    for(auto [first,second] : mp){
        if(second % first)
            return false;
        sum += second;
    }
    return (sum == n);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        map<int,int> use;
        int cur = 1;
        // set<int> s;
        for(int i = 0; i < n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(!check(mp,n)){
            cout<<-1<<endl;
            continue;
        }
        for(int a : v){
            if(mp[a] % a == 0){
                use[a] = cur;
                cur++;
            }
            cout<<use[a]<<" ";
            mp[a]--;
        }
        // for(auto [first,second] : mp){
        //     if(second % first == 0){
        //         use[first] = cur;
        //         cur++;
        //     }
        //     cout<<use[first]<<" ";
        // }
        cout<<endl;
    }
    return 0;
}