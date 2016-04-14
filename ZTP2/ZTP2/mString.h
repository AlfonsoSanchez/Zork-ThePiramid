#ifndef _mSTRING_
#define _mSTRING_


class mstring{
private:
	char *buffer = nullptr;
	unsigned int maxcapacity = 0;
public:
	const char* Str() const;
	mstring();
	mstring(const char* STR);
	mstring(const mstring& otherclas);
	~mstring();

	unsigned int c_capactity() const;
	const char* c_str() const;
	unsigned int lenght() const;
	bool empty() const;
	mstring operator+(const mstring& str);
	bool operator ==(const mstring& otherclas) const;
	bool operator ==(const char* otherstring) const;
	bool operator !=(const char* otherstring) const;
	void operator =(const mstring& otherclas);
	void operator =(const char* otherstring);
	void operator +=(const mstring& otherclas);
	bool SameLenght(const mstring& str);
	bool IsSmaller(const mstring& str);
	void clean();
	void set();
	void shrinktofit(); 
	void getcomand();
	void tokenize(mstring& Fcomand, mstring& Scomand, mstring& Tcomand )const;
};
#endif