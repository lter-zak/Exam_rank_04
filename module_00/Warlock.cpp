#include "Warlock.hpp"

Warlock::Warlock(std::string const &n , std::stirng const &t)
{
   this->name = n;
    this->title = t;
    std::cout<<this->name<<": This looks like another boring day."<<std::endl;
}

Warlock::Warlock(){}

Warlock::~Warlock()
{
    std::cout<<name<<": My job here is done!"<<std::endl;
}

void Warlock::introduce()
{
    std::cout<<name<<": I am "<<name<<", "<<title<<std::endl;
}

std::string const &Warlock::gatNmae()
{
    return (name);
}

std::stirng& const Warlock::getTitle()
{
    return (title);
}

void Warlock::setTile(std::strign& const t)
{
    title = t;
}

