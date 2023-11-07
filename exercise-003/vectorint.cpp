#include "vectorint.hpp"
#include <fmt/format.h>


VectorInt::VectorInt(int size) {
    mp_Data = new int[size];
    m_size = size;
}

VectorInt::~VectorInt() {
    if(mp_Data != nullptr) {
        delete [] mp_Data;
    }
    mp_Data = nullptr;
}

int& VectorInt::at( size_t pos ){
    if(pos < m_size) {
        return mp_Data[m_size];
    }
    // better use an exception!
    return m_null;
}

size_t VectorInt::size() const {
    return m_size;
}

void VectorInt::resize( size_t count ) {
    // Create a new temporary buffer for the vector
    int* tmp = new int[count];
    auto entries_to_copy{m_size}; // a variable to track the elements to copy    
    // The new buffer size is smaller than the current one
    if(count < m_size) {
        entries_to_copy = count;
    }
    // copy the elements from the old buffer to the new one
    for(int i=0; i<entries_to_copy;i++) {
        tmp[i] = mp_Data[i];
    }

    delete [] mp_Data;
    mp_Data = tmp;
    tmp = nullptr;
    m_size = count;
}
void VectorInt::push_back( const int& value ) {

}