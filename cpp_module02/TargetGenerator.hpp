#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>


class TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator const & copy);
        TargetGenerator & operator = (TargetGenerator const & copy);

        std::map<std::string ,ATarget* > book;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget * ATarget_p);
        void forgetTargetType(std::string  const & name);
        ATarget* createTarget(std::string const &name);
};