#include"mString.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "world.h"
//tokenize X. rest V
const char* mstring::Str() const{
	return buffer;
}
mstring::mstring(){
	maxcapacity = 1;
	buffer = new char[maxcapacity];
	strcpy_s(buffer, maxcapacity, "\0");
}

mstring::mstring(const char* str){
	maxcapacity = strlen(str) + 1;
	buffer = new char[maxcapacity];
	strcpy_s(buffer, maxcapacity, str);
}

mstring::mstring(const mstring& str){
	maxcapacity = str.lenght() + 1;
	buffer = new char[maxcapacity];
	strcpy_s(buffer, maxcapacity, str.buffer);
}
mstring::~mstring(){
	delete[] buffer;

}

const char*mstring::c_str()const{
	return buffer;

}
unsigned int mstring::lenght() const{
	return strlen(buffer);
}

bool mstring::empty() const{
	return strlen(buffer) == 0;
	
}

unsigned int mstring::c_capactity()const{
	return maxcapacity;
}
void  mstring::clean()
{
	buffer[0] = '\0';
}

mstring mstring::operator+(const mstring& str){
	mstring res;
	unsigned int lenght1 = strlen(buffer);
	unsigned int lenght2 = strlen(buffer);
	maxcapacity = (lenght1 + lenght2 + 1); // +1 = \0
	res.buffer = new char[maxcapacity];
	strcpy_s(res.buffer, maxcapacity, buffer);
	strcpy_s(res.buffer, maxcapacity, str.buffer);
	return res;
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

void mstring::operator =(const mstring& str){
	
	if (str.maxcapacity > maxcapacity){
		delete[]buffer;
		maxcapacity = str.maxcapacity;
		buffer = new char[maxcapacity];
	}
	strcpy_s(buffer, maxcapacity, str.buffer);
}

void mstring::operator =(const char* str){
	int lent = (strlen(str) + 1);
	if (maxcapacity < lent){
		delete[]buffer;
		maxcapacity = lent;
		buffer = new char[maxcapacity];
	}
	strcpy_s(buffer, maxcapacity, str);
}


void mstring::operator +=(const mstring& str){
	char* temp = nullptr;
	temp = new char[maxcapacity];
	strcpy_s(temp, maxcapacity, buffer);

	if (maxcapacity < lenght() + str.lenght() + 1){
		maxcapacity = lenght() + str.lenght() + 1;
		delete[]buffer;
		buffer = new char[maxcapacity];
	}
	strcpy_s(buffer, maxcapacity, temp);
	strcpy_s(buffer, maxcapacity, str.buffer);
	delete[]temp;
}

void mstring::shrinktofit(){
	char* tem;
	tem = new char[lenght() + 1];
	strcpy_s(tem, lenght() + 1, buffer);
	maxcapacity = lenght() + 1;
	delete[]buffer;
	buffer = new char[maxcapacity];
	strcpy_s(buffer, maxcapacity, tem);
}

void mstring::getcomand(){
	char command[30];
	unsigned int len;
	printf("¿What are you going to do?");
	gets_s(command);
	len = strlen(command) + 1;
	if (maxcapacity < len){
		delete[] buffer;
		maxcapacity = len;
		buffer = new char[maxcapacity];
	}
	strcpy_s(buffer, maxcapacity, command);
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


void mstring::tokenize(mstring & Fcommand, mstring & Scommand, mstring & Tcommand) const{
	unsigned int len = lenght() + 1;
	char* var;
	Fcommand = strtok_s(buffer, " ,.-", &var);
	if (*var != NULL){
		Scommand = strtok_s(NULL, "", &var);
		if (*var != NULL){
			Tcommand = strtok_s(NULL, "", &var);
			
		}
		else {
			Tcommand.clean();
			
		}
	}
	else{
		Scommand.clean();
		Tcommand.clean();
		
	}
	Fcommand.shrinktofit();//Adapt memory to order.
	Scommand.shrinktofit();
	Tcommand.shrinktofit();
	
}