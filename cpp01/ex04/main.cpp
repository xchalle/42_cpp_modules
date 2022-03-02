#include <iostream>
#include <fstream>
#include <sstream>

int	main(int ac, char **av)
{
	size_t		found;
	std::string	content;
	std::string	newcontent;
	std::string	newfile;
	std::string	s1;
	std::string	s2;
	std::ifstream	old1;
	std::ofstream	new1; 
	std::ostringstream o_tmp;

	if (ac != 4)
	{
		std::cout << "PROTOTYPE: filename \"stringtoreplace\" \"newstring\"" << std::endl;
		return (0);
	}
	s1 = av[2];
	s2 = av[3];
	old1.open(av[1], std::ifstream::in);
	if (!_old)
	{
		std::cout  << "Error opening " << av[1] << std::endl;
		return (0);
	}
	o_tmp << av[1] << ".replace";
	newfile = o_tmp.str();
	new1.open(newfile, std::ofstream::out);
	if (!new1)
	{
		std::cout  << "Error opening " << av[1] << ".replace" << std::endl;
		return (0);
	}
	while (std::getline(old1, content))
	{
		found = content.length();
		while ((found = content.rfind(s1, found)) != content.npos)
		{
			std::cout << found << std::endl;
			content.erase(found, s1.length());
			content.insert(found, s2);
			if (found == 0)
				break;
			found--;
		}
		new1 << content;
		if (!(old1.eof()))
			new1 << std::endl;
	}
	old1.close();
	new1.close();
	return (0);
}
