#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int,int> b){
    return a.second > b.second;
}
int main(){
    int n,m, temp;
    cin>>n>>m;

    multiset<int> prices;
    for(int i = 0; i < n; i++){
        cin>>temp;
        prices.insert(-temp);
    }

    for(int i = 0 ; i < m; i++){
        cin>>temp;
        auto it = prices.lower_bound(-temp);
        if(it == prices.end()){
            cout<<-1<<endl;
        }
        else{
            cout<<-(*it)<<endl;
            prices.erase(it);
        }
    }
    return 0;
}