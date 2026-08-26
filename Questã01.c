#include<stdio.h>
int main (){
   int x,y,*p;
   y=0;
   p=&y;
   x=*p;
   x=4;
   (*p)++;
   --x;
   (*p)=(*p)+x;
}

// Irá retonar: x=3,y=4 e p=&y