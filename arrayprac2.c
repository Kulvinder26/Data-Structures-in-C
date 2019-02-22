//to delete a value from location

#include <stdio.h>
#include <math.h>

int main(){
    int b,loc;
    int a[8] = {5,7,4,2,9,1,6,3};
    for (int i=0;i<8;++i)
    printf(" %d ",a[i]);
    //float b,c,a;
    //void func1(float*,float*,float*);
    printf("\nElement to be deleted with loc");
    scanf("%d",&loc);

    for (int i=0;i<8;++i)
    {if(i>=loc){
      a[i] = a[i+1];
    }

  }


  for (int i=0;i<7;++i)
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
