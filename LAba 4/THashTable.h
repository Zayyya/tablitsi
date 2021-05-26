#ifndef _T_HASH_TABLE_H_
#define _T_HASH_TABLE_H_

#include "TTable.h"

class THashTable :public TTable
{
protected:
	int HashFunc(TKey key);//хэш функция

	int maxSize, curr, step, free;
	TRecord* pRec;//память для записей таблицы

public:
	THashTable(int _size = 0, int _step = 0);//конструктор
	virtual ~THashTable() { delete[] pRec; pRec = NULL; };//деструктор

	virtual bool IsFull() { return maxSize == DataCount; };//заполнена?
	virtual bool Find(TKey key);//найти
	virtual void InsRec(TRecord rec);//вставить запись
	virtual void DelRec(TKey key);//удалить запись

	virtual void Reset();//установить на первую запись
	virtual void GoNext();//переход к следующей записи
	virtual bool IsEnd() { return curr == maxSize; };//конец?
	virtual TRecord GetCurr() { return pRec[curr]; };
};
#endif