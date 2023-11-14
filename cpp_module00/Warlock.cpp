
#include "Warlock.hpp"

Warlock::Warlock(std::string const & Name,std::string const & Title)
{
    this->name = Name;
    this->title = Title;
    std::cout << this->name << ": This looks like another boring day."<<std::endl;
}
Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}
std::string const & Warlock::getName() const 
{
    return this->name;
}
std::string const & Warlock::getTitle() const 
{
    return this->title;
}
void Warlock::setTitle(std::string const &Title)
{
    this->title = Title;
}

void Warlock::introduce() const
{
    // <NAME>: I am <NAME>, <TITLE>!

    std::cout << this->name << ": I am "<< this->name << ", " << this->title << "!" << std::endl;
}
