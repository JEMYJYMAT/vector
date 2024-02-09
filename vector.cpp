/*
 * vector.cpp
 *
 *  Created on: Feb 9, 2024
 *      Author: Ahmed Gamal
 */
#include "vector.h"

vector::vector()
{
	size = 0;
	p = new int[size];
}

void vector::add_element(int value)
{
	size++;
	int* temp = p;
	p = new int[size];
	for (int i = 0;i < size - 1;i++)
	{
		p[i] = temp[i];
	}
	p[size - 1] = value;
	delete temp;
}

void vector::operator=(vector vec2)
{
	size = vec2.size;
	p = vec2.p;
}

void vector::get_extension()
{
	cout << "array number of extension is " << size << endl;
}

int vector::get_size()
{ 
	return size;
}

int* vector::operator+(int value)
{
	int* arr=new int [size];
	for (int i = 0;i < size;i++)
	{ 
		arr[i] = p[i]+value;
		
	}
	return arr;
}

ostream& operator<<(ostream& out, vector& vec)
{
	for (int i = 0;i < vec.size;i++)
	{
	if (i == vec.size - 1)
			out << vec.p[i] << endl;
		else
		out << vec.p[i]<<",";
	}
	return out;

}
