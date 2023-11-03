#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
    std::string type; 
public:
    // Constructor
    Weapon(std::string);
    
    // Getter
    const std::string& getType() const;
    
    // Setter
    void setType(const std::string&);
};

#endif