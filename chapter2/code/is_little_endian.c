
#include <stdio.h>
#include <assert.h>

int is_little_endian(){
    int i = 0x01;
    unsigned char *p = (unsigned char *)&i;
    return  p[0] == 0x01;
}

int main(void) {
    assert(is_little_endian());
    return 0;
}