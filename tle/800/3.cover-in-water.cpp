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
        string s;
        cin>>n;
        cin>>s;
        int dots = 0;
        bool has3 = false;
        for(int i = 1; i < n-1 ; i++){
            if(s[i] == '.'){
                dots++;
                if(s[i-1] == '.' && s[i+1] == '.'){
                    has3 = true;
                    break;
                }
            }
        }
        if(has3){
            cout<<2<<endl;
            continue;
        }
        if(s[0] == '.') dots++;
        if(s[n-1] == '.' && n > 1) dots++;

        cout<<dots<<endl;
    }
    return 0;
}