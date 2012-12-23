#ifndef __CLASSES_H__
#define __CLASSES_H__

#include <string>
#include <vector>
#include <ncurses.h>
#include <cmath>

class command
{
	public:
	bool exact;
	std::vector<std::string> commands;
	std::vector<std::string> response;
	
	command(bool type, std::initializer_list<std::string> commands_temp);
	command(bool type, std::initializer_list<std::string> commands_temp, std::initializer_list<std::string> response_temp);
};

class command_group
{
	public:
	std::vector<command> group;
	command_group(bool type, std::initializer_list<std::string> commands_temp);
	command_group(bool type, std::initializer_list<std::string> commands_temp, std::initializer_list<std::string> responses_temp);
	bool compare(std::string command);
	void respond(std::string command);
};

class command_list
{
	public:
	std::vector<command_group> list;

	command_list(std::initializer_list<command_group> temp_il);
	bool compare(std::string command);
	void respond(std::string command);
};

class output_item
{
	public:
	std::string text;
	int position;
	
	output_item(std::string str, int pos);
};

void add_output(std::string str);

#endif
