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
        int n, minDiff = INT_MAX;
        bool unsorted = false;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(i > 0){
                if(a[i] < a[i-1]) unsorted = true;
                minDiff = min(minDiff, a[i]-a[i-1]);
            }
        }
        if(unsorted) cout<<0<<endl;
        else cout<<minDiff/2+1<<endl;
    }
    return 0;
}