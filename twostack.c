// with array


#include<stdio.h>

#define MAX 10
int arr[MAX],topA = -1,topB = MAX;
void pushA(int arr[],int val);
void popA(int arr[]);
void displayA(int arr[]);
void pushB(int arr[],int val);
void popB(int arr[]);
void displayB(int arr[]);

int main(){

int choice,val;
do{

  printf("\n Enter the choice ");
         scanf("%d",&choice);
switch(choice){
  case 1:printf("\n Enter the value to be pushed ");
         scanf("%d",&val);
         pushA(arr,val);
         break;
  case 2:popA(arr);
         break;
  case 3:displayA(arr);
         break;
  case 4:printf("\n Enter the value to be pushed ");
         scanf("%d",&val);
         pushB(arr,val);
         break;
  case 5:popB(arr);
         break;
  case 6:displayB(arr);
         break;





}
}while(choice != 7);


  return 0;

}


void pushA(int arr[],int val){
  if (topA == topB -1)
  {printf("stack overflow in A!!\n");}
  else{
  topA++;
  arr[topA] = val;
  printf("Value pushed at %d in A!!\n",topA);
}
}

void popA(int arr[]){
  int val;
  if (topA == -1)
  {printf("stack unerflow !! in A\n");}
  else
  val = arr[topA];
printf("Deleted value %d in A\n", val);
  topA--;


}

void displayA(int arr[]){
  int val;
   int ptr = topA;
   if (topA == -1)
   {printf("stack unerflow !! in A\n");}
   else{
  while(ptr >= 0){
      int val = arr[ptr];
  printf("value %d iz at %d in A\n", val,ptr);
  --ptr;
  }
  }
}


void pushB(int arr[],int val){
  if (topA == topB -1)
  {printf("stack overflow !! in B\n");}
  else{
  topB--;
  arr[topB] = val;
  printf("Value pushed at %d in B!!\n",topB);
}
}

void popB(int arr[]){
  int val;
  if (topB == MAX)
  {printf("stackB unerflow in B!!\n");}
  else
  val = arr[topB];
printf("Deleted value in B %d\n", val);
  topB++;


}

void displayB(int arr[]){
  int val;
   int ptr = topB;
   if (topB == MAX)
   {printf("stack unerflow in B!!\n");}
   else{
  while(ptr <= MAX-1){
      int val = arr[ptr];
  printf("value %d iz at %d in B\n", val,ptr);
  ++ptr;
  }
  }
}
