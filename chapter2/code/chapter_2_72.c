
#include <stdio.h>
#include <assert.h>

void copy_int(int val ,void *buf,int maxbytes){
    if (maxbytes>sizeof(buf)){
        memccpy(buf,(void *)&val,sizeof(val));
    }
}

int main(void){
    
    return 1;
}





