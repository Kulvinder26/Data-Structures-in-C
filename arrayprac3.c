#include <stdio.h>
#include <math.h>

int main(){
    int a[8] = {51,47,44,32,29,21,16,13};
    int c[5] = {98,87,34,22,12};
    //for (int i=0;i<8;++i)
    //printf(" %d ",a[i]);
    int n = 13;
    int b[13],loc;

    //float b,c,a;
    //void func1(float*,float*,float*);
int j=0,k=0,i=0,fl;

while(i<13)
    {
      //printf(" %d %d %d \n",j,k,i);
         if ((j<5)&&(k<8)){
//printf(" %d %d \n",c[j],a[k]);
          if(c[j]>a[k]){
            printf(" %d > %d \n",c[j],a[k]);
          b[i] = c[j];
          fl = a[k];
          j =j+1;


           }
          else{
printf(" %d < %d \n",c[j],a[k]);
            b[i] = a[k];

              fl = c[j];

             k =k+1;

            }

      }
      else{
break;
      }
      printf(" %d fl\n",fl);

    
i =i+1;
b[i] = fl;
  }


  for (int i=0;i<13;++i)
   printf(" %d ",b[i]);
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
