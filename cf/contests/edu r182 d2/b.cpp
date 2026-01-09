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
        int n;
        cin>>n;
        vector<int> v(n+1);
        vector<bool>f(n+1, false);
        int minz = INT_MAX, maxz = -1, countz = 0;
        int minl = INT_MAX, maxl = -1;

        for(int i = 1; i <= n ; i++){
            cin>>v[i];
            if(v[i] == 0){
                minz = min(minz, i);
                maxz = max(maxz, i);
                countz++;
            }
            else{
                f[v[i]] = true;
                if(v[i] != i){
                    minl = min(minl, i);
                }
            }
        }
        for(int i = n; i > 0; i--){
            if(v[i] > 0 && v[i] != i){
                maxl = i;
                break;
            }
        }

        if(minl == INT_MAX && maxl == -1 && (countz <= 1)){
            cout<<0<<endl;
            continue;
        }
        if(countz == 1){
            for(int i = 1; i <= n; i++){
                if(v[i] == 0){
                    if(f[i] == false){
                        // cout<<maxl-minl+1<<endl;
                        minz = INT_MAX;
                        maxz = -1;

                    }
                }
            }
        }
        if(minl == maxl){
            // cout<<max(maxl,maxz)-min(minz,minl)<<endl;
            // cout<<maxz-minl+1<<endl;
            cout<<max(maxz-minl+1, max(maxz-minz+1, minl-minz+1))<<endl;
            // cout<<2<<endl;
            continue;
        }
        int lef = min(minz,minl);
        int rig = max(maxz,maxl);

        cout<<rig-lef+1<<endl;

    }
    return 0;
}