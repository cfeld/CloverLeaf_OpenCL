/*Crown Copyright 2012 AWE.
*
* This file is part of CloverLeaf.
*
* CloverLeaf is free software: you can redistribute it and/or modify it under
* the terms of the GNU General Public License as published by the
* Free Software Foundation, either version 3 of the License, or (at your option)
* any later version.
*
* CloverLeaf is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
* details.
*
* You should have received a copy of the GNU General Public License along with
* CloverLeaf. If not, see http://www.gnu.org/licenses/. */

/**
 *  @brief Prints the OCL profiling information.
 *  @author Andrew Mallinson, David Beckingsale
 *  @details Enables the functionality to print the OCL profiling information to be call from Frotran
*/

#include "CloverCL.h"

extern "C" void print_ocl_profiling_stats_();

extern "C" void zero_ocl_profiling_timers_();

void print_ocl_profiling_stats_()
{
#if PROFILE_OCL_KERNELS
    CloverCL::print_profile_stats();
#endif
}

void zero_ocl_profiling_timers_()
{
#if PROFILE_OCL_KERNELS
    CloverCL::zero_profiling_timers();
#endif
}
        
