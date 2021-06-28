// https://codeforces.com/contest/1541/problem/B
 
#include <iostream>
#include <vector>
 
#define in freopen("in.txt","r",stdin)
#define out freopen("out.txt","w",stdout)
 
using namespace std;
using ll = long long;
using ld = long double;
 
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    //in;
    //out;
 
    int t;
    scanf( "%d", &t );
 
    while( t --> 0 ){
        int n;
        scanf( "%d", &n );
 
        vector <int> a(n + 1), pos( 2*n + 1, 0 );
 
        for(int i = 0; i < n; ++i){
            scanf("%d", &a[i] );
            pos[a[i]] = i;
        }
 
        int ans =0;
 
        for(int i = 0; i < n; ++i){
            int aj = 1;
            while( a[i] * aj <= 2*n ){
                int j = pos[aj];
                ans += ( i < j && a[i] * aj == i + j + 2 );
                ++aj;
            }
        }
 
        printf( "%d\n", ans );
 
    }
 
    return 0;
}