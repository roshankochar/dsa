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
    bool ls = false,rs = false;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s2 = s;
        bool poss1 = true, poss2=true;
        for(int i = 0; i <n; i++){
            ls = false;
            rs = false;
            if(s[i] == '1'){
                if(i == 0) ls = true;
                if(i == n -1) rs = true;

                if((!ls && s[i-1] == '0') && (!rs && s[i+1] == '0')){
                    s[i-1] = 'r';
                    s[i+1] = 'l';
                    ls = true;
                    rs = true;
                }
                else if((!ls && s[i-1] == 'r') && (!rs && s[i+1] == '0')){
                    s[i+1] = 'l';
                    ls = true;
                    rs = true;
                }
                else if(!ls && s[i-1] == '0'){
                    s[i-1] = 'l';
                    ls = true;
                }
                else if(!rs && s[i+1] == '0'){
                    s[i+1] = 'r';
                    rs = true;
                }
                if(!ls && (s[i-1] == '1' || s[i-1] == 'l')) ls = true;
                if(!rs && (s[i+1] == '1' || s[i+1] == 'r')) rs = true;

                // cout<<ls<<' '<<rs<<endl;    
                // cout<<s<<endl;
                if(!(ls && rs)){
                    poss1 = false;
                    break;
                }

            }
        }
        s = s2;

         for(int i = n-1; i >= 0; i--){
            if(poss1) break;
            ls = false;
            rs = false;
            if(s[i] == '1'){
                if(i == 0) ls = true;
                if(i == n -1) rs = true;

                if((!ls && s[i-1] == '0') && (!rs && s[i+1] == '0')){
                    s[i-1] = 'r';
                    s[i+1] = 'l';
                    ls = true;
                    rs = true;
                }
                else if((!ls && s[i-1] == '0') && (!rs && s[i+1] == 'l')){
                    s[i-1] = 'r';
                    ls = true;
                    rs = true;
                }
                else if(!ls && s[i-1] == '0'){
                    s[i-1] = 'l';
                    ls = true;
                }
                else if(!rs && s[i+1] == '0'){
                    s[i+1] = 'r';
                    rs = true;
                }
                if(!ls && (s[i-1] == '1' || s[i-1] == 'l')) ls = true;
                if(!rs && (s[i+1] == '1' || s[i+1] == 'r')) rs = true;

                // cout<<ls<<' '<<rs<<endl;    
                // cout<<s<<endl;
                if(!(ls && rs)){
                    poss2 = false;
                    break;
                }

            }
        }
        // cout<<"----"
        if(poss1 || poss2){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}