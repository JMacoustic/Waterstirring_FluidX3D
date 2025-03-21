#ifndef FLUIDDATA_HPP
#define FLUIDDATA_HPP

#include <vector>
#include <string>

struct Material {
    std::string name;
    float density;
    float surface_tension;
    float dynamic_viscosity;
    float kinematic_viscosity;
};

std::vector<Material> readCSV(const std::string& filename);
Material selectMaterial(const std::vector<Material>& materials, const std::string& name);
void exportConfig(const Material& material, const int& rpm, const std::string& option, const std::string& exportpath, const std::string& folder_str);
//void exportVideo(const std::string& exportpath); // this function is still on develpment

#endif // FLUIDDATA_HPP
