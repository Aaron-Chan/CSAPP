
#include <stdio.h>
#include <assert.h>
#include <limits.h>

int saturating_add(int x,int y){
    int result = x + y;
    // 小于x或者y
    if (x>0 && y >0) {
        if(result <x || result<y){
            result= INT_MAX;
        }
    }
    //大于x或y
    if (x<0 && y <0) {
        if(result >x || result>y){
            result= INT_MIN;
        }
    }

    return result;
}

int main(void){
    assert(saturating_add(1,1)==2);
    assert(saturating_add(-1,-1)==-2);
    assert(saturating_add(2100000000,2100000000)==INT_MAX);
    assert(saturating_add(-2100000000,-2100000000)==INT_MIN);
    return 1;
}





