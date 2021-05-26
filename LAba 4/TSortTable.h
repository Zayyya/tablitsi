#ifndef _T_SORT_TABLE_H_
#define _T_SORT_TABLE_H_

#include "TArrayTable.h"
#include "TScanTable.h"

class TSortTable :public TArrayTable
{
private:
	void SortInsert();//сортировка вставками
	void SortHoar(int start, int end, TKey mid);//сортировка Хоара ( быстра сортировка )

public:
	TSortTable(int size = 0) :TArrayTable(size) {};// конструктор
	TSortTable(TScanTable& sc_tab);// конструктор
	virtual ~TSortTable() {};//деструктор

	virtual bool Find(TKey key);//найти запись
	virtual void InsRec(TRecord rec);//вставить запись
	virtual void DelRec(TKey key);//удалить запись

};
#endif