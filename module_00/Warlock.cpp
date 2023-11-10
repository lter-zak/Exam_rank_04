#include "Warlock.hpp"

Warlock::Warlock(std::string const &n , std::string const &t)
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

void Warlock::introduce() const
{
    std::cout<<name<<": I am "<<name<<", "<<title<<std::endl;
}

std::string const &Warlock::gatName() const
{
    return (name);
}

std::string const &Warlock::getTitle() const 
{
    return (title);
}

void Warlock::setTile(std::string const &t) const
{
    title = t;
}

