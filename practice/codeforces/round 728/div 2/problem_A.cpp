// https://codeforces.com/contest/1541/problem/A
 
#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
 
    while( t --> 0 ){
        int n;
        cin >> n;
        if( n & 1 ){
            cout << "3 1 2 ";
            for(int i = 4; i <= n; ++i){
                cout << ( i & 1  ? i - 1 : i + 1 ) << ' ';
            }
        } else {
            for(int i = 1; i <= n; ++i){
                cout << ( i & 1 ? i + 1 : i - 1 ) << ' ';
            }
        }
        cout << '\n';
    }
 
    return 0;
}
 