#pragma once

// #include "gurobi_c++.h"
// #include <vector>

// using GRBVar1D = std::vector<GRBVar>;
// using GRBVar2D = std::vector<std::vector<GRBVar>>;

#include "ortools/linear_solver/linear_solver.h"
#include <vector>

namespace operations_research
{
using GRBVar1D = std::vector<MPVariable*>;
using GRBVar2D = std::vector<std::vector<MPVariable*>>;
}