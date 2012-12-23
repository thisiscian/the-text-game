#include "story.h"
#include <iostream>

command_group p3_get_up (false, {"SIT UP", "GET OFF", "GET UP", "MOVE", "STAND"});
command_group p3_talk_to_major(false, {"TALK", "LISTEN"}, {"You'd love to talk to the major, but he is too busy SHOUTING AT YOU from strange angles. It's almost like you are LYING DOWN whilst a SUPERIOR OFFICER is wailing down your gully hole. If that were the case you should almost definitely GET UP from WHATEVER you are LYING on..."});
command_group p3_log_in(true, {"LOG IN"});

void awoken()
{
	add_output("As your eyes open, the haze departs and you've remembered everything. You're a bomb disposalistifier, in the UNITED NATIONS ARMY OF ELVES.");
	newline_output();
	add_output("In the foreground, is a large angry man shouting at you. In the background, there is a small robot spinning slowly round in circles.");
	get_command();
	add_output("OR .... ");
	add_output("> SLEEP");
	newline_output();
	add_output("You'd really love to sleep. You'd probably get in quite a bit of trouble for going to sleep in front of the Major though.");
	add_output("What are you going to do?");
	newline_output();
	get_command();
	while(!p3_get_up.compare(current_command))
	{
		p3_talk_to_major.respond(current_command);
		add_output("What are you going to do? (Note that everything seems to be at a strange angle)");
		get_command();
	}
	add_output("It suddenly clicks, that you are LYING on the EXPENSIVE BOMB DISPOSAL ROBOT's control system. You wake up here, like 3/5 times.\n");
	add_output("...");
	add_output("...");
	add_output("...");
	add_output("Ohmigosh.");	
	add_output("Well you've left yourself in a real doozy here. You've fallen asleep whilst DISPOSING OF A BOMB with your faithful BOMB DISPOSAL ROBOT.");
	add_output("The MAJOR is still ranting on about something. You decide to listen in.");
	continue_game();
	add_output("MAJOR: \"YOU BLOODY BUFFOON, I CAN\'T BELIEVE YOU FELL ASLEEP IN THE MIDDLE OF A CRITICAL BOMB DISPOSAL MISSION. THERE ARE LIVES ON THE LINE, AND YOUR BLOODY ROBOT IS JUST THERE DOING A GODDAMN JIG\"");
	continue_game();;
	add_output("You notice, again, that your robot is spinning in circles. You can't fault the MAJOR on this one, the robot is definitely doing some sort of dance.");
	add_output("MAJOR: \"ARE YOU EVEN LOGGED IN TO THE DAMN CONSOLE? SO HELP ME ELVEN GOD-KING, I WILL MAKE YOU RUN BASIC TRAINING AGAIN IF YOU DON\'T DEFUSE THIS BOMB IN THE NEXT 5 MINUTES\"");
	continue_game();
	add_output("You always thought it strange that everything the MAJOR said was some sort of KEY CLUE. However, you really don't want to run basic training again. That was a serious hassle.");
	newline_output();
	add_output("What do you want to do? (hint: you should probably try to LOG IN to the console, like the MAJOR says)");
	get_command();
	while(!p3_log_in.compare(current_command))
	{
		if(current_command.substr(0,4) == "SLAP")
		{
			add_output("You consider taking a good swing at the MAJOR, but with those BRISTLING MUSCLES, you think perhaps, that you might damage your hand in the process.");
			get_command();
		}
		// COME BACK TO THIS AND ADD SHITE	
	}
	add_output("Good choice, you decide to LOG IN to the robots A.C.C.E.S.S. system"); 
	add_output("(fyi, that stands for Access Control Circuit Emulator Synchotron System)");
	add_output("((double fyi, yes, you know that is a stupid name))");
	newline_output();
}
