//adding two n*n matrix with pointerz

#include <stdio.h>


int main(){

  int arr1[3][3] = {5,1,4,
                    6,9,8,
                    2,4,7};
  int arr2[3][3] = {4,8,2,
                    3,6,4,
                    5,1,1};
//  int **ptr1 = &arr1;
//  int **ptr2 = &arr2;
  int arr3[3][3];
//  int **ptr3 = &arr3;

void func(int (*p1)[3],int (*p2)[3],int (*p3)[3]) {

for(int i=0;i<3;++i){

for(int j=0;j<3;++j){

*(*(p3 + i)+j) = *(*(p1 + i)+j) + *(*(p2 + i)+j);

}
}

for(int i=0;i<3;++i){
printf("\n");
for(int j=0;j<3;++j){

printf("\t %d",*(*(p3 + i)+j));

}

}


}

func(arr1,arr2,arr3);

}
