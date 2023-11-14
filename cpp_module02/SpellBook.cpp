
#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}
SpellBook::~SpellBook()
{
    std::map<std::string ,ASpell*>::iterator begin = book.begin();
    std::map<std::string ,ASpell*>::iterator end = book.end();

    while(begin != end)
    {
        delete begin->second;
        begin++;
    }
    book.clear();
}

void SpellBook::learnSpell(ASpell * ASpell_p)
{
    if(ASpell_p)
        book.insert(std::pair<std::string , ASpell * >(ASpell_p->getName(),ASpell_p->clone()));
}
void SpellBook::forgetSpell(std::string  const & name)
{
    std::map<std::string ,ASpell*>::iterator it = book.find(name);
    if(it != book.end())
        delete it->second;
    book.erase(name);
}

ASpell* SpellBook::createSpell(std::string const &name)
{
    std::map<std::string ,ASpell*>::iterator it = book.find(name);
    if(it != book.end())
        return  book[name];
    return NULL;
}
