#include<stdio.h>
#include<stdlib.h>
#define MAX 11
typedef struct{
	int data[MAX];
	int front,rear;
}CSeQueue;
CSeQueue* q;
CSeQueue* InitSeQueue(){
	q= (CSeQueue*)malloc(sizeof(CSeQueue));
	q->front=q->rear = MAX-1;
	return q;
}
int InSeQueue(CSeQueue *q,int x){
	if((q->rear+1)%MAX==q->front){
		printf("¶ÓÂú");
		return 0;
	}
	else{
		q->rear=(q->rear+1)%MAX;
		q->data[q->rear]=x;
	}

}
int OutSeQueue(CSeQueue *q,int* x){
	if(q->front==q->rear){
		printf("¶Ó¿Õ");
		return 0;
	}
	else{
		q->front=(q->front+1)%MAX;
		*x=q->data[q->front];
		return 1;
	}
}
int EmptySEQueue(CSeQueue *q){
	if(q->front==q->rear){
		return 0;
	}
	else{
		return 1;
	}
}
int LengthOfQueue(CSeQueue *q){
	return (q->rear-q->front+MAX)%MAX;

}
int main(){
	int a[10]={4,2,1,8,92,9,23,56,21,11};
	int i=0;
	int x;
	InitSeQueue();
	
	for(;i<10;i++){
		InSeQueue(q,a[i]);	
	}
	while(OutSeQueue(q,&x)){
		printf("%d ",x);
//		getchar();
	}

	printf("\n");
}