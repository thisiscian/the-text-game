#include "story.h"

void asleep()
{
	int count = 0;
	continue_game();
	add_output("It is dark.");
	add_output("Pleasingly dark.");
	newline_output();
	
	continue_game();

	add_output("You can't remember the last time it was this comfortably dark. ");
	add_output("In fact, you can't remember anything! ");
  add_output("Amnesia... It's a big part of your recurring dream. ");
  add_output( "You suspect that you are probably asleep.");
	newline_output();

	add_output("You hear some faint noises. ");
	add_output("Perhaps they are dream-noises. ");
  add_output("That's what you hope.");
	newline_output();

	while(get_command() != "LISTEN")
	{
		if(count < 5)
		{
			add_output("You're too distracted by the distant noises. ");
			add_output("If only you had some way of interpreting information from an audiological source...");
			newline_output();
		}
		else if(count < 10)
		{
			add_output("You're sure you have a way of hearing. ");
			add_output("If only there was some command you could type, like... GLISTEN. ");
    	add_output("That has too many G's though...");
			newline_output();
		}
		else
		{
			add_output("I'm not gonna hold your hand throughout this entire damned game, but here's a freebie;");
			add_output("Type in LISTEN");
			newline_output();
		}
		count++;
	}
	
	add_output("You LISTEN...");
	add_output("\"...snoring like a bomb fuse ...\"");
	continue_game();
	add_output("\"...hate to have him controlling my every move...\"");
	continue_game();
	add_output("\"...funny hats...\"");
	continue_game();
	add_output("\"...ould draw on his face like th...\"");
	continue_game();
	add_output("\"...teabags...\"");
	continue_game();
	add_output("\"...es Sir, Major Sir. He's just, uh, indisposed right n...\"");
	continue_game();
	add_output("\"...ow, Sir...\"");
	continue_game();
	add_output("\"...rivate Jones, is Lt. Briggs asleep again? If I ca...\"");
	continue_game();
	add_output("God, Lt. Briggs seems like he's going to be in trouble. You really hope you're not Lt. Briggs. Say, what is your name?");
 

	//THE FOLLOWING COMMAND SHOULD BE IN COLOUR OR SOMETHING//
	add_output("What is your name?");
	name = get_command();
	add_output("That's right, you're called LT. " + name + " BRIGGS. Oh wait...");
	add_output("You should probably try to wake up, or that Major is going to put a butt up your boot. Or however the saying goes. You can't remember, you have amnesia. Dream amnesia.");
       
	get_command();
	add_output("Actually, on second thoughts, you can't be bothered to " + current_command + ". Another 5 minutes of this sleepytime would be nice.");

	get_command();
	add_output("No time to " + current_command + "! You're being woken up!");
	newline_output();
}
