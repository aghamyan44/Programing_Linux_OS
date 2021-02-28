#include <iostream>
#include <string>
#include <map>


void change_capital(std::map<std::string, std::string>& capitals)
{
	std::string country_name, capital;
	std::cout << "Input Country Name: " << std::endl;
	std::cin >> country_name;
	std::cout << "Imput Capital: " << std::endl;
	std::cin >> capital;

	if (capitals.find(country_name) == capitals.end())
	{
		capitals[country_name] = capital;
		std::cout << "New country {" << country_name << "} wtih capital{" << capital << "}" << std::endl;
	}
	else
	{
		for (auto& it : capitals)
		{
			if (it.first == country_name)
			{
				if (it.second == capital)
				{
					std::cout << "The capital of{" << country_name << "} hasn't been changed" << std::endl;
				}
				else
				{
					it.second = capital;
					std::cout << "The capital of{" << country_name << "} has been changed to{" << capital << " }" << std::endl;
				}
			}
		}
	}

}
void rename(std::map<std::string, std::string>& capitals)
{
	std::string old_country, new_country;
	std::cout << "Imput Old Country: " << std::endl;
	std::cin >> old_country;
	std::cout << "Imput New Country: " << std::endl;
	std::cin >> new_country;

	if (old_country == new_country)
	{
		std::cout << "The capital of{" << old_country << "} hasn't been changed." << std::endl;
	}

	if (capitals.find(new_country) == capitals.end())
	{
		if (capitals.find(old_country) == capitals.end())
		{
			std::cout << "Incorrect rename." << std::endl;
		}
		else
		{
			std::string  second = capitals.find(old_country)->second;
			capitals.erase(old_country);
			capitals[new_country] = second;
			std::cout << "Country { " << old_country << "} has been renamed to {" << new_country << "}." << std::endl;
		}
	}
	else
	{
		std::cout << "Incorrect rename." << std::endl;
	}

}
void about(std::map<std::string, std::string>& capitals)
{
	std::string country;
	std::cout << "Input Country: " << std::endl;
	std::cin >> country;

	if (capitals.find(country) == capitals.end())
	{
		std::cout << "Country {" << country << "} does not exist." << std::endl;
	}
	else
	{
		std::cout << "Country{" << country << "} has the capital{" << capitals.find(country)->second << "}." << std::endl;
	}

}
void dumpall(std::map<std::string, std::string>& capitals)
{
	for (auto& it : capitals)
	{
		std::cout << "Country {" << it.first << "} has the capital {" << it.second << "}." << std::endl;
	}
}



void parser(std::map<std::string, std::string>& capitals)
{
	std::string command;

	while (std::cin >> command)
	{
		std::cout << "Imput Command: ";

		if (command == "CHANGE_CAPITAL")
		{
			change_capital(capitals);
		}
		if (command == "RENAME")
		{
			rename(capitals);
		}
		if (command == "ABOUT")
		{
			about(capitals);
		}
		if (command == "DUMPALL")
		{
			dumpall(capitals);
		}
		std::cout << "Not Correct Command: ";
	}
}

int main()
{
	std::map<std::string, std::string> capitals;
	parser(capitals);
}
