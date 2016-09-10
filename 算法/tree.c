#include<stdio.h>
#include<stdlib.h>
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
			 Pop(S,&p);
			 Visit();
			 p=p->right;
		}
	}
}
void LevelOrder(BiTree root){
	SeqQueue *Q;
	BiTree p;
	InitQueue(Q);
	EnterQueue(Q,root);
	while(!=IsEmpty(Q)){
		DeletQueue(Q,&p);
		visit(p->data);
		if(p->left!=null){
			EnterQueue(Q,p->left);
		}
		if(p->right!=null){
			EnterQueue(Q,p->right);
		}
	}
}
int main(){

	return 0;
}