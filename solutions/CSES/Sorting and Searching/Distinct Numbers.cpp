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

    set <int> s;

    while( n --> 0 ){
        int x;
        cin >> x;
        s.insert( x );
    }

    cout << s.size();

    return 0;
}
