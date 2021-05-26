#ifndef _T_SCAN_TABLE_H_
#define _T_SCAN_TABLE_H_

#include "TArrayTable.h"

class TScanTable :public TArrayTable
{
public:
	TScanTable(int size = 0) :TArrayTable(size) {};//конструктор инициализации
	virtual ~TScanTable() {};//деструктор

	virtual bool Find(TKey key);// найти запись
	virtual void InsRec(TRecord rec);//вставить
	virtual void DelRec(TKey key);//удалить запись
};
#endif