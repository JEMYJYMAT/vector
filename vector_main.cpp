/*
 * vector main file.cpp
 *
 *  Created on: Feb 9, 2024
 *      Author: Ahmed Gamal
 */

using namespace std;
#include <iostream>
#include "vector.h"

int main()
{
    vector vec;
    vec.add_element(10);
    cout << vec;
    vec.add_element(20);
    vector vec2 = vec;
    cout << vec;
    vec2.add_element(30);
    vec2.add_element(40);
    cout << vec2;
    vec2.get_extension();
    int* arr = vec2+30;
    for (int i = 0;i < vec2.get_size();i++)
    {
        if (i == vec2.get_size() - 1)
            cout << arr[i] << endl;
        else
            cout << arr[i] << ",";
    }

    
}
