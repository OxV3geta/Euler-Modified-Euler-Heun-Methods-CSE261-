#include "../include/FileWriter.h"
#include <fstream>
#include <iostream>
#include <iomanip>

void FileWriter::saveTrajectory(const std::string& filename, const std::vector<DataPoint>& data) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    // CSV Header
    file << "t,y_approx,y_exact,abs_error\n";

    for (const auto& point : data) {
        file << point.t << "," 
             << point.y_approx << "," 
             << point.y_exact << "," 
             << point.error << "\n"; 
    }
    file.close();
    std::cout << "Saved: " << filename << std::endl;
