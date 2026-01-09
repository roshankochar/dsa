#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    long long int n, m, k;
    cin >> n >> m >> k;

    vector<long long int> aptSize(m, 0);
    vector<long long int> desAptSize(n, 0);
    set<int> s;

    for (int i = 0; i < n; i++)
        cin >> desAptSize[i];
    for (int i = 0; i < m; i++)
        cin >> aptSize[i];

    sort(desAptSize.begin(), desAptSize.end());
    sort(aptSize.begin(), aptSize.end());

    int ans = 0, des_i = 0, j;
    bool taken = false;

    for (int i = 0; i < m; i++){
        taken = false;
        for ( j = des_i; j < n && desAptSize[j] <= aptSize[i] + k; j++){
            if (aptSize[i] >= desAptSize[j] - k && aptSize[i] <= desAptSize[j] + k){
                taken = true;
                ans++;
                des_i = j + 1;
                break;
            }
        }
        if(!taken)
            des_i = j;
    }
    cout << ans << endl;
    return 0;
}