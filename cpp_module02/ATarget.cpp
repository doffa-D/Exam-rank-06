#include "ATarget.hpp"



ATarget::ATarget(){}
ATarget::ATarget(std::string const & Type)
{
    this->type = Type;
}
ATarget::ATarget(ATarget const & copy)
{
    *this = copy;
}
ATarget & ATarget::operator = (ATarget const & copy)
{
    this->type = copy.getType();
    return *this;
}
std::string const & ATarget::getType() const
{
    return this->type;
}

ATarget::~ATarget() {}


void ATarget::getHitBySpell(ASpell const & ASpell_r) const
{
    // <TYPE> has been <EFFECTS>!
    std::cout << this->type << " has been " << ASpell_r.getEffects() << "!" << std::endl;
}
