#include <iostream>

struct Point {
    double x;
    double y;
};

int main() {
    // C++20 designated initializers
    Point p = {.x = 10.0, .y = 20.0}; 
    
    std::cout << "Hello C++20! Point coordinates: (" 
              << p.x << ", " << p.y << ")" << std::endl;
              
    return 0;
}
