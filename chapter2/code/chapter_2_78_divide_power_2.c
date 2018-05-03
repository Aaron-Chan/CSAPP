

#include <stdio.h>
#include <assert.h>

int divide_power2(int x,int k){
    /*
        k ==0
        re
    */
    if (k == 0)return x;
    return (x<0 ? (x+(1<<k)-1) :x ) >> k;
}

int main(void){
    assert(divide_power2(10,2) == 2);
    assert(divide_power2(-10,2) == -2);
    assert(divide_power2(10,0) == 10);
    return 1;
}





