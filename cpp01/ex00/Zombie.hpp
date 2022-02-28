#include <iostream>
#include <string>

class   Zombie
{
    public:
        Zombie();
        ~Zombie();
        void    announce( void );
        Zombie*  newZombie(std::string zom);

    private:
        std::string name;
};

void    randomChump( std::string name );
