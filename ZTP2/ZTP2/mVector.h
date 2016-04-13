#ifndef _MVECTOR_
#define _MVECTOR_

template <class TYPE>

class Vector
{
private:
	TYPE* buffer;
	unsigned int max_capacity = 10;
	unsigned int elements = 0;
public:
	Vector(){
		elements = 1;
		buffer = new TYPE[max_capacity];
		for (int i = 0; i < elements; i++){
			buffer[i] = 0;
		}
	}
	Vector(const Vector &v){
		elements = v.elements;
		max_capacity = v.max_capacity;
		buffer = new TYPE[max_capacity];
		for (int i = 0; i < elements; i++){
			buffer[i] = v.buffer[i];
		}
	}

	~Vector(){
		delete[] buffer;
	}
public:
	void pushback(const TYPE &n){
		if (max_capacity == elements){
			TYPE* tem = nullptr;
			max_capacity *= 2;
			tem = new TYPE[max_capacity];
			for (int i = 0; i < elements; i++){
				*(tem + i) = *(buffer + i);
			}
			delete[]buffer;
			buffer = tem;
		}
		*(buffer + num_elements++) = n;
	}

	void pushfront(const TYPE &n){
		TYPE tem = nullptr;
		if (max_capacity == (elements + 1)){
			capacity *= 2;

		}
		tem = new TYPE[max_capacity];
		for (int i = 0; i < elements; i++){
			*(tem + i + 1) = *(buffer + i);
		}
		delete[]buffer;
		buffer = tem;
		*buffer = num;
		elemetns++;
	}
	bool empty(){
		return (elements == 0);
	}
	void clear(){
		elements = 0;
	}
	unsigned int size(){
		return elements;
	}
	unsigned int c_capacity(){
		return max_capacity;
	}
	TYPE operator[](const int tip){
		return buffer[tip];
	}
}






#endif