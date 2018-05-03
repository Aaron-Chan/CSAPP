

#include <stdio.h>
#include <assert.h>
#include <limits.h>

int mul3div4(int x){
    //mul 3 = 2+1
    //div 
    int xfor1 = x <0 ? x+(1<<1)-1:x;
    int xfor2 = x < 0?x+(1<<2)-1:x;
    return (xfor1 >> 1) + (xfor2>>2);
}

int main(void){
    assert(mul3div4(4)==3);
    assert(mul3div4(1)==0);
    
    assert(mul3div4(-2100000000)==-1575000000);
    return 1;
}





