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

    int n;

    cin >> n;

    vector< int > a(n + 1);

    FOR(i, 0, n - 1){
        int x;
        cin >> x;
        a[x] = 1;
    }

    FOR( i , 1 , n + 1 ){
        if( !a[i] ){
            cout << i;
            return 0;
        }
    }

    return -1;
}

// https://cses.fi/problemset/task/1083/
