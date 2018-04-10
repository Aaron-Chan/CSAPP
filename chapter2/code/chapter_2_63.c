
#include <stdio.h>
#include <assert.h>

unsigned srl(unsigned x,int k){
    size_t size = sizeof(int) * 8;
    if (k>size){
        return x;
    }
    //逻辑右移
    unsigned xsra = (int) x >>k ;
    
    //使前k为变为0
    int i = 0;
    int mask = 0;
    while(i<k){
        mask |= 1 << (size - i -1);   
        i++;
    }
    mask = ~mask;
    return xsra & mask;
}

int sra(int x,int k){
    //算术右移
    size_t size = sizeof(int) * 8;
    if (k>size){
        return x;
    }
    int xsrl = (unsigned) x >>k ;
    if (1<<(size - k-1) & xsrl){
        int i = 0;
        int mask = 0;
        while(i<k){
            mask |= 1 << (size - i -1);   
            i++;
        }
        return xsrl | mask ;
    }else{
        return xsrl;
    }
    
}

int main(void){
    unsigned result = (unsigned) -1;
    result = result>>1;
    assert(srl(-1,1) == result);
    assert(sra(-1,1) == -1>>1);
}





