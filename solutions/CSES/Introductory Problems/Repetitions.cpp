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


int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    //in; out;

    string s;
    cin >> s;

    int ans = 1, curr = 1;

    for(int i = 1; i < s.length(); ++i){
        if( s[i] != s[i - 1] ){
            curr = 1;
        } else ++curr;
        ans = max( ans, curr );
    }

    cout << ans;

    return 0;
}

// https://cses.fi/problemset/task/1069/