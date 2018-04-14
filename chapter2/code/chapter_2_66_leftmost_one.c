
#include <stdio.h>
#include <assert.h>

int leftmost_one(unsigned x){
    if (x == 0 )return 0;
    //如A为0101 0101 要得到 0100 0000 那么可以先变成 0111 1111 再取非并右移1得到 0100 0000  再&  0111 1111 即可得到答案
    //如何得到 0111 1111
    x |= x>>1; // n n-1 都是1
    x |= x>>2; // n n-1 n-2 n-3 都是1 那么n最终是 x|=x>>n/2;
    x |= x>>4;
    x |= x>>8;
    x |= x>>16;
    return x & (~x >>1);
}

int main(void){
    assert(leftmost_one(0xff00)== 0x8000);
    assert(leftmost_one(0x6600)==0x4000);
    return 1;
}





