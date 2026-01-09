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
        long long int a,b;
        cin>>a>>b;

        if((a&1) && (b&1)){
            cout<<(a*b)+1<<endl;
            continue;
        }

        if(a&1){
            if((b/2)&1){
                cout<<-1<<endl;
                continue;
            }
            cout<<(a*(b/2)) + 2 <<endl;
            continue;
        }

        if(b&1){
            cout<<-1<<endl;
            continue;
        }

        cout<<(a*(b/2)) + 2 <<endl;
    }
    return 0;
}