#include "satellite_trajectory/trajectory_solver.hpp"
#include <stdexcept>
namespace sat::orbit {
std::vector<OrbitalState> propagate_rk2(const OrbitalState&,const PropagationOptions&){throw std::logic_error("TODO: satellite RK2");}
std::vector<OrbitalState> propagate_rk4(const OrbitalState&,const PropagationOptions&){throw std::logic_error("TODO: satellite RK4");}
double orbital_period(double,double){throw std::logic_error("TODO: orbital period");}
}
