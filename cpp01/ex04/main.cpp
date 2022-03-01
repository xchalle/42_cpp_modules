#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::string	content;
	std::string	newfile;
	std::ostream	tmp;
	std::ifstream	_old;
	std::ofstream	_new; 
	if (ac != 4)
	{
		std::cout << "PROTOTYPE: filename \"stringtoreplace\" \"newstring\"" << std::endl;
		return (0);
	}
	_old.open(av[1], std::ofstream::out | std::ofstream::app);
	tmp << av[1] << ".replace";
	tmp >> newfile;
	_new.open(newfile, std::ifstream::in);
	_old >> content;
	//std::ofstream av[1] ("test.txt");
	std::cout <<content << std::endl;
//	outfile << "my text here!" << std::endl;
//	av[1].close();
}
