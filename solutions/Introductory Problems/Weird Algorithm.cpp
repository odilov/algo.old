/* https://cses.fi/problemset/task/1068 */
#include <iostream>

using namespace std;

int main(){

    long int n;
    cin >> n;

    while( true ){
        cout << n << ' ';
        if( n == 1 ) break;
        if( n % 2 == 0 ){
            n /= 2;
        } else {
            n *= 3;
            n++;
        }
    }

    return 0;

}

