
#include <stdio.h>
#include <assert.h>

int int_size_is_32_for_least_16bit(){
    int set_msb = 1<<15 << 15 <<1;
    int beyond_msb = set_msb << 1;
    return set_msb && !beyond_msb;
}

int int_size_is_32_for_least_32bit(){
     int set_msb = 1<<31;
    int beyond_msb = set_msb << 1;
    return set_msb && !beyond_msb;
}

int main(void){
    // A 没左移判断
    assert(-1);
    assert(!0);
    assert(int_size_is_32_for_least_16bit());
    assert(int_size_is_32_for_least_32bit());

    return 1;
}





