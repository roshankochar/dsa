#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

//refer https://cses.fi/problemset/model/1619/ for better solution
bool comp(pair<int,int> a, pair<int,int> b){
    return a.first<b.first;
}
int main(){
    int n, a, b;
    cin>>n;
    multiset<int> s;
    vector<pair<int,int> > v;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(), comp);
    int ans = 0;
    for(pair<int,int> it : v){
        if(!s.empty()){
            auto ii = s.begin();
            while(ii != s.end() && *ii < it.first){
                auto temp = ii;
                ii++;
                s.erase(temp);
            }
        }
        s.insert(it.second);
        ans = max(ans, (int)s.size());
    }
    cout<<ans<<endl;
    return 0;
}