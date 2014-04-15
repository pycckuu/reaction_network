#ifndef FINITE_DIFFERENCE_GRID_HPP
#define FINITE_DIFFERENCE_GRID_HPP

#include "iostream"
#include "Eigen/Sparse"
#include <vector>
#include "Node.hpp"
#include "gtest/gtest_prod.h"

using namespace Eigen;
using namespace std;

class FiniteDifferenceGrid {

    public:
        std::vector<Node> mNodes;
        VectorXd xGrid;
        friend class BvpOde1D; 
        friend class BvpOde; 
        void xGridForamtion(int xNumNodes, double xMin, double xMax);
};

#endif // FINITE_DIFFERENCE_GRID_HPP