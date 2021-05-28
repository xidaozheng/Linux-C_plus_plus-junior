#pragma once

#include <string>
#include "gun.h"

class solider
{
public:
    solider(std::string name);
    solider(const solider &obj);
    ~solider();
    void addGun(gun *type);
    void addBulletToGun(int num);
    bool fire();
private:
    std::string     _name;
    gun                 *_gun_type;
};