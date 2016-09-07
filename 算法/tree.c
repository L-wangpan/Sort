#include<stdio.h>
#include<stdlib.h>
typedef struct BitTree{
	int value;
	BitTree *left;
	BitTree *right;
}
void PreOrder(BitTree root){
	SeqStack *s;
	BitTree p;
	InitStack(S);
	p=root;
	while(p!=null||!IsEmpty(S)){
		while(p!=null){
			Visit(p->data);
			push(S,p);
			p=p->left;
		}
		if(!IsEmpty(S)){
			Pop(S,&p);
			p=p->right;
		}

	}
}
void InOrder(BiTree root){
	SeqStack *S;
	BiTree p;
	InitStack(S);
	p=root;
	while(p!=null||!IsEmpty(S)){
		while(p!=NULL){
			push(S,p);
			p=p->left;
		}
		if(!IsEmpty(S)){
			4  
		}
	}
}
int main(){

	return 0;
}