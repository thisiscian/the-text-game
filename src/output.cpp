#include "output.h"
using namespace std;
using namespace text_game_var;

void clear_output()
{
	output_list.clear();
}

void draw_output()
{
	string title = "THE CIAN AND FIONN GAME";
  output_window = newwin(output_height,0,0,0);
  box(output_window, 0 , 0);
	wmove(output_window, 0, (COLS-title.length())/2);
  wrefresh(output_window);
}

void print_outputs()
{
	delwin(output_window);
	draw_output();
	for(size_t i=0; i<output_list.size(); i++)
	{
		int position = output_list[i].position;
		string text = output_list[i].text;
		int length;	

		while(text.find("/b") != string::npos)
		{
			wmove(output_window, i+1, position);
			length = text.find("/b");
	
			wprintw(output_window, text.substr(0, length).c_str());
	
			text.erase(0, length+2);
			position+=length;
		
			wmove(output_window, i+1, position);
			length = text.find("b/");
			wattron(output_window, A_BOLD);
	
			wprintw(output_window, text.substr(0, length).c_str()); 
		
			wattroff(output_window, A_BOLD);
			text.erase(0, length+2);
			position+=length;	
		}
		wmove(output_window, i+1, position);
		wprintw(output_window, text.c_str()); 
	}
	wrefresh(output_window);
}

void output_item_to_output_list(output_item item)
{
	if(output_list.size() >= (size_t) output_height-2)
	{
		output_list.erase(output_list.begin(),output_list.begin()+output_list.size()-output_height+3);
	}
	output_list.push_back(item);
	print_outputs();
}

void newline_output()
{
	output_item_to_output_list(output_item("", 1));	
}

void get_position(string str, string align)
{
	int length = str.length();
	int test = 0, pos = 0;
	int n, first_whitespace;
	while(str.substr(test, string::npos).find("/b") != string::npos)
	{
		test += str.substr(test, string::npos).find("/b")+2;
		length-=4;
	}	

	if(align == "center" || align == "c") n=1; 
	else if(align == "right" || align == "r") n=2; 
	else n=0;
	switch(n)
	{
		case 0:
			pos = 1;
			break;
		case 1:
			pos = (COLS-length)/2;
			break;
		case 2:
			pos = COLS-2-length;
			break;
	}
	while(length > COLS-2)
	{
		first_whitespace = str.substr(0,COLS-2).rfind(" ");
		if((size_t) first_whitespace != string::npos)
		{
			output_item_to_output_list(output_item(str.substr(0,first_whitespace), pos));
			str.erase(0,first_whitespace+1);
			length -= first_whitespace+1;
		}
		else
		{
			output_item_to_output_list(output_item(str.substr(0,COLS-2), pos));
			str.erase(0,COLS-2);
			length -= COLS-2;
		}
	}
	output_item_to_output_list(output_item(str, pos));	
}

void parse_multiline_output(string str, string align)
{
	int length;
	while(str.find("\n") != string::npos)
	{
		length = str.find("\n");
		get_position(str.substr(0,length), align);
		str.erase(str.begin(), str.begin()+length+1);
	}
	get_position(str, align);
}

void add_output(string str, string align)
{
	parse_multiline_output(str, align);
}

void add_output(string str)
{
	add_output(str, "left");
}
