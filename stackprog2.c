// with linked list

#include<stdio.h>
#include <stdlib.h>
#define MAX 10
struct ztack
{
  int data;
  struct ztack *next;
};
struct ztack *start = NULL;


struct ztack * push(struct ztack *start,int val);
struct ztack * pop(struct ztack *start);
void display(struct ztack *start);

int main(){

int choice,val;
do{

  printf("\n Enter the choice ");
         scanf("%d",&choice);
switch(choice){
  case 1:printf("\n Enter the value to be pushed ");
         scanf("%d",&val);
         start = push(start,val);
         break;
  case 2:start = pop(start);
         break;
  case 3:display(start);
         break;



}
}while(choice != 4);


  return 0;

}


struct ztack * push(struct ztack *start,int val){
struct ztack *newnode;
  struct ztack *ptr = start;
newnode = (struct ztack*)malloc(sizeof(struct ztack));
newnode->data = val;
  if (ptr == NULL)
  { newnode->next = NULL;
    start = newnode;

    printf("Value pushed  !!\n");}
  else{

    newnode->next = start;
      start = newnode;

  printf("Value pushed !!\n");
}

return start;
}

struct ztack *pop(struct ztack *start){
  int val;
  struct ztack *ptr = start;
  if (ptr == NULL)
  {printf("stack unerflow !!\n");}
  else{
  val = ptr->data;
start = start->next;
printf("Deleted value %d\n", val);
}


return start ;
}

void display(struct ztack *start){
  int val;
   struct ztack * ptr = start;
   if (ptr == NULL)
   {printf("stack unerflow !!\n");}
   else{
  while(ptr != NULL){
      int val = ptr->data;
  printf("value is %d \n", val);
  ptr = ptr->next;

  }
  }
}
