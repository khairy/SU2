/*!
 * \file SU2_GDC.hpp
 * \brief Headers of the main subroutines of the code SU2_GDC.
 *        The subroutines and functions are in the <i>SU2_GDC.cpp</i> file.
 * \author Aerospace Design Laboratory (Stanford University) <http://su2.stanford.edu>.
 * \version 3.0.0 "eagle"
 *
 * Stanford University Unstructured (SU2).
 * SU2, Copyright (C) 2012-2014 Aerospace Design Laboratory (ADL).
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

#include "../../Common/include/geometry_structure.hpp"
#include "../../Common/include/config_structure.hpp"
#include "../../Common/include/grid_movement_structure.hpp"

using namespace std;

/*--- function prototypes ---*/
void Tracked_Points_to_Coords(CBoundaryGeometry *boundary);
void Make_Sectional_Cuts(CConfig *config, CBoundaryGeometry *boundary);
void clean_up(const char *filename);
bool fexists(const char *filename);

