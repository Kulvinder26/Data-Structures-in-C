#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void infix2pofix(char ab[], char target[]);
#define MAX 100
char arr[MAX];
int top = -1;
void push(char arr[],char);
char pop(char arr[]);

#define MAX2 100
int arr2[MAX2];
int top2 = -1;
void push2(int arr2[],int);
int pop2(int arr2[]);
//void display(char arr[]);
int getpriority(char);
int pofix2an(char pofy[]);

void rev(char ztr[]);
char infix[100],pofix[100],prefix[100],temp[100];

int main(){

printf("Enter the infix :");
gets(infix);
rev(infix);

strcpy(pofix,"");
infix2pofix(infix, pofix);
printf("The equivalent pofix :");
puts(pofix);
//int k = pofix2an(pofix);
//printf("Final Value %d!!\n",k);

puts(temp);

infix2pofix(temp, pofix);
puts(pofix);
strcpy(temp,"");
rev(pofix);
printf("The equivalent prefix :");
puts(temp);



return 0;


}


void rev(char ztr[]){

int i = 0;
int k = strlen(ztr)-1;
while(k >= 0){

if(ztr[k]=='('){
temp[i] = ')';

}
else if(ztr[k]==')'){
  temp[i] = '(';

}else{
temp[i]=ztr[k];

}
++i;
--k;
}
temp[i] = '\0';
}

void infix2pofix(char ab[], char target[]){

int i = 0;
int j = 0;
char temp;
strcpy(target,"");
//push(arr,'(');
while(ab[i] != '\0'){
//puts(target);
//printf("Ith value %d and %d\n", i,top);
  if(ab[i]== '('){
    push(arr,'(');
    ++i;
  }
  else if(isalpha(x[i])||isdigit(ab[i])){
    target[j] = ab[i];
    ++i;
    ++j;
  }
  else if(ab[i]== ')'){
    while((arr[top] != '(') && (top != -1)){
      target[j] = pop(arr);
      ++j;
    }
    temp = pop(arr);
    ++i;
  }
  else if( ab[i]== '+'|| ab[i]== '-'|| ab[i]== '*'|| ab[i]== '/'|| ab[i]== '%'){
//    printf("it ran");
    while((top != -1) && (arr[top]!='(') && (getpriority(ab[i]) < getpriority(arr[top])))
    {
      target[j] = pop(arr);
      ++j;
}
push(arr,ab[i]);
++i;
  }else{
    printf("incorrect elemnt");
    exit(1);

  }


}

while((top!=-1) && (arr[top]!='(')){
//printf("Thiz one?");
  target[j] = pop(arr);
  ++j;
}
target[j] = '\0';

}
void push(char arr[],char val){
  if (top == MAX-1)
  {printf("stack overflow !!\n");}
  else{
  top++;
  arr[top] = val;
  //printf("Value pushed at %d!!\n",top);
}
}

char pop(char arr[]){
  char val;
  if (top == -1)
  {printf("stack unerflow !!\n");}
  else
  val = arr[top];
//printf("Deleted value %c\n", val);
  top--;

return val;

}

void push2(int arr2[],int val){
  if (top2 == MAX2-1)
  {printf("stack overflow !!\n");}
  else{
  top2++;
  arr2[top2] = val;
  //printf("Value pushed at %d iz %d!!\n",top2,val);
}
}

int pop2(int arr2[]){
  int val;
  if (top2 == -1)
  {printf("stack unerflow !!\n");}
  else
  val = arr2[top2];
//printf("Deleted value %d\n", val);
  top2--;

return val;

}



int getpriority(char x){
if (x== '/'||x== '*'||x== '%')
   return 1;
else if(x== '+'||x== '-')
  return 0;
}




int pofix2an(char pofy[]){
int i=0;
while(pofy[i] != '\0'){
  //printf("ye hai real value %d\n", arr2[top2]);
  if(isdigit(pofy[i])){
    int x = pofy[i] - '0';
    //printf("int mei value %d\n", x);
  push2(arr2,x);
  ++i;
  }
  else if(pofy[i]== '+'){
    int o,p,q;
    o = pop2(arr2);
    p = pop2(arr2);
    q = o+p;
    //printf("Zum ki value %d\n", q);
    push2(arr2,q);
    ++i;
  }
  else if(pofy[i]== '-'){
    int o,p,q;
    o = pop2(arr2);
    p = pop2(arr2);
    q = p-o;
    push2(arr2,q);
    ++i;
  }
  else if(pofy[i]== '*'){
    int o,p,q;
    o = pop2(arr2);
    p = pop2(arr2);
    q = o*p;
    push2(arr2,q);
    ++i;
  }
  else if(pofy[i]== '/'){
    int o,p,q;
    o = pop2(arr2);
    p = pop2(arr2);
    q = p/o;
    push2(arr2,q);
    ++i;
  }
}
return arr2[top2];
}
