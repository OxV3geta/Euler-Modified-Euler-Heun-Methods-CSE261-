#ifndef ODE_FUNCTIONS_H
#define ODE_FUNCTIONS_H

#include <cmath>
#include <functional>

// Definition of the ODE type: dy/dt = f(t, y)
using Func = std::function<double(double, double)>;
// Definition of the Exact Solution type: y = f(t)
using ExactFunc = std::function<double(double)>;
