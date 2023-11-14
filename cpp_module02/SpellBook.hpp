#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>


class SpellBook
{
    private:
        SpellBook(SpellBook const & copy);
        SpellBook & operator = (SpellBook const & copy);

        std::map<std::string ,ASpell* > book;
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell * ASpell_p);
        void forgetSpell(std::string  const & name);
        ASpell* createSpell(std::string const &name);
};