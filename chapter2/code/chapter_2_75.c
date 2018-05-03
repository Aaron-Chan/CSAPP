
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <inttypes.h>

int signed_high_prod(int x,int y){
    int64_t result = (int64_t) x * y;
    return result >> 32;
}   

unsigned unsigned_high_prod (unsigned x,unsigned y){
    int signed_x = x>>31;
    int signed_y = y>>31;
    return  signed_high_prod(x,y) + x*signed_y + y*signed_x;//根据公式
}

unsigned another_unsigned_high_prod(unsigned x, unsigned y) {
  uint64_t mul = (uint64_t) x * y;
  return mul >> 32;
}

int main(void){
    unsigned x = 0x12345678;
    unsigned y = 0xFFFFFFFF;
    assert(another_unsigned_high_prod(x, y) == unsigned_high_prod(x, y));
    return 1;
}





