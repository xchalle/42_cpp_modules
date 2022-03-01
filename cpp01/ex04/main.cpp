#include <iostream>
#include <fstream>
#include <sstream>

int	main(int ac, char **av)
{
	std::string	content;
	std::string	newfile;
	std::ifstream	_old;
	std::ofstream	_new; 
	std::ostringstream o_tmp;

	if (ac != 4)
	{
		std::cout << "PROTOTYPE: filename \"stringtoreplace\" \"newstring\"" << std::endl;
		return (0);
	}
	_old.open(av[1], std::ifstream::in);
	o_tmp << av[1] << ".replace";
	newfile = o_tmp.str();
	std::cout << newfile << std::endl;
	_new.open(newfile, std::ofstream::out | std::ofstream::app);
	content = _old.rdbuf();
	//std::ofstream av[1] ("test.txt");
	std::cout << content << std::endl;
//	outfile << "my text here!" << std::endl;
//	av[1].close();
}
