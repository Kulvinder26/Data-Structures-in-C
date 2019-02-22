//checking if  matrix iz zymmetric

#include <stdio.h>


int main(){

  int arr1[3][3] = {5,1,4,
                    6,6,8,
                    2,4,7};
  int arr2[3][3] = {5,6,2,
                    1,9,4,
                    4,8,7};
//  int **ptr1 = &arr1;
//  int **ptr2 = &arr2;
  int arr3[3][3];
  int  flag = 0;
//  int **ptr3 = &arr3;

void func(int (*p1)[3],int (*p2)[3]) {

for(int i=0;i<3;++i){

for(int j=0;j<3;++j){

if (*(*(p1 + i)+j) != *(*(p2 + j)+i))
flag = 1;

}
}

if (flag == 0)
printf("Zymmetric");
else
printf("not Zymmetric");


}

func(arr1,arr2);

}
