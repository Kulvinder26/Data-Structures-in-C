//checking if  matrix iz zymmetric

#include <stdio.h>


int main(){

  int arr1[9] = {5,1,4,
                 6,6,6,
                 2,4,7};

//  int **ptr1 = &arr1;
//  int **ptr2 = &arr2;
  int arr3[3][3];
  int n = 9;
//  int **ptr3 = &arr3;

void func(int *p1) {

for(int i=0;i<n;++i){

if(*(p1+i) == *(p1+i+1))
{
  printf("\t %d\n ",i);

  for(int j=i;j<9;++j){
    *(p1+i) = *(p1+i+1);

--n;
  }

}
}




}

func(arr1);
for(int i=0;i<9;++i)
  printf("\t %d\n ",*(p1+i));

}
