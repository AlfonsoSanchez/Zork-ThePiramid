#ifndef MY_VECTOR
#define MY_VECTOR
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef unsigned int uint;

template<class TYPE>
class Vector
{
private:
	TYPE* buffer = nullptr;
	unsigned int capacity = 10;
	unsigned int num_elements = 0;


public:

	Vector()
	{
		buffer = new TYPE[capacity];
	}

	Vector(const Vector<TYPE>& vector)
	{
		num_elements = vector.num_elements;
		capacity = vector.capacity;

		if (capacity > num_elements)
		{
			buffer = new TYPE[num_elements];
		}
		else
		{
			buffer = new TYPE[capacity];
		}

		for (unsigned int i = 0; i < num_elements; ++i)
		{
			buffer[i] = vector.buffer[i];
		}
	}

	Vector(uint size) : capacity(size)
	{
		buffer = new TYPE[size];
	}

	void pushback(const TYPE newelement)
	{
		if (capacity == num_elements)
		{
			TYPE* temp = nullptr;
			capacity * 2;
			temp = new TYPE[capacity];
			for (int i = 0; i < num_elements; i++)
			{
				temp[i] = buffer[i];
			}
			delete buffer;
			buffer = temp;
		}
		buffer[num_elements++] = newelement;
	}

	void pushfront(const TYPE newelement)
	{
		if (capacity == num_elements)
		{
			TYPE* temp = nullptr;
			capacity * 2;
			temp = new TYPE[capacity];
			for (int i = num_elements - 1; i >= 0; i--)
			{
				temp[i + 1] = buffer[i];
			}
			delete buffer;
			buffer = temp;
		}
		else
		{
			for (int i = num_elements - 1; i >= 0; i--)
			{
				buffer[i + 1] = buffer[i];
			}
		}

		buffer[0] = newelement;
		num_elements++;
	}

	void print_vector()
	{
		for (int i = 0; i < num_elements; i++)
		{
			printf("%i", buffer[i]);
		}
	}

	bool empty()
	{
		return(num_elements == 0);
	}

	bool pop_back(TYPE& popped)
	{
		if (num_elements > 0)
		{
			popped = buffer[num_elements];
			num_elements--;
			return 1;
		}
		return 0;
	}

	TYPE operator[] (uint index) const
	{
		assert(index < 27);
		return buffer[index];
	}

	TYPE& operator[] (uint index)
	{
		assert(index < 27);
		return buffer[index];
	}
	

	void clean()
	{
		num_elements = 0;
	}

	uint size() const
	{
		return num_elements;
	}

	void RemoveItem(unsigned int index)
	{
		for (unsigned int i = index; i < num_elements; i++){
			buffer[i] = buffer[i + 1];
		}
		num_elements--;
		
		}
}; 

#endif