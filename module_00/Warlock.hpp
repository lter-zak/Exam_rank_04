
#ifndef WARLOCK_HPP
#define WARLOCK_HPP


#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;
        Warlock();
    public:
        Warlock(std::string const &name , std::string  const &title);
        ~Warlock();
        std::string const &getNmae() const;
        std::string const &getTitle() const;
        void introduce() const;
        void setTitel(std::string const &title);
};

#endif
