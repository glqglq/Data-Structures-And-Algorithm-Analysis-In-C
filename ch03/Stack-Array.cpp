#include<stdio.h>
#include<iostream>
using namespace std;
struct Stack{
    int *val;
    int capacity;//����
    int TopOfStack;
};
int IsEmpty(Stack *S){
    return S->TopOfStack == -1;
}
int IsFull(Stack *S){
    return S->Top == (S->capacity - 1);
}
Stack *CreateStack(int MaxElements){
    if(MaxElements >= 105){
        cout<<"���ջ̫���ˣ��޷�������";
        return;
    }
    Stack *S = new Stack;
    if(!S){
        cout<<"Խ��";
        return;
    }
    S->val = new [105] int;
    if(!(S->val)){
        cout<<"Խ��";
        return;
    }
    S->capacity = MaxElements;
    S.TopOfStack = -1;
}
void DisposeStack(Stack *S){
    delete S->val;
    delete S;
}
void MakeEmpty(Stack *S){
    S->TopOfStack = -1;
}
int Top(Stack *S){
    return S->val[S->TopOfStack];
}
void Push(int x,Stack *S){
    S->val[++(S->TopOfStack)] = x;
}
void Pop(Stack *S){
    (S->TopOfStack)--;
}
int TopAndPop(Stack *S){
    int temp = S->val[S->TopOfStack--];
    return temp;
}
int main(){
    return 0;
}
