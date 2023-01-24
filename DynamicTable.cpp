
#include "DynamicTable.h"

void DynamicTable::insert(int value, bool dummy_version) {

    //add a new element in the table
    //use `dummy_version` to decide which version of resize you want to call

}

void DynamicTable::resize_dummy() {
    n_resize_called++;
    
    //resize the table when necessary adding one empty slot


}

void DynamicTable::resize() {
    n_resize_called++;

    //resize the table when necessary doubling its size



}