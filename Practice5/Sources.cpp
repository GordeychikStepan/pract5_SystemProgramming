#include <algorithm>

int minFunction(int a, int b, int c) {
    return std::min(std::min(a, b), c);
}

int minFunction(int a, int b, int c, int d) {
    return std::min(std::min(a, b), std::min(c, d));
}

float minFunction(float a, float b, float c) {
    return std::min(std::min(a, b), c);
}

double minFunction(double a, double b) {
    return std::min(a, b);
}