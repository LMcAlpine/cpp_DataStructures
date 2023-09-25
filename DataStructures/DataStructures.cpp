// DataStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "MyArrayList.h"
#include <iostream>

int main()
{
    MyArrayList<int> arrayList;

    arrayList.insert(10, 0);
    arrayList.insert(20, 1);
    arrayList.insert(15, 1);  // Insert 15 between 10 and 20

    std::cout << "Size of array list: " << arrayList.getSize() << std::endl;
}
