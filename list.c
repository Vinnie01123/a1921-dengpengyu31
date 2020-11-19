#include "listg.h"

void initList(List *list){
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;
}

void Insert(List *list, int k, DataType data){
	Node *current = (Node*)malloc(sizeof(Node));
	Node *node=(Node *)malloc(sizeof(Node));
	node->data=data;
	node->next=NULL;
	if(k <= 1){
		if(list->head == NULL){
			list->tail =node;
		}
		else{node->next =list->head;
		}
		list->head = node;
		return;
	}else{
		current = list->head;
		int i = 2;
		while(i!=k){
			current = current->next;
			i++;
		}
		node->next = current->next;
		current->next=node;

	}
	return;



}

Node *getNode(List *list, DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	while(node != NULL){
		if(node->data == data){
			return node;
		}else{
			node = node->next;
		}
	}
	return NULL;
}
void deleNode(List *list, int k){
	int i = 2;
	Node *current=(Node*)malloc(sizeof(Node));

	if(k==1){
		list->head=list->head->next;
		return;
	}
	if(k>1){
		current = list->head;
		while(i!=k){
			current=current->next;
			i++;
		}
		current->next=current->next->next;
		return;
	}

}

int getLength(List *list){
	Node *node = list->head;
	int i = 0;
	while(node != NULL){
		node = node->next;
		i++;
	}
	return i;
}
void dispList(List *list){
	Node *node = list->head;
	int i = 0;
	while(node != NULL){
		printf("the %dth node:%d\n",i+1,node->data);
		node = node->next;
		i++;
	}
	printf("disp finished!\n");

	return;
}


int Empty(List *list){
	return list->head ==NULL;
}


DataType GetData(List *list,int k){
	Node *current =(Node *)malloc(sizeof(Node));
	current=list->head;
	int i=1;
	while(i!=k){
		current=current->next;
		i++;
	}
	return current->data;
}

void ClearList(List *list){
	if(list->head ==NULL){
		return;
	}
	Node *p,*q;
	p = list->head;
	while(p){
		q = p;
		p = p->next;
		free(q);
	}
	list->head = NULL;
	return;
}

void vList(List *list){
	int k = 0;
	Node *p, *q, *r;
	p = q = (Node*)malloc(sizeof(Node));
	p ->no = 1;
	for (int i = 2; i<=n; i++) {
		r = (Node*)malloc(sizeof(Node));
		r->no = i;
		q->next = r;              
	Top        q = r;
	}
	q->next = p;

	q = p;
	while (q->next !=q) {
		k++;
		if (k ==m){
			p->next = q->next;
			free(q);
			q = p->next;
			k =0;
		}else{
			p = q;
			q = q->next;
		}
	}

	printf("最后一个获胜者的编号是: %d\n", q->no);
}

