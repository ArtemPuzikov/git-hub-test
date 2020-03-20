#include <iostream>
using namespace std;

class Weapon
{
public:
    virtual void Attack()
    {

    };
};

class Gun : public Weapon
{
    void Attack() override
    {
        cout << "BANG" << endl;
    }
};
class SubMachineGun : public Gun
{
    void Attack() override
    {
        cout << "BANG BANG BANG" << endl;
    }
};
class Knife : public Weapon
{
public:
    void Attack() override
    {
    }
};
class Machete : public Weapon
{
public:
    void Attack() override
    {
    }
};
class Player
{
public:
    void UseWeapon(Weapon* weapon)
    {
        weapon->Attack();
    }
};
