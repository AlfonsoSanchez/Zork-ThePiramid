#ifndef _MSTRING_
#define _MSTRING_

#include "mVector.h"

class mstring{
private:
	char * buffer;
	unsigned int max_capacity = 0;
public:
	mstring();
	mstring(const char* str);
	mstring(const mstring& str);
	~mstring();

public:
	const char* Str() const;
	char* c_str()const;
	mstring allstring() const;
	unsigned int lenght() const;
	bool empty() const;
	mstring operator+(const mstring& str);
	bool operator == (const mstring& str) const;
	bool operator == (const char* str)const;
	bool operator != (const char* str)const;
	void operator = (const mstring& str);
	void operator = (const char* str);
	void operator +=(const mstring& str);
	bool lenght(const mstring& str);
	bool IsSmaller(const mstring& str);
	void clean();
	void set();
	void shrinktofit();
	void getcomand();
	void tokenize(Vector<mstring*> &command)const;
	unsigned int c_capacity() const;





};
#endif