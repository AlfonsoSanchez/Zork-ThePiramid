#include "mString.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>



const char* mstring::Str() const
{
	return buffer;
}
mstring::mstring()
{
	max_capacity = 1;
	buffer = new char[max_capacity];
	strcpy_s(buffer, max_capacity, "\0");
}

mstring::mstring(const char* str)
{
	max_capacity = strlen(str) + 1;
	buffer = new char[max_capacity];
	strcpy_s(buffer, max_capacity, str);
}

mstring::mstring(const mstring& str)
{
	max_capacity = str.lenght() + 1;
	buffer = new char[max_capacity];
	strcpy_s(buffer, max_capacity, str.buffer);
}
mstring::~mstring()
{
	delete[] buffer;

}

char*mstring::c_str()const
{
	return buffer;
}
unsigned int mstring::lenght() const
{
	return strlen(buffer);
}

bool mstring::empty() const
{
	return strlen(buffer) == 0;

}

unsigned int mstring::c_capacity()const
{
	return max_capacity;
}
void  mstring::clean()
{
	buffer[0] = '\0';
}

mstring mstring::operator+(const mstring& str)
{
	mstring res;
	unsigned int lenght1 = strlen(buffer);
	unsigned int lenght2 = strlen(buffer);
	max_capacity = (lenght1 + lenght2 + 1); 
	res.buffer = new char[max_capacity];
	strcpy_s(res.buffer, max_capacity, buffer);
	strcpy_s(res.buffer, max_capacity, str.buffer);
	return res;
}
bool mstring::operator ==(const mstring& otherclas) const
{
	return strcmp(buffer, otherclas.buffer) == 0;
}

bool mstring::operator ==(const char* otherstring) const
{
	return strcmp(buffer, otherstring) == 0;
}

bool mstring::operator !=(const char* otherstring) const
{
	return strcmp(buffer, otherstring) != 0;
}

void mstring::operator =(const mstring& str)
{

	if (str.max_capacity > max_capacity)
	{
		delete[]buffer;
		max_capacity = str.max_capacity;
		buffer = new char[max_capacity];
	}
	strcpy_s(buffer, max_capacity, str.buffer);
}

void mstring::operator =(const char* str)
{
	int lent = (strlen(str) + 1);
	if (max_capacity < lent) {
		delete[]buffer;
		max_capacity = lent;
		buffer = new char[max_capacity];
	}
	strcpy_s(buffer, max_capacity, str);
}


void mstring::operator +=(const mstring& str)
{
	char* temp = nullptr;
	temp = new char[max_capacity];
	strcpy_s(temp, max_capacity, buffer);

	if (max_capacity < lenght() + str.lenght() + 1)
	{
		max_capacity = lenght() + str.lenght() + 1;
		delete[]buffer;
		buffer = new char[max_capacity];
	}
	strcpy_s(buffer, max_capacity, temp);
	strcpy_s(buffer, max_capacity, str.buffer);
	delete[]temp;
}

void mstring::shrinktofit()
{
	char* tem;
	tem = new char[lenght() + 1];
	strcpy_s(tem, lenght() + 1, buffer);
	max_capacity = lenght() + 1;
	delete[]buffer;
	buffer = new char[max_capacity];
	strcpy_s(buffer, max_capacity, tem);
}

void mstring::getcomand()
{
	char command[30];
	unsigned int len;
	printf("¿What are you going to do?");
	gets_s(command);
	len = strlen(command) + 1;
	if (max_capacity < len) {
		delete[] buffer;
		max_capacity = len;
		buffer = new char[max_capacity];
	}
	strcpy_s(buffer, max_capacity, command);
}

void mstring::set()
{
	char otherstring[50];
	gets_s(otherstring, 50);
	int lent = strlen(otherstring) + 1;
	if (max_capacity < lent)
	{
		delete[]buffer;
		max_capacity = lent;
		buffer = new char[max_capacity];
	}
	strcpy_s(buffer, max_capacity, otherstring);
}


void mstring::tokenize(Vector<mstring*> &command) const
{
	char* var = nullptr;
	command.pushback(new mstring(strtok_s(this->buffer, " ,.-", &var)));
	while (strcmp(var, "") != 0)
	{
		command.pushback(new mstring(strtok_s(NULL, " ,.-", &var)));
	}
}

mstring mstring::allstring() const
{
	mstring totalstring(buffer);
	return totalstring;
}