
#include <stdio.h>
#include <assert.h>

int check_a(int x){
    //x任何位都为1
    return !~x;
}

int check_b(int x){
    //x任何位都为0
    return !x;
}

int check_c(int x){
    //x最低有效字节位都为0
    return !(x << ((sizeof(int) -1 ) << 3));
}


int check_d(int x){
    //x最高有效字节位都为1
    return !~(x >> ((sizeof(int) -1 ) << 3));
}


int main(void){
   //不能使用== !=
    int a = 0xffffffff;
    int b = 0x00;
    int c = 0x111100;
    int d = 0xff000000;
    assert(check_a(a));
    assert(!check_a(0xfffffeff));

    assert(check_b(b));
    assert(!check_b(0x01));

    assert(check_c(c));
    assert(!check_c(0x01));

    assert(check_d(d));
    assert(!check_d(0xfeffffff));
}





