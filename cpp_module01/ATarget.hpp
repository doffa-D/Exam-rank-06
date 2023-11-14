#pragma once
#include <iostream>

#include "ASpell.hpp"
class ASpell;
class ATarget
{
    protected:
        std::string type;
    public:
        ATarget();
        ATarget(std::string const & Type);
        ATarget(ATarget const & copy);
        ATarget & operator = (ATarget const & copy);
        std::string const & getType() const;
        virtual ~ATarget();
        virtual ATarget * clone() const = 0;
        void getHitBySpell(ASpell const & ASpell_r) const ;
};