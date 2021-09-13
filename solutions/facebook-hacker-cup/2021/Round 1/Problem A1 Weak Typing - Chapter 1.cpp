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
    int n;
    cin >> n;

    string s;

    cin >> s;

    int ans = 0;

    char last = ' ';

    for( int i = 0; i < n; ++i ){
        if( s[i] == 'F' ){
            continue;
        }
        if( s[i] != last ){
            ++ans;
            last = s[i];
        }
    }


    cout << max( ans  - 1 , 0 ) << '\n';
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
