#ifndef _T_ARRAY_TABLE_H_
#define _T_ARRAY_TABLE_H_

#include "TTable.h"

class TArrayTable :public TTable
{
protected:
	TRecord* pRec;//память для записей таблиц
	int curr, maxSize; //макс.возм.количество записей в таблице, номер текущей записи(нумерация с 0)

public:
	TArrayTable(int size);//конструктор
	virtual ~TArrayTable() {};//деструктор

	virtual bool IsFull() { return maxSize == DataCount; };//заполнена?
	virtual TRecord GetCurr() { return pRec[curr]; };//получить текущей записи
	virtual void Reset() { curr = 0; }//установить на первую запись
	virtual void GoNext() { curr++; }//переход к следующей записи
	virtual bool IsEnd() { return curr == DataCount; };//завершена?

	int GetMaxSize() const { return maxSize; };//получить макс размер
};
#endif