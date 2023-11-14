
#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}
TargetGenerator::~TargetGenerator()
{
    std::map<std::string ,ATarget*>::iterator begin = book.begin();
    std::map<std::string ,ATarget*>::iterator end = book.end();

    while(begin != end)
    {
        delete begin->second;
        begin++;
    }
    book.clear();
}

void TargetGenerator::learnTargetType(ATarget * ATarget_p)
{
    if(ATarget_p)
        book.insert(std::pair<std::string , ATarget * >(ATarget_p->getType(),ATarget_p->clone()));
}
void TargetGenerator::forgetTargetType(std::string  const & name)
{
    std::map<std::string ,ATarget*>::iterator it = book.find(name);
    if(it != book.end())
        delete it->second;
    book.erase(name);
}

ATarget* TargetGenerator::createTarget(std::string const &name)
{
    std::map<std::string ,ATarget*>::iterator it = book.find(name);
    if(it != book.end())
        return  book[name];
    return NULL;
}
