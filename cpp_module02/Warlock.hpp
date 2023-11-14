#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const & copy);
        Warlock & operator = (Warlock const & copy);
        SpellBook book;
    public:
        Warlock(std::string const & Name,std::string const & Title);
        ~Warlock();
        std::string const & getName() const ;
        std::string const & getTitle() const ;
        void setTitle(std::string const &Title);
        void introduce() const;

        void learnSpell(ASpell * ASpell_p);
        void forgetSpell(std::string name);
        void launchSpell(std::string name,ATarget const & ATarget_r);
};