#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#define lli long long int
#define pii pair<int,int>

//for 25 - 24+21+20+75+75
//for 20 - 19+16+15+80+80
//for 5 - 4+1+0+95+95

using namespace std;
/*
int main(){
    lli sum = 0;
    int n; 
    cin>> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    lli avg = round((double)sum/n);
    lli closestToAvg = -1, currDiff = INT_MAX;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
        if(abs(avg - arr[i]) < currDiff){
            closestToAvg = arr[i];
            currDiff = abs(avg - arr[i]);
            cout<<"currdiff"<<currDiff<<endl;
        }
    }
    cout<<"avg"<<closestToAvg<<endl;
    int ans = 0;
    for(int i = 0; i < n; i++){
       ans = ans + abs(arr[i] - closestToAvg);
    }
    cout<<ans<<endl;
    return 0;
}
    0 1 2 3 4 5 6 7 8 9
    */

int getSum(int m, vector<int> &v){
    lli sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += abs(v[i] - m);
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    if(n%2){
        cout<<getSum(n/2 + 1, v);
    }else{
        cout<<min(getSum(n/2, v), getSum(n/2 - 1, v));
    }
}