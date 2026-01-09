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
        int n, m = -1;
        cin>>n;
        int a[n];
        vector<int> b,c;
        for(int i = 0 ; i < n; i++){
            cin>>a[i];
            m = max(m,a[i]);
        }
        for(int e : a){
            if(e == m) c.push_back(e);
            else b.push_back(e);
        }
        if(!b.size()){
            cout<<-1<<endl;
            continue;
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int e : b) cout<<e<<" ";
        cout<<endl;
        for(int e : c) cout<<e<<" ";
        cout<<endl;
    }
    return 0;
}