
#include <stdio.h>
#include <assert.h>

unsigned rotate_left(unsigned x,int n){
    if (n == 0){
        return x;
    }
    return (x << n) | (x >> (31-n+1));

}

int main(void){
    
    assert(rotate_left(0x12345678,4) == 0x23456781);
    assert(rotate_left(0x12345678,20) == 0x67812345);
    assert(rotate_left(0x12345678,0) == 0x12345678);
    return 1;
}





