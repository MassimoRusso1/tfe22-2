#include <fmt/chrono.h>
#include <fmt/format.h>

#include "vectorint.hpp"

auto main(int argc, char **argv) -> int
{
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, World!\n");

    VectorInt data(20);

    // resize the vector to 10 elements
    auto resize_value = 10;
    auto prev_size = data.size();
    fmt::print("Perform a resize from {} to {}\n",prev_size,resize_value);
    data.resize(resize_value);
    if(resize_value != data.size()) {
        fmt::print("A size mismatch detected expected value {} actual value {}\n",resize_value,data.size());
        return 1;
    }
    fmt::print("Performed a resize from {} to {}\n",prev_size,resize_value);
    
    resize_value = 42;
    prev_size = data.size();
    fmt::print("Perform a resize from {} to {}\n",prev_size,resize_value);
    prev_size = data.size();
    data.resize(resize_value);
    if(resize_value != data.size()) {
        fmt::print("A size mismatch detected expected value {} actual value {}\n",resize_value,data.size());
        return 1;
    }
    fmt::print("Performed a resize from {} to {}\n",prev_size,resize_value);
    return 0; /* exit gracefully*/
}