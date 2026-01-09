//run the code using the command - g++ -std=c++17 <file-name>.cpp

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>
#define pii pair<int,int>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[n];
        for(int i = 0; i < n; i++){
            cin>>b[i];
        }
        vector<int> ans;
        ans.push_back(b[0]);
        for(int i = 1; i < n; i++){
            if(b[i-1] > b[i]) ans.push_back(b[i]);
            ans.push_back(b[i]);
        }
        cout<<ans.size()<<endl;
        for(int a : ans){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}