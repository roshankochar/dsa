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
        int n,temp,ans=0;
        cin>>n;
        for(int i = 0; i < n-1; i++){
            cin>>temp;
            ans+=temp;
        }
        cout<<-1*ans<<endl;
    }
    return 0;
}