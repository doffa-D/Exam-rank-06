#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(std::string const & Name,std::string const & Effects);
        ASpell(ASpell const & copy);
        ASpell & operator = (ASpell const & copy);
        std::string const & getName() const;
        std::string const & getEffects() const;
        virtual ~ASpell();
        virtual ASpell * clone() const = 0;

        void launch(ATarget const & ATarget_r);
};