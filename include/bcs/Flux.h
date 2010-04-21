#ifndef FLUX_H
#define FLUX_H

#include "BoundaryCondition.h"

//Forward Declarations
class Flux;

template<>
InputParameters validParams<Flux>();

class Flux : public BoundaryCondition
{
public:

  Flux(std::string name, MooseSystem & moose_system, InputParameters parameters);
  
  virtual ~Flux(){}

protected:
  virtual Real computeQpResidual(){return 0;}
  virtual Real computeQpIntegral();
  
private:
  Real _coefficient;
};

#endif //FLUXBC_H

