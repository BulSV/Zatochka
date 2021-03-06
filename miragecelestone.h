#ifndef MIRAGECELESTONE_H
#define MIRAGECELESTONE_H

#include <iostream>
#include "globalenums.h"
#include "stone.h"

class MirageCelestone: public Stone
{
    static std::string CATEGORY;
    std::string itsCategory;
public:
    MirageCelestone();
    virtual ~MirageCelestone();
    virtual std::string category() const;
    virtual float addChance(const Armor *armor) const;
    REFINE refineRequest(float obtainedChance) const;
};

#endif // MIRAGECELESTONE_H
