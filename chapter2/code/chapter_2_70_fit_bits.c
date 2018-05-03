
#include <stdio.h>
#include <assert.h>

typedef unsigned packed_t;

int xbyte(packed_t word,int bytenum);


int xbyte(packed_t word,int bytenum){
   return word<< ((3-bytenum) << 3) >> (bytenum << 3);
}

int main(void){
    assert(xbyte(0x12345678,3) == 0x12);
    assert(xbyte(0x12345678,0) == 0x78);
    return 1;
}





