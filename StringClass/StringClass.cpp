// StringClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StringClass.h"
#include <memory>
#include <iostream>
#include <string>

using namespace std;


int main()
{
	StringClass *A = new StringClass("Hello");
	string s = A->Getstring();
	cout << s << endl;
	A->~StringClass();
	StringClass ss = "Good Luck!";
	cout << ss.Getstring() << endl;
	system("PAUSE");
    return 0;
}

StringClass::StringClass(const char * str)
{
	if (str == NULL)
	{
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length + 1];
		strcpy_s(m_data, length+1,str);
	}
}

StringClass::StringClass(const StringClass &other)
{
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy_s(m_data, length+1, other.m_data);
}

StringClass::~StringClass(void)
{
	delete[] m_data;
}

 char* StringClass::Getstring()
{
	return m_data;
}

 StringClass & StringClass::operator=(const StringClass & rhs)
 {
	 if (this==&rhs)
	 {
		 return *this;
	 }
	 delete[] m_data;
	 int length = strlen(rhs.m_data);
	 m_data = new char[length + 1];
	 strcpy_s(m_data, length + 1, rhs.m_data);
	 return *this;
 }

