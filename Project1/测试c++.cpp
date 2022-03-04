#include<iostream>
using namespace std;
#define OK 1
#define OVERFLOW -2
#define MAXSIZE 8
#define ERROR 0
typedef Status;
typedef struct
{
	int num;
}ElemType;
typedef struct
{
	ElemType* elem;
		int length;
}SqList;
Status InitList(SqList& L)
{
	L.elem = new ElemType[MAXSIZE];
	if (!L.elem) exit(OVERFLOW);
	L.length = 0;
	return OK;
}
Status ListInsert(SqList &L,int i,ElemType e)
{
	if ((i < 1) || (i >L.length + 1)) return ERROR;

}
int main()
{
	SqList L;
	InitList(L);
	 
}