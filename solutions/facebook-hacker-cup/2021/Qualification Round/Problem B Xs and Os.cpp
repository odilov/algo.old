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
typedef vector <long long> vll;
typedef pair <int, int> pi;

void ProcessCase(){
    int n;
    cin >> n;

    char matrix[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> matrix[i][j];
        }
    }

    int ans = INT_MAX, cnt = 0;

    // loop through to rows
    int p ;
    map <int, int> mp;
    for(int i = 0; i < n; ++i){
        int empty_cells = 0;
        bool has_o = false;
        for(int j = 0; j < n; ++j){
            if( matrix[i][j] == 'O' ){
                has_o = true;
                break;
            } else if( matrix[i][j] == '.' ) ++empty_cells, p = j;
        }

        if( !has_o && ans > empty_cells ){
            ans = empty_cells, cnt = 1;
            if( ans == 1 )
                mp[p]++;
        } else if( !has_o && ans == empty_cells ){
            ++cnt;
            if( ans == 1 )
                mp[p]++;
        }

    }

    // loop through to columns
    for(int i = 0; i < n; ++i){
        if ( !mp[i] ){
            int empty_cells = 0;
            bool has_o = false;
            for(int j = 0; j < n; ++j){
                if( matrix[j][i] == 'O' ){
                    has_o = true;
                    break;
                } else if( matrix[j][i] == '.' ) ++empty_cells;
            }

            if( !has_o && ans > empty_cells ){
                ans = empty_cells, cnt = 1;
            } else if( !has_o && ans == empty_cells ){
                ++cnt;
            }
        }
    }

    if( ans == INT_MAX  )
        cout << "Impossible\n";
    else
        cout << ans << ' ' << cnt << '\n';

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

