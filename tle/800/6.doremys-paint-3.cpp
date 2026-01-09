//run the code using the command - g++ -std=c++17 <file-name>.cpp

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#define pii pair<int,int>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size() == 1){
            cout<<"yes"<<endl;
            continue;
        }
        if(mp.size() > 2){
            cout<<"no"<<endl;
            continue;
        }
        int count = mp.begin()->second;
        if(n%2){
            if(count == (n/2) || count == (n/2) + 1){
                cout<<"yes"<<endl;
            } else{
                cout<<"no"<<endl;
            }
        }else{
            if(count == (n/2)) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
    return 0;
}

/**
 * 1 2 1 2 1
 * 1 2 1 2 1 2
 * 1 2 3 
 */