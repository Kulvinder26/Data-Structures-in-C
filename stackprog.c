// with array


#include<stdio.h>

#define MAX 10
int arr[MAX], top = -1;
void push(int arr[],int val);
void pop(int arr[]);
void display(int arr[]);

int main(){

int choice,val;
do{

  printf("\n Enter the choice ");
         scanf("%d",&choice);
switch(choice){
  case 1:printf("\n Enter the value to be pushed ");
         scanf("%d",&val);
         push(arr,val);
         break;
  case 2:pop(arr);
         break;
  case 3:display(arr);
         break;



}
}while(choice != 4);


  return 0;

}


void push(int arr[],int val){
  if (top == MAX-1)
  {printf("stack overflow !!\n");}
  else{
  top++;
  arr[top] = val;
  printf("Value pushed at %d!!\n",top);
}
}

void pop(int arr[]){
  int val;
  if (top == -1)
  {printf("stack unerflow !!\n");}
  else
  val = arr[top];
printf("Deleted value %d\n", val);
  top--;


}

void display(int arr[]){
  int val;
   int ptr = top;
   if (top == -1)
   {printf("stack unerflow !!\n");}
   else{
  while(ptr >= 0){
      int val = arr[ptr];
  printf("value %d iz at %d\n", val,ptr);
  --ptr;
  }
  }
}
