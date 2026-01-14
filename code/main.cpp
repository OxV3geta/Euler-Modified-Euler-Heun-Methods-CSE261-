#include <iostream>
#include <vector>
#include <string>
#include "../include/NumericalMethods.h"
#include "../include/FileWriter.h"
#include "../include/ODEFunctions.h"

int main() {
    std::cout << "=== CSE261 Numerical Methods Project ===\n";
    std::cout << "Method: Euler, Heun, Midpoint\n\n";

 // 1. PARAMETERS
    double y0 = 0.5;
    double t0 = 0.0;
    double tend = 2.0;
    double h_default = 0.1;
