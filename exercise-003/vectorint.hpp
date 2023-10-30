#ifndef MY_INTEGER_VECTOR_HPP
#define MY_INTEGER_VECTOR_HPP

class VectorInt {
public:
    VectorInt(int size);
    ~VectorInt();
private:
    int m_size;
    int* mp_Data;
};

#endif