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

 // 2. RUN SIMULATION FOR CURVES (Visual Comparison)
 std::cout << "Running simulations with h = " << h_default << "...\n";

 auto eulerData = NumericalSolver::solveEuler(ODEProblems::test_derivative, ODEProblems::test_exact, y0, t0, tend, h_default);
 auto heunData = NumericalSolver::solveHeun(ODEProblems::test_derivative, ODEProblems::test_exact, y0, t0, tend, h_default);
 auto midData = NumericalSolver::solveMidpoint(ODEProblems::test_derivative, ODEProblems::test_exact, y0, t0, tend, h_default);


  // 3. SAVE DATA FOR PLOTTING
    // Ensure the 'results' folder exists or the path is correct
    FileWriter::saveTrajectory("results_euler.csv", eulerData);
    FileWriter::saveTrajectory("results_heun.csv", heunData);
    FileWriter::saveTrajectory("results_midpoint.csv", midData);

