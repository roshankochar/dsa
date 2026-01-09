//run the code using the command - g++ -std=c++17 <file-name>.cpp

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>
#define pii pair<int,int>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    long long int sum = 0, ans = INT_MIN;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sum+=a[i];
        ans = max(ans, sum);
        if(sum <= 0){
            sum = 0;
        } 
    }
    cout<<ans;
    return 0;
}