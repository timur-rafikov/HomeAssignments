/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#ifndef MINICON
#define MINICON

#include "transformer.hpp"
#include "instrument.hpp"

class Minicon: public Transformer {
private:
    Instrument* _pickaxe;
    uint _energy;
    uint _size;
public:
    Minicon(const std::string &name, Instrument* pickaxe, const uint &energy, const uint &size);
    Minicon(const std::string &name, Instrument* pickaxe);

    bool operator<(const Minicon& other) const;
    bool operator>(const Minicon& other) const;

    bool work();

    void setEnergy(const uint &energy);
    void setSize(const uint &size);

    uint getEnergy() const;
    uint getSize() const;
};

std::ostream& operator<<(std::ostream& os, const Minicon& minc);

#endif