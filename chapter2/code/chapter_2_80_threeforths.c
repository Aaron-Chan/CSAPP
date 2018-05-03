

#include <stdio.h>
#include <assert.h>
#include <limits.h>

int threeforths(int x){
    // return 3/4x 向零取整
    if (x == 0){
        return 0;
    }
    //这个要分成两个部分 f是前30bit l是后2bit  x = f +l  l<4  那么threeforths(x) = f/4*3+l*3/4;
    int f = x & ~0x3;
    int l = x & 0x3;
    int fd4 = f >>2;
    int fd4m3 = (fd4 <<1) +fd4;
    int lm3 = (l <<1) +l;
    int is_neg = x & INT_MIN;
    int bias = (1<<2) -1;
    is_neg && (lm3 +=bias );
    int lm3d4 = lm3 >>2;

    
    return fd4m3+lm3d4;
}

int main(void){
    assert(threeforths(8) == 6);
    assert(threeforths(9) == 6);
    assert(threeforths(10) == 7);
    assert(threeforths(11) == 8);
    assert(threeforths(12) == 9);

    assert(threeforths(-8) == -6);
    assert(threeforths(-9) == -6);
    assert(threeforths(-10) == -7);
    assert(threeforths(-11) == -8);
    assert(threeforths(-12) == -9);
    return 1;
}





