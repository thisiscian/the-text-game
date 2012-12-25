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
	current_state = 0;
	list = vector<command_group>(temp_group);
}

command_group::command_group(bool type, int state, initializer_list<string> temp_il)
{
	required_state = state;
	group.push_back(command(type, temp_il));
}

command_group::command_group(bool type, int state, initializer_list<string> temp_command, initializer_list<string> temp_response)
{
	required_state = state;
	group.push_back(command(type, temp_command, temp_response));
}	

output_item::output_item(std::string str, int pos)
{
	text = str;
	position = pos;
}

void command_list::change_state(int state)
{
	current_state = state;
}

bool command_group::compare(int current_state, std::string command)
{
	int state = current_state;
	for(size_t i=0; i<group.size(); ++i)
	{
		while(state >= 0)
		{
			if(required_state == state)
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
			state--;
		}
	}
	return false;	
}

void command_group::respond(int current_state, std::string command)
{
	int state = current_state;
	for(size_t i=0; i<group.size(); ++i)
	{
		while(state >= 0)	
		{
			if(required_state == state)
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
	}
}

bool command_list::compare(string command)
{
	for(size_t i=0; i<list.size(); ++i)
	{
		list[i].respond(current_state, command);
	}
	return false;	
}

void command_list::respond(string command)
{
	for(size_t i=0; i<list.size(); ++i)
	{
		if(list[i].compare(current_state, command))
		{
			list[i].respond(current_state, command);
			return;
		}
	}
	return;	
}

