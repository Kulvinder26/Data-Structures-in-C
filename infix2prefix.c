#include<stdio.h>
#include<stlib.h>
#include<string.h>
#define MAX 100
char arr[MAX];

void push(char arr[], char);
char pop(char arr[]);
void infix2prefix(char x[],char y[]);
int getpriority(char x);
int top = -1;

int main(){

char infix[100],prefix[100];
strcpy(prefix,"");
printf("Enter the infix :");
gets(infix);

infix2pofix(infix,prefix);
printf("The equivalent prefix :");
puts(prefix);

return 0;
}

void infix2prefix(char x[],char target[]){
  strcpy(y,"");
  int i = 0;
  int j = 0;
  while(x[i] != '\0'){

    if(x[i]=='('){
      push(arr,x[i]);
      ++i;
    }
    else if(x[i]==')'){

      while(arr[top]!='('){
        target[j] = pop(arr);
        ++j;
      }
      temp = pop(arr);
      ++i;
    }
    else if(isalpha(x[i])||isdigit(x[i])){
      target[j] = x[i];
      ++i;
      ++j;
    }
    else if(x[i] == '+'||x[i] == '-'||x[i] == '*'||x[i] == '/'){
      while(getpriority(x[i])<getpriority(arr[top]) && arr[top]!='('){
        target[j] = pop(arr);
        ++j;
      }
     push(arr,x[i]);
     ++i;
    }
  }
}
