#ifndef MIRAGECELESTONE_H
#define MIRAGECELESTONE_H

#include "globalenums.h"
#include "stone.h"

class MirageCelestone: public Stone
{    
public:
    MirageCelestone();    
    virtual ~MirageCelestone();
    virtual float addChance(const Armor *armor) const;
    REFINE refineRequest(float obtainedChance) const;
};

#endif // MIRAGECELESTONE_H