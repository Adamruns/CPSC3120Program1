
#ifndef UNTITLED_DYNAMICTABLE_H
#define UNTITLED_DYNAMICTABLE_H

#include <stdlib.h>

class DynamicTable {


public:
    DynamicTable(){
        n_resize_called = 0;
        
        //TODO: implement the constructor
        //when created the table should have space for one element
        //variable `size` and `last` should be set accordingly
        size = 1; // Initialize size with space for one element
        last = -1; // Initialize last to -1 as there are no elements yet
        table = new int[size]; // Allocate memory for the array
    }

    ~DynamicTable(){
        //TODO: implement the destructor
        //when destroyed you should call explicitly the destructor for the array
        delete[] table; // Deallocate the memory for the array
    }

    inline int get_n_resize(){return n_resize_called;}

    void insert(int value, bool dummy_version); //TODO: implement the insert function


private:

    void resize_dummy(); //TODO: implement an inefficient resize function that will expand the array adding only 1 empty spot every time the array is full.
    void resize(); //TODO: implement a resize function that doubles the size of the array every time it is full.

    int* table; //array containing the"list" of elements
    int size; //the size of the array
    int last; //the position of the last element

    int n_resize_called; //you can ignore this value. It is used for debug purposes

};


#endif //UNTITLED_DYNAMICTABLE_H
