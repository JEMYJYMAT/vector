/*
 * vector.h
 *
 *  Created on: Feb 9, 2024
 *      Author: Ahmed Gamal
 */
#ifndef vector header
#define vector header

using namespace std;
#include <iostream>

class vector
{
private:
	int size;
	int *p;
public:
	vector();
	void add_element(int value);
	friend ostream& operator <<(ostream& out, vector& vec);
	void operator =(vector vec2);
	void get_extension();
	int get_size();
	int* operator +(int value);
	
};

#endif // vector header
