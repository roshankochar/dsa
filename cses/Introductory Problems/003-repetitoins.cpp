#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans = 1, n = s.length(), temp = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            temp++;
        } else{
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    cout<<ans<<endl;
    return 0;
}