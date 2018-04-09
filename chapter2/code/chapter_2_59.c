
#include <stdio.h>
#include <assert.h>


int main(void){
    int x = 0x89ABCDEF;
    int y = 0x76543210;
    int mask = 0xFF;
    int z = (x & mask) | (y ^ mask);
    assert(z == 0x765432EF);
    return 1;
}