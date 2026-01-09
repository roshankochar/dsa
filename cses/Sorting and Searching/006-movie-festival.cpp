//run the code using the command - g++ -std=c++17 <file-name>.cpp

/**
 * logic - sort by end time in ascending order - if end times same - sort by start time 
 * - start picking the movies if last selected end time <= current's start time
 */
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>
#define pii pair<int,int>

using namespace std;

bool comp(pii a, pii b){
    if(b.second == a.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main(){
    int n, a, b;
    cin>>n;
    vector<pii> v;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),comp);
    int lastEnd = -1, ans = 0;
    for(pii p : v){
        if(p.first >= lastEnd){
            ans++;
            lastEnd = p.second;
        }
    }
    cout<<ans;
    return 0;
}