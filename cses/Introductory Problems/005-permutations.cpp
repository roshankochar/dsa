#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 2 || n == 3){
        cout << "NO SOLUTION" <<endl;
        return 0;
    }
    int op = 2;
    while(op <= n){
        cout << op << " ";
        op += 2;
    }   
    op = 1;
    while(op <= n){
        cout << op << " ";
        op += 2;
    }
    cout<<endl;
    return 0;
}