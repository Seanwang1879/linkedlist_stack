#include <stdio.h>
#include <stdlib.h>
//链表栈不用判满
//带头节点
//0:true  -1:false

typedef struct node{
	int data;
	struct node *next;
}NODE,*Stack_List;

void main()
{
	Stack_List Stack;

	Stack = (Stack_List)malloc(sizeof(*Stack_List)); 
	Stack->next = NULL;

	push(Stack, 1);
	pop(Stack);
	return ;
}

int push(Stack_List L, int e)    //入栈   前插
{
	NODE *node;
	
	node = (NODE *)malloc(sizeof(NODE));
	if(node == NULL){
		return -1;
	}
	node->data = data;
	node->next = NULL;

	node->next = L->next;
	L->next = node;

	return 0;
}

int pop(Stack_List L)    //出栈
{
	if(!stack_empty(L)){
		return -1;
	}
	NODE *temp;

	temp = L->next;
	L->next = L->next->next;
	
	free(temp);
	return 0;
}

int stack_empty(Stack_List L)  //带头结点
{
	if(L->next == NULL){
		return 0;
	}
	return -1;
}



