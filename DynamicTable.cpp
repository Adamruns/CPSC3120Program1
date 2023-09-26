
#include "DynamicTable.h"

void DynamicTable::insert(int value, bool dummy_version) {

    //add a new element in the table
    //use `dummy_version` to decide which version of resize you want to call
    if (last == size - 1) {
        if (dummy_version) {
            resize_dummy();
        } else {
            resize();
        }
    }

    // Increment the last index and add the value to the table
    last++;
    table[last] = value;
}

void DynamicTable::resize_dummy() {
    n_resize_called++;
    
    //resize the table when necessary adding one empty slot
    n_resize_called++;

    // Create a new array with one additional slot
    int new_size = size + 1;
    int* new_array = new int[new_size];

    // Copy elements from the old array to the new one
    for (int i = 0; i < size; i++) {
        new_array[i] = table[i];
    }

    // Deallocate the old array and update new one
    delete[] table;
    table = new_array;
    size = new_size;

}

void DynamicTable::resize() {
    n_resize_called++;
    //resize the table when necessary doubling its size

    n_resize_called++;

    // Double the size of the array
    int new_size = size * 2;
    int* new_array = new int[new_size];

    // Copy the elements from the old array to the new array
    for (int i = 0; i < size; i++) {
        new_array[i] = table[i];
    }

    // Deallocate the old array and update the new one
    delete[] table;
    table = new_array;
    size = new_size;
}