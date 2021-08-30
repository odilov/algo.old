#include <bits/stdc++.h>

#define in freopen( "in.txt", "r", stdin )
#define out freopen( "out.txt", "w", stdout )
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR( i, l, r ) for( int i = l; i < r; ++i )

using namespace std;

using ll = long long;
using ld = long double;

typedef vector <int> vi;
typedef vector <char> vc;
typedef vector <long long> vll;
typedef pair <int, int> pi;


void ProcessCase(){
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i){
        //cout << v[i] << ' ';
    }

    vector< vector < int > > g(n+1);

    for(int i = 0; i < n - 1; ++i){
        int x , y;
        cin >> x >> y;

        x--, y--;

        g[x].PB( y );
        g[y].PB( x );

    }

    vector <int> dp(n, 0);
    vector <bool> seen(n, false);

    vector <int> s = {0};


    while( s.size() ){
        int node = s.back();
        if( !seen[node] ){
            seen[node] = true;
            for(int i = 0; i < g[node].size(); ++i ){
                if( !seen[g[node][i]] )
                    s.PB( g[node][i] );
            }
        } else {
            s.pop_back();
            seen[node] = false;
            int cm = 0;
            for(int i = 0; i < g[node].size(); ++i ){
                if( !seen[g[node][i]] ){
                    cm = max( cm, dp[g[node][i]] );
                }
            }
            dp[node] = cm + v[node];
        }
    }
    if( g[0].size() < 2 )
        cout << dp[0] << '\n';

    else{
        int ans1 = 0, ans2 = 0;

        for(int i = 0; i < g[0].size(); ++i){
            if( dp[g[0][i]] > ans2 ){
                if( dp[g[0][i]] > ans1 ){
                    ans2 = ans1;
                    ans1 = dp[g[0][i]];
                }  else{
                    ans2 = dp[g[0][i]];
                }
            }
        }

       cout << ans1 + ans2 + v[0] << '\n';
    }


}

int main(){
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    in; out;
    int t;
    cin >> t;

    for(int i = 1; i <= t; ++i ){
        printf( "Case #%d: ", i );
        ProcessCase();
    }

    return 0;
}



