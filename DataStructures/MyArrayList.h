#pragma once

#include <iostream>

template<typename Type>
class MyArrayList
{
private:
    Type* list;
    int capacity;
    int size;
public:
    MyArrayList(int capacity = 16) : list(new Type[capacity]), capacity(capacity), size(0)
    {
        
    }

    ~MyArrayList()
    {
        delete[] list;
    }

    void insert(Type item, int index)
    {
        if (index > size || index < 0) {
            return;
        }
        if (size == capacity) {
            resize();
        }
        // shift elements
        for (int i = size; i > index; i--) {
            list[i] = list[i - 1];
        }
        // place the item
        list[index] = item;
        size++;
    }

    Type get(int index)
    {
        if (index >= size || index < 0) {
            throw std::out_of_range("Index out of range!");
        }
        return list[index];
    }

    void resize()
    {
        capacity *= 2;
        Type* temp = new Type[capacity];
        for (int i = 0; i < size; i++) {
            temp[i] = list[i];
        }
        delete[] list;
        list = temp;
    }

    int getSize() 
    {
        return size;
    }
};
