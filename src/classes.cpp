#include "classes.h"
#include <iostream>
using namespace std;

command::command(bool type, std::initializer_list<std::string> commands_temp)
{
	exact = type;
	commands = vector<string> (commands_temp);
}

command::command(bool type, std::initializer_list<std::string> commands_temp, std::initializer_list<std::string> response_temp)
{
	exact = type;
	commands = vector<string> (commands_temp);
	response = vector<string> (response_temp);
}

command_list::command_list(initializer_list<command_group> temp_group)
{
	list = vector<command_group>(temp_group);
}

command_group::command_group(bool type, initializer_list<string> temp_il)
{
	group.push_back(command(type, temp_il));
}

command_group::command_group(bool type, initializer_list<string> temp_command, initializer_list<string> temp_response)
{
	group.push_back(command(type, temp_command, temp_response));
}	

output_item::output_item(std::string str, int pos)
{
	text = str;
	position = pos;
}

bool command_group::compare(std::string command)
{
	for(size_t i=0; i<group.size(); ++i)
	{
		for(size_t j=0; j<group[i].commands.size(); ++j)
		{
			if(group[i].exact && group[i].commands[j] == command)
			{
				return true;
			}
			else if(!group[i].exact && group[i].commands[j].find(command) != string::npos)
			{
				return true;
			}
		}
	}
	return false;	
}

void command_group::respond(std::string command)
{
	for(size_t i=0; i<group.size(); ++i)
	{
		for(size_t j=0; j<group[i].commands.size(); ++j)
		{
			if(group[i].exact && group[i].commands[j] == command && group[i].response.size() != 0)
			{
				add_output(group[i].response[floor(drand48()*group[i].response.size())]);
				return;			
			}
			else if(!group[i].exact && group[i].commands[j].find(command) != string::npos && group[i].response.size() != 0)
			{
				add_output(group[i].response[floor(drand48()*group[i].response.size())]);
				return;
			}
		}
	}
}

bool command_list::compare(string command)
{
	for(size_t i=0; i<list.size(); ++i)
	{
		for(size_t j=0; j<list[i].group.size(); ++j)
		{
			for(size_t k=0; k<list[i].group[j].commands.size(); k++)
			{
				if(list[i].group[j].exact && list[i].group[j].commands[k] == command)
				{
					return true;
				}
				else if(!list[i].group[j].exact && list[i].group[j].commands[k].find(command) != string::npos)
				{
					return true;
				}
			}
		}
	}
	return false;	
}

void command_list::respond(string command)
{
	for(size_t i=0; i<list.size(); ++i)
	{
		for(size_t j=0; j<list[i].group.size(); ++j)
		{
			for(size_t k=0; k<list[i].group[j].commands.size(); k++)
			{
				if(list[i].group[j].exact && list[i].group[j].commands[k] == command)
				{
					add_output(list[i].group[j].response[floor(drand48()*list[i].group[j].response.size())]);
					return;			
				}
				else if(!list[i].group[j].exact && list[i].group[j].commands[k].find(command) != string::npos)
				{
					add_output(list[i].group[j].response[floor(drand48()*list[i].group[j].response.size())]);
					return;
				}
			}
		}
	}
	return;	
}

