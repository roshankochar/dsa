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
    int n, ans = INT_MAX, temp;
    cin>>n;
    while(n--){
        cin>>temp;
        ans = min(ans, temp >= 0 ? temp : -temp);
    }
    cout<<ans;
    return 0;
}