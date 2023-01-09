 int bin_pow( int a, int n ){
    int ans = 1;
    while( n > 0 ){
      if( n % 2 != 0 )
        ans *= a;
      a*=a;
      n /= 2;
    }
 }