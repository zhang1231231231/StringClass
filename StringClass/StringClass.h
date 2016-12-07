#pragma once
#include <string>
#ifndef __STRINGCLASS_H
#define __STRINGCLASS_H
class StringClass
{
public:
	StringClass(const char *str = NULL);
	StringClass(const StringClass &other);
	~StringClass();
	char* Getstring();
	StringClass& operator=(const StringClass& rhs);
protected:
private:
	char * m_data;
};
#endif
