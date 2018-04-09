
#include <stdio.h>
#include <assert.h>

unsigned replace_byte (unsigned x, int i, unsigned char b){
   if (i < 0 | i > sizeof(x) - 1){
        return printf("input i is invalid");
    }
    unsigned mask = 0xff << (8*i);
	return (x & ~mask) | (b << (8*i));
}

int main(void){
   assert(replace_byte(0x12345678,1,0xAB)== 0x1234ab78);
   assert(replace_byte(0x12345678,0,0xAB)== 0x123456AB);
   return 1;
}

