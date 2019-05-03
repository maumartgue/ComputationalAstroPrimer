#ifndef BOUNDARY_H
#define BOUNDARY_H

#include <array>

//================================//
// reflecting_boundary_conditions //
//================================//
/// apply reflecting boundary conditions
// ghost zones are literally a reflection of the non-ghost zones
// call with:
//     reflecting_boundary_conditions<nx,nghost>(conservative);
template<int nx, int nghost>
void reflecting_boundary_conditions(array<array<double,nx>,3>& inout){
 for(int i=0; i<nghost; i++){
   for(int j=0; j<3; j++){
    inout[0][i] = inout[0][2*nghost-1-i];
    inout[0][nx-1-i] = inout[0][nx-2*nghost+i];
   }; 
 }; // YOU NEED TO IMPLEMENT THIS
}

#endif
