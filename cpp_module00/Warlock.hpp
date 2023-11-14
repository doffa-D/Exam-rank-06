#pragma once

#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const & copy);
        Warlock & operator = (Warlock const & copy);
    public:
        Warlock(std::string const & Name,std::string const & Title);
        ~Warlock();
        std::string const & getName() const ;
        std::string const & getTitle() const ;
        void setTitle(std::string const &Title);
        void introduce() const;


};