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
        int n,j;
        cin>>n;
        vector<int> v(n*2);
        j = n;
        for(int i = 0; i <n; i++){
            cout<<j--<<" ";
        }
        cout<<n<<" ";
        j = 1;
        for(int i = n+2; i <= n*2; i++){
            cout<<j++<<" ";
        }
        cout<<endl;
    }
    return 0;
}