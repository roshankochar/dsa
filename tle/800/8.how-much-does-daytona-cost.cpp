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
        int n,k;
        cin>>n>>k;
        bool found = false;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
            if(v[i] == k) found = true;
        }
        if(found) cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
    return 0;
}