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
        int n, sum = 0;
        cin>>n;
        vector<int> arr(n+1);
        for(int i = 1; i <= n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int lsum = 0, rsum = 0;
        bool found = false;
        for(int l = 1; l <= n-2; l++){
            found = false;
            lsum += arr[l];
            int r;
            for( r = l+2; r <= n; r++){
                rsum = 0;
                for(int j = r; j < n; j++){
                    rsum+=arr[j];
                }
                // cout<<"sums "<<lsum<<" "<<sum-lsum-rsum<<" "<<rsum<<endl;
                int mlsum = lsum%3;
                int mrsum = rsum%3;
                int midsum = (sum-lsum-rsum)%3;
                // cout<<"sums "<<mlsum<<" "<<midsum<<" "<<mrsum<<endl;

                if(mlsum == mrsum && midsum == mrsum){
                    cout<<l<<" "<<r-1<<endl;
                    found = true;
                    break;
                }
                if(mlsum != mrsum && midsum != mrsum && mlsum != midsum){
                    cout<<l<<" "<<r-1<<endl;
                    found = true;
                    break;
                }
            }
            if(found)
                break;
        }
        if(!found){
            cout<<0<<" "<<0<<endl;
        }
    }
    return 0;
}