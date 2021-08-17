# Template
This template presents some of the features of C++ that
are useful in competitive programming

here some explanation:

```C++
#include <bits/stdc++.h>
```
- allows you to include the entire standard library ( iostream, vector, algorithm ... )

```C++
#define in freopen( "in.txt", "r", stdin )
#define out freopen( "out.txt", "w", stdout )
```
- reads the input from the file in.txt” and writes the
output to the file out.txt”. 
To use these macros add `in; out;` to the beginning of your code 

```C++
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
```
- makes input and output more efficient


 ## Shortening Code

 ```C++
using ll = long long;
using ld = long double;

ll x = 111111111;
ll y = 222222222;

return x * y;
```
same as:
```C++
long long x = 111111111;
long long y = 222222222;

return x * y;
```


##### The following macros are also usefuls way to shorten code

```C++
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR( i, l, r ) for( int i = l; i < r; ++i )
```
for example:
```C++
v.push_back( make_pair( a, b) ); // v.PB( MP( a, b ) );

int ans = v[i].first + v[i].second; // int ans = v[i].F + v[i].S;

for( int i = 0; i < n; ++i ){
    // do smth
}

FOR( i, 0, n ){
    // do same
}

```
