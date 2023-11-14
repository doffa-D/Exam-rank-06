#include "ASpell.hpp"



ASpell::ASpell(){}
ASpell::ASpell(std::string const & Name,std::string const & Effects)
{
    this->name = Name;
    this->effects = Effects;
}
ASpell::ASpell(ASpell const & copy)
{
    *this = copy;
}
ASpell & ASpell::operator = (ASpell const & copy)
{
    this->name = copy.getName();
    this->effects = copy.getEffects();
    return *this;
}
std::string const & ASpell::getName() const
{
    return this->name;
}
std::string const & ASpell::getEffects() const
{
    return this->effects;
}
ASpell::~ASpell() {}

void ASpell::launch(ATarget const & ATarget_r)
{
    ATarget_r.getHitBySpell(*this);
}
