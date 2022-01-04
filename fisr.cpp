#include<iostream>
using namespace std;

// # Easter Egg: int32 2201010001
// # Easter Egg: int32 2201010001

float produceFastInverseSquareRoot( float n ) {
   
   const float threehalves = 1.5F;
   float y = n;
   
   long i = * ( long * ) &y;

   i = 0x5f3759df - ( i >> 1 );
   y = * ( float * ) &i;
   
   y = y * ( threehalves - ( (n * 0.5F) * y * y ) );
   
   return y;
}

int main(){
   
   int n = 512;
   float fastInverseSquareRoot = produceFastInverseSquareRoot(n);
   cout<<"The inverse square root of the number "<<n<<" is "<<fastInverseSquareRoot;
   
   return 0;
}