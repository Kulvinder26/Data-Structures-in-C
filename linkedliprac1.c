//creating and inzerting elementz

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *dizplay(struct node *);
struct node *inbeg(struct node *);
struct node *inbet(struct node *);


int main(){

  struct node *create_ll(struct node *start){
    int num;
    printf("\n\nEnter -1 to end\n");
    printf("Enter element :");
    scanf("%d",&num);

    while(num != -1){
      struct node* new_node;
       new_node = (struct node*)malloc(sizeof(struct node));
       new_node->data = num;
       if(start == NULL){
         new_node->next= NULL;
         start = new_node;
       }
       else{
        struct node *ptr = start;
         while(ptr->next != NULL){
           ptr = ptr->next;
         }
         ptr->next = new_node;
         new_node->next = NULL;
       }

       printf("Enter element :");
       scanf("%d",&num);
    }
    return start;
  }

  struct node *dizplay(struct node *start){
     struct node *ptr = start;
int len=0;
     while(ptr!= NULL){
       printf("\t%d ",ptr->data);
       ptr = ptr->next;
       ++len;
     }
//printf("\nLength of ll %d ",len);
    return start;
  }

  struct node *inbeg(struct node *start){
    int num;

    printf("Enter element to be added:");
    scanf("%d",&num);
    struct node* new_node;
     new_node = (struct node*)malloc(sizeof(struct node));
     new_node->data = num;
     new_node->next = start;
     start = new_node;
    return start;
  }

  struct node *inbet(struct node *start){
    int num,loc;
    int len=0;
    struct node *ptr = start;
    printf("Enter element to be added:");
    scanf("%d",&num);
    printf("Enter the pozition:");
    scanf("%d",&loc);
    struct node* new_node;
     new_node = (struct node*)malloc(sizeof(struct node));
     new_node->data = num;
     //ew_node->next = start;
     //start = new_node;

     while(len!= loc-1){
      printf("\ndata   %d ",ptr->data);
       ptr = ptr->next;
printf("\nLength of ll %d ",len);
       ++len;
  }
  new_node->next = ptr;
  ptr = new_node;

return start;  }


start = create_ll(start);
start = dizplay(start);
start = inbet(start);
start = dizplay(start);
//free();
    return 0;
}
