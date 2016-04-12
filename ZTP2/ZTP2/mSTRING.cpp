#include"mString.h"

const char* mstring::Str() const{
	return buffer;
}
mstring::mstring(){
	maxcapacity = 1;
	buffer = new char[maxcapacity];
}

mstring::mstring(const char* STR){
	int len = (strlen(STR)) + 1;
	maxcapacity = len;
	buffer = new char[len];
	strcpy_s(buffer, len, STR);
	printf("La clase sting %s se esta construyendo\n", buffer);
}

mstring::mstring(const mstring& otherclas) : buffer(otherclas.buffer){
	int len = (strlen(otherclas.buffer)) + 1;
	maxcapacity = len;
	buffer = new char[len];
	strcpy_s(buffer, len, otherclas.buffer);
}

unsigned int mstring::lenght(){
	unsigned int i = strlen(buffer);
	return i;
}

bool mstring::empty() const{
	return strlen(buffer) == 0;
}

bool mstring::operator ==(const mstring& otherclas) const{
	return strcmp(buffer, otherclas.buffer) == 0;
}

bool mstring::operator ==(const char* otherstring) const{
	return strcmp(buffer, otherstring) == 0;
}

bool mstring::operator !=(const char* otherstring) const{
	return strcmp(buffer, otherstring) != 0;
}

void mstring::operator =(const mstring& otherclas){
	int lent = (strlen(otherclas.buffer) + 1);
	if (maxcapacity < lent){
		delete[]buffer;
		maxcapacity = lent;
		buffer = new char[maxcapacity];
	}
	strcpy_s(buffer, maxcapacity, otherclas.buffer);
}

void mstring::operator =(const char* otherstring){
	int lent = (strlen(otherstring) + 1);
	if (maxcapacity < lent){
		delete[]buffer;
		maxcapacity = lent;
		buffer = new char[maxcapacity];
	}
	strcpy_s(buffer, maxcapacity, otherstring);
}


void mstring::operator +=(const mstring& otherclas){
	int lent = (strlen(otherclas.buffer) + lenght() + 1);
	if (maxcapacity < lent){
		char *temp = nullptr;
		temp = new char[strlen(buffer) + 1];
		strcpy_s(temp, strlen(buffer) + 1, buffer);
		delete[]buffer;
		lent = strlen(temp) + strlen(otherclas.buffer) + 1;
		maxcapacity = lent;
		buffer = new char[lent];
		strcpy_s(buffer, lent, temp);
		strcat_s(buffer, lent, otherclas.buffer);

	}
	else{
		strcat_s(buffer, strlen(buffer), otherclas.buffer);
	}


}

mstring  mstring::operator+(const mstring &otherclas)
{
	mstring newstring;
	int len = strlen(buffer) + strlen(otherclas.buffer) + 1;
	maxcapacity = len;
	newstring.buffer = new char[len];
	strcpy_s(newstring.buffer, len, buffer);
	strcat_s(newstring.buffer, len, otherclas.buffer);
	return newstring;
}

void  mstring::clear()
{
	buffer[0] = '\0';
}

void mstring::set()
{
	char otherstring[50];
	gets_s(otherstring, 50);
	int lent = strlen(otherstring) + 1;
	if (maxcapacity < lent){
		delete[]buffer;
		maxcapacity = lent;
		buffer = new char[maxcapacity];
	}
	strcpy_s(buffer, maxcapacity, otherstring);
}

mstring::~mstring(){
	delete[] buffer;
	
}