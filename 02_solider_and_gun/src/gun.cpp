#include "gun.h"
#include <iostream>

gun::gun(std::string type)
{
    this->_type = type;
}

void gun::addBullet(int num)
{
    this->_bullet_num = num;
}

bool gun::shoot()
{
    if(this->_bullet_num <= 0)
    {
        std::cout << "the gun is no bullets!" << std::endl;

        return false;
    }
    --this->_bullet_num;
    return true;
}


