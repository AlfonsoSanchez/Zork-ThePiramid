#ifndef _mSTRING_
#define _mSTRING_
#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
class mstring{
private:
	char *buffer = nullptr;
	unsigned int maxcapacity = 0;
public:
	const char* Str() const;
	mstring();
	mstring(const char* STR);
	mstring(const mstring& otherclas);
	unsigned int lenght();
	bool empty() const;
	bool operator ==(const mstring& otherclas) const;
	bool operator ==(const char* otherstring) const;
	bool operator !=(const char* otherstring) const;
	void operator =(const mstring& otherclas);
	void operator =(const char* otherstring);
	void operator +=(const mstring& otherclas);
	mstring operator+(const mstring &otherclas);
	bool SameLenght(const mstring& str);
	bool IsSmaller(const mstring& str);
	void clear();
	void set();
	~mstring();
};
#endif