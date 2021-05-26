#ifndef _T_RECORD_H_
#define _T_RECORD_H_

#include <string.h>
#include <string>
#include <iostream>
using namespace std;

typedef string TKey;
typedef string TValue;

class TRecord
{
private:
	TKey key; //ключ для записи
	TValue val;//указатель на значение

public:
	TRecord(TKey _k = "", TValue _v = "") { key = _k; val = _v; };//конструктор
	~TRecord() {};//деструктордеструктор

	void SetKey(TKey _k) { key = _k; }; //установить значение ключа
	TKey GetKey() { return key; }; //получить значение ключа
	void SetValue(TValue _v) { val = _v; };// установить указатель на данные
	TValue GetValue() { return val; };//получить указатель на данные

	bool operator==(const TRecord& rec) { return this->key == rec.key; };// сравнение =
	bool operator<(const TRecord& rec) { return this->key < rec.key; };// сравнение <
	bool operator>(const TRecord& rec) { return this->key > rec.key; };// сравнение >

	TRecord& operator=(const TRecord& rec); //присваивание

	// функции ввода и вывода //
	friend istream& operator>>(istream& is, TRecord& rec);
	friend ostream& operator<<(ostream& os, const TRecord& rec);

};
#endif