
#include <stdio.h>
#include <assert.h>

int low_mask_one(int n){
    int size_bit = sizeof(int)<<3;
    if (n>size_bit){
        return 0;
    }
    if(n<size_bit){
        return (1<<(n-1)<<1) -1;
    }else{
        return (1<<(n-1)<<2) - 1;
    }
}

int main(void){
    assert(low_mask_one(6) == 0x3f);
    assert(low_mask_one(17) == 0x1ffff);
    assert(low_mask_one(32) == -1);
    return 1;
}





