
#include <stdio.h>
#include <assert.h>

int fit_bits(int x ,int n){
    return ! (x>>n);
}

int main(void){
    assert(fit_bits(1,1));
    assert(!fit_bits(2,1));
    return 1;
}





