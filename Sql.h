#ifndef _SEQLIST_H_
#define _SEQLIST_H_
#include"Common.h"
#define ElemType int //定义出表内元素顺序，如果到后面不是整形数据了需要修改，直接修改这一块就可以了、ElemType在此处就是定义全局数据的类型

#define SEQLIST_DEFAULT_SIZE 8 //定义出顺序表末端空间

typedef struct SeqList //定义数据表结构
{
	ElemType* base;//就是那张表
	size_t capacity;//表的容量
	size_t size;//元素个数
} SeqList;

void SeqListInit(SeqList* plist)
{
	plist->capacity = SEQLIST_DEFAULT_SIZE;//先把容量初始化为到达末尾的大小
	plist->base = (ElemType*)malloc(sizeof(ElemType) * plist->capacity); //然后我们申请 元素类型 *（乘法）plist所指的容量 这么大的空间
	plist->size = 0;
}

void SeqListInit(SeqList* psl, size_t capacity);

void SeqListDestory(SeqList* psl);

void CheckCapacity(SeqList* psl);

void SeqListPushBack(SeqList* psl, SLDataType x);

void SeqListPopBack(SeqList* psl);

void SeqListPushFront(SeqList* psl, SLDataType x);

void SeqListPopFront(SeqList* psl);

int SeqListFind(SeqList* psl, SLDataType x);

void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);

void SeqListErase(SeqList* psl, size_t pos);

void SeqListRemove(SeqList* psl, SLDataType x);

void SeqListModify(SeqList* psl, size_t pos, SLDataType x);

void SeqListPrint(SeqList* psl);

#endif // !_SEQLIST_H_
