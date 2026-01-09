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
        bool sorted = true;
        cin>>n>>k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
            if(i > 0 && v[i] < v[i-1]){
                sorted = false;
            }
        }
        if(sorted || k >= 2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}