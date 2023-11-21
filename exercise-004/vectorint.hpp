#ifndef MY_INTEGER_VECTOR_HPP
#define MY_INTEGER_VECTOR_HPP

#include <cstddef>

class VectorInt {
public:
    VectorInt(int size);
    ~VectorInt();
    int& at( size_t pos );
    size_t size() const;
    void resize( size_t count );
    void push_back( const int& value );
    void print();
    void copy_dynamic_array(int* source, int* destination, int size);

private:
    int m_size;
    int* mp_Data;
    int m_null{0};
    int capacity{0};
};
#endif