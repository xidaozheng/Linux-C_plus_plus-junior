#pragma once

#include <string>

class gun
{
public:
    gun(std::string type);
    void addBullet(int num);
    bool shoot();
private:
    std::string     _type;
    int                    _bullet_num;    
};