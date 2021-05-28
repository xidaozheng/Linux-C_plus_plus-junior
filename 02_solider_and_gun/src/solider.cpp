#include "solider.h"

solider::solider(std::string name)
{
    this->_name = name;
    this->_gun_type = nullptr;
}

solider::solider(const solider &obj)
{
    this->_gun_type = obj._gun_type;
    this->_name = obj._name;
}

solider::~solider()
{
    if(this->_gun_type != nullptr)
    {
        delete _gun_type;
        _gun_type = nullptr;
    }
}

void solider::addGun(gun *type)
{
    if(type != nullptr)
        this->_gun_type  = type;
}

void solider::addBulletToGun(int num)
{
    this->_gun_type->addBullet(num);
}

bool solider::fire()
{
    return this->_gun_type->shoot();
}

