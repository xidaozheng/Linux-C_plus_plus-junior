#include "gun.h"
#include "solider.h"
#include <iostream>

void test()
{
    solider sanduo("xudanduo");

    sanduo.addGun(new gun("AK47"));
    sanduo.addBulletToGun(20);
    if(sanduo.fire())
        std::cout << "shoot is successful!" << std::endl;
    else
        std::cout << "the gun need to add bullet!" << std::endl;
}

int main(int argc, char **argv)
{
    std::cout << "this is test tash.json function!" << std::endl;
     test();

}