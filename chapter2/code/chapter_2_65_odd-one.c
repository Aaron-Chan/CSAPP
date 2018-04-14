
#include <stdio.h>
#include <assert.h>

int odd_ones(unsigned x){
    // 利用偶数-偶数 = 偶数  奇数-偶数 = 奇数
    // 1^1 = 0 ; 0^1= 1
    //高16 与低16位
    x ^= x >> 16;
    x ^= x>> 8;
    x ^= x>>4;
    x ^= x>>2;
    x ^= x>>1;
    return x&0x1;
}

int main(void){
   assert(odd_ones(2));
   assert(odd_ones(1));
   assert(!odd_ones(3));
}





