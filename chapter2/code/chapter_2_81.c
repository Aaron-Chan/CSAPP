

#include <stdio.h>
#include <assert.h>
#include <limits.h>


int A(int j,int k){
    //1（w-k）0 (k)
    //gen 1(w) -> 左移k
    int mask = ~0x00;
    return mask << k;
}

int B(int j,int k){
    //0(w-k-j)1(k)0(j)
    // 1111  ->右移 w-k -> 左移j
    unsigned x= ~0x00;
    int right_shift = (1<<(sizeof(int) * 3)) - k;
    x = x >> right_shift;
    x = x << j;
    return (int)x;
}

int main(void){
   assert(A(0,0) == -1);
   assert(A(0,31) == INT_MIN);

   assert(B(1,1) == 0x2);
   unsigned x = ~0x00u <<1;
   assert(B(1,31) == (int)x);

    return 1;
}





