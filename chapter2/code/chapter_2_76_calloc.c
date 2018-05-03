
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

void *calloc(size_t nmenb,size_t size){
    // nmenb == 0
    //
    if (nmenb==0||size==0) {   return NULL;}
    size_t buff = nmenb * size;
    if (nmenb == buff/size){
        void *p = malloc(buff);
         memset(p,nmenb,size);
         return p;
    }
    return NULL;
}


int main(void){
    assert(calloc(0,1)==NULL);
    assert(calloc(SIZE_MAX,1)==NULL);
    void *p;
    p = calloc(1,1);
    assert(p!=NULL);
    free(p);
    
    return 1;
}





