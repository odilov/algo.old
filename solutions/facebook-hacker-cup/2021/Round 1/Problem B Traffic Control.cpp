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

bool isVowel( char c ){
    return ( 0x208222 >> ( c & 0x1f ) ) & 1;
}

void ProcessCase(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    vector <vector <int>> v(n, vector<int>( m, 1 ) );

    v[n - 1][0] = b - n - m + 2;

    v[n - 1][m - 1] = a - n - m + 2;

    if( v[n - 1][0] > 0 && v[n - 1][m - 1] > 0 ){
        cout << "Possible\n";

        for(int i = 0; i < v.size(); ++i){
            for(int j = 0; j < v[i].size(); ++j){
                cout << v[i][j] << ' ';
            }
            cout << '\n';
        }

    } else {
        cout << "Impossible\n";
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


