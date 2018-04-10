
#include <stdio.h>
#include <assert.h>

int int_shifts_are_arithmetic(){
    int x = -1;
    return x >> 1 == -1;
}

int main(void){
   printf("int_shifts_are_arithmetic %d",int_shifts_are_arithmetic());
}





