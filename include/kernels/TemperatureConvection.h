#ifndef TEMPERATURECONVECTION
#define TEMPERATURECONVECTION

#include "Kernel.h"
#include "Material.h"

//Forward Declarations
class TemperatureConvection;

template<>
InputParameters validParams<TemperatureConvection>();

class TemperatureConvection : public Kernel
{
public:

  TemperatureConvection(std::string name, MooseSystem & moose_system, InputParameters parameters);

protected:
  virtual Real computeQpResidual();
  virtual Real computeQpJacobian();  

  MooseArray<Real> &_water_specific_heat;
  MooseArray<RealGradient> &_darcy_flux_w;
  MooseArray<Real> &_rho_w;
//  MooseArray<RealGradient> &_pore_velocity_w;
  
};
#endif //TEMPERATURECONVECTION
