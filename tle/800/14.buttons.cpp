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
        int a,b,c;
        cin>>a>>b>>c;
        if(c&1){
            if(b > a) cout<<"Second";
            else cout<<"First";
        }
        else{
            if(a > b) cout<<"First";
            else cout<<"Second";
        }
        cout<<endl;
    }
    return 0;
}