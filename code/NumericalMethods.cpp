#include "../include/NumericalMethods.h"
#include <cmath>

std::vector<DataPoint> NumericalSolver::solveEuler(Func f, ExactFunc exact, double y0, double t0, double tend, double h) {
    std::vector<DataPoint> results;
    double t = t0;
    double y = y0;

    // Push initial condition
    results.push_back({t, y, exact(t), std::abs(y - exact(t))});

    while (t < tend) {
        // Euler Formula
        y = y + h * f(t, y);
        t = t + h;

        double exact_val = exact(t);
        results.push_back({t, y, exact_val, std::abs(y - exact_val)});
    }
    return results;
}

std::vector<DataPoint> NumericalSolver::solveHeun(Func f, ExactFunc exact, double y0, double t0, double tend, double h) {
    std::vector<DataPoint> results;
    double t = t0;
    double y = y0;

    results.push_back({t, y, exact(t), std::abs(y - exact(t))});
 
