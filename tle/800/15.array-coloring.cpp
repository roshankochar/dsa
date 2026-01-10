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
        int n, temp, cntOdd=0;
        cin>>n;
        while(n--){
            cin>>temp;
            if(temp&1) cntOdd++;
        }
        if(cntOdd&1) cout<<"no";
        else cout<<"yes";
        cout<<endl;
    }
    return 0;
}