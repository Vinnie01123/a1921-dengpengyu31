#ifndef listg_h
#define listg_h
#include <stdio.h>
#include <stdlib.h>

#define n 11
#define m 3

typedef int DataType;

typedef struct node_{
	int no;
	DataType data;
	struct node_ *next;
} Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
}List;

void initList(List *);
void Insert(List *list, int k, DataType);
Node *getNode(List *, DataType);
void deleNode(List *, int k);
int getLength(List *);
void dispList(List *);
int Empty(List *);

#endif
