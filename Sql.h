#ifndef _SEQLIST_H_
#define _SEQLIST_H_
#include"Common.h"
#define ElemType int //���������Ԫ��˳����������治��������������Ҫ�޸ģ�ֱ���޸���һ��Ϳ����ˡ�ElemType�ڴ˴����Ƕ���ȫ�����ݵ�����

#define SEQLIST_DEFAULT_SIZE 8 //�����˳���ĩ�˿ռ�

typedef struct SeqList //�������ݱ�ṹ
{
	ElemType* base;//�������ű�
	size_t capacity;//�������
	size_t size;//Ԫ�ظ���
} SeqList;

void SeqListInit(SeqList* plist)
{
	plist->capacity = SEQLIST_DEFAULT_SIZE;//�Ȱ�������ʼ��Ϊ����ĩβ�Ĵ�С
	plist->base = (ElemType*)malloc(sizeof(ElemType) * plist->capacity); //Ȼ���������� Ԫ������ *���˷���plist��ָ������ ��ô��Ŀռ�
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
