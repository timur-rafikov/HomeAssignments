/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#ifndef TRANSFORMER
#define TRANSFORMER

#include <iostream>
#include <string>

class Transformer {
private:
    std::string _name;
    uint _level;
    uint _strength;
    uint _fuel;
    uint _ammo;
public:
    //Transformer(std::string name = "Untitled", uint level = 0, uint strength = 0, uint fuel = 0, uint ammo = 0);
    Transformer(const std::string &name, const uint &level, const uint &strength, const uint &fuel, const uint &ammo);
    Transformer(const std::string &name);
    Transformer();
    ~Transformer();

    bool operator<(const Transformer& other) const;
    bool operator>(const Transformer& other) const;

    virtual void transform();
    virtual void openFire();
    virtual void ulta();

    void setName(const std::string &name);
    void setLevel(const uint &level);
    void setStrength(const uint &strength);
    void setFuel(const uint &fuel);
    void setAmmo(const uint &ammo);

    std::string getName() const;
    uint getLevel() const;
    uint getStrength() const;
    uint getFuel() const;
    uint getAmmo() const;

    bool fire();
    bool move();
    bool jump();
};

std::ostream& operator<<(std::ostream& os, const Transformer& trans);

#endif