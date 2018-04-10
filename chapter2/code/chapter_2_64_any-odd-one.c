
#include <stdio.h>
#include <assert.h>

int any_odd_one(unsigned x){
    return !!(0xAAAAAAAA & x);
}

int main(void){
   assert(any_odd_one(0x02));
   assert(!any_odd_one(0x04));
}





