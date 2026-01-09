#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#define pii pair<int,int>
using namespace std;
bool comp(pii a, pii b){
    return a.first < b.first;
}
int main(){
    set<int> s;
    int n, x,temp;
    cin>>n>>x;
    vector<pii> arr;
    for(int i = 0; i < n; i++){
        cin>>temp;
        arr.push_back({temp,i});
    }
    sort(arr.begin(), arr.end(), comp);
    int i = 0, j = n - 1;
    while(i < j){
        if(arr[i].first + arr[j].first == x){
            cout<<arr[i].second + 1<<" "<<arr[j].second + 1<<endl;
            return 0;
        }
        if(arr[i].first + arr[j].first > x) j--;
        if(arr[i].first + arr[j].first < x) i++;
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}