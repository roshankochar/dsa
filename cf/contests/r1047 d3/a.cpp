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
        int k,x;
        cin>>k>>x;
        while(k--){
            x*=2;
        }
        cout<<x<<endl;
    }
    return 0;
}