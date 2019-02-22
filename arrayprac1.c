//to inzert value at location


#include <stdio.h>
#include <math.h>

int main(){
    int b,loc;
    int a[8] = {5,7,4,2,9,1,6,3};
    for (int i=0;i<8;++i)
    printf(" %d ",a[i]);
    //float b,c,a;
    //void func1(float*,float*,float*);
    printf("\nElement to be inzerrted with loc");
    scanf("%d %d",&b,&loc);

    for (int i=8;i>=0;--i)
    {if(i>=loc){
      a[i+1] = a[i];
    }

  }
  a[loc] = b;

  for (int i=0;i<9;++i)
   printf(" %d ",a[i]);
//    printf(" %d ",a[i]);
    //func1(&b,&c,&a);


    //printf("\n %f is old variable \n ",b);

    //("\n %f is addrezz variable \n ",*ac + *ab);
    //printf("%f is new variable \n",rad);
    //printf("%f is old variable \n ",b);

    return 0;
}
//void func1(float *n,float *m,float *mn){
//  *mn = *n + *m;
//  printf("%f is new variable \n",*mn);
  //return *n;
//}
