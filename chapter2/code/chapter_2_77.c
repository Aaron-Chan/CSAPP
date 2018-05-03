

#include <stdio.h>
#include <assert.h>


int main(void){
   int x = 2;
   //A k = 17= 16+1
    int a = x * ((1<<4)+1);
   //B k =-7 = 1-8
   int b = x * (1 - (1<<3));
   //C k =60 = 64- 4
   int c = x * ((1<<6)- (1<<2));
   //D k =-112 = 16-128
   int d = x * ((1<<4) - (1<<7));
    assert(a == 34);
    assert(b == -14);
    assert(c == 120);
    assert(d == -224);
    
    return 1;
}





