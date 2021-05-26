#ifndef _T_TABLE_H_
#define _T_TABLE_H_

#include "TRecord.h"

class TTable
{
protected:
	int DataCount, Eff;//количество записей в таблице, показатель эффективности выполнения операции

public:
	TTable() { DataCount = 0; Eff = 0; };//конструктор
	virtual ~TTable() {};//деструктор

	int GetDataCount() const { return DataCount; };//к-во записей
	int GetEff() const { return Eff; };//эффективность
	void ResetEff() { Eff = 0; };

	bool IsEmpty() { return DataCount == 0; }; // пуста ?
	virtual bool IsFull() = 0;// заполнена?

	virtual bool Find(TKey key) = 0;//поиск записи по значению ключа
	virtual void DelRec(TKey key) = 0;// удаление записи
	virtual void InsRec(TRecord rec) = 0;//вставка записи в таблицу

	virtual void Reset() = 0;// установить текущую позицию на первую запись
	virtual void GoNext() = 0;//переместить текущую позицию на следующую запись
	virtual bool IsEnd() = 0;//проверка завершения таблицы

	virtual TRecord GetCurr() = 0;
	void Print();
};
#endif

