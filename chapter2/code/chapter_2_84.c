

#include <stdio.h>
#include <assert.h>
#include <limits.h>

unsigned f2u(float x) {
  return *(unsigned*)&x;
}

int float_le(float x, float y){
     unsigned ux = f2u( x);
     unsigned uy = f2u( y);
     unsigned sx = ux>>31;
     unsigned sy = uy>>31;
     //比较符号位
     //比较阶码
     //比较尾数
     //if sx==1 & sy==1  return (ux<<1) >= (uy<<1)
     //if sx==0 & sy==0  return ux <= uy
     //if sx == 0 & sy==1 return 0;
     //if sx == 1 & sy == 0 return 1;
     return   sx!=sy ?(sx == 1) : ((sx==1)? ux >= uy : ux <= uy);
}


int main(int argc, char* argv[]) {
  assert(float_le(+0, -0));
  assert(float_le(0, 3));
  assert(float_le(-4, -0));
  assert(float_le(-4, 4));

  return 0;
}





