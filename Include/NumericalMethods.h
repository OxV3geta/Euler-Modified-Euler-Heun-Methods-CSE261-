#ifndef NUMERICAL_METHODS_H
#define NUMERICAL_METHODS_H

#include <vector>
#include "ODEFunctions.h"

struct DataPoint {
    double t;
    double y_approx;
    double y_exact;
    double error;
