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
        int x,y;
        cin>>x>>y;
        if(x == 0 || y ==1){
            cout<<-1<<endl;
            continue;
        }
        if(y > x){
            cout<<2<<endl;
            continue;
        }
        if(x - y <=1){
            cout<<-1<<endl;
            continue;
        }
        cout<<3<<endl;
    }
    return 0;
}