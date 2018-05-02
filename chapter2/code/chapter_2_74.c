
#include <stdio.h>
#include <assert.h>
#include <limits.h>

int tsub_ok(int x,int y){
    if (y<0 && -y<0){ // -y溢出
        return 0;
    }
     y = -y;
     int add_result = x+y;
     int result = 1;
    // 小于x或者y
    if (x>0 && y >0) {
        if(add_result <x || add_result<y){
            result= 0;
        }
    }
    //大于x或y
    if (x<0 && y <0) {
        if(add_result >x || add_result>y){
            result= 0;
        }
    }

    return result;
}

int main(void){
    assert(tsub_ok(1,1));
    assert(tsub_ok(1,-10));
    assert(!tsub_ok(1,INT_MIN));
    assert(!tsub_ok(INT_MAX,-1));
    assert(!tsub_ok(-2100000000,2100000000));
    return 1;
}





