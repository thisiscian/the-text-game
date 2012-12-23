#include "story.h"
command_list compy
{
	{
		true,
		{"LS", "LIST", "DIR"},
		{"VIRUS.EXE\nUpgradeToPremiumNow\nbomb.list\nHelloWorld.cpp\nPeskin_Schroeder.djvu\nMissileLaunchPasswords.txt\nVacationPics.zip\nmeow_kitten.gif\nCV_"+ name + "_BRIGGS.tex\nthe_hurt_locker_720p.mkv"}
	},
	{
		false,
		{"CD"},
		{"CD is only available on Premium Versions. You are only on a Trial Version. Upgrade Today!"}
	},
	{
		true,
		{"CAT"},
		{"cat: no file chosen"}
	},
	{
		true,
		{"CAT BOMB.LIST"},
		{
			"BOMB LIST\n---------\n\nnail bombs\nletter bombs\nC4\nC5\nC6\nCn\nnukes (concentrate on these ones)\nbig ass bombs\nmeat bombs\nsour bombs\nwater bombs\nthe \'f\' bomb\nsmoke bomb\nbong bomb (see smoke bomb)\nsmokey bomb\nbeer bong boom bomb\nnazi bomb\nboombox\nboomer\nbangers\nmash\nsausages\nthose ones with the clock on them\nmashed potatoes\nreally racist bombs"
		}
	},
	{
		false,
		{"MAN", "HELP"},
		{
			"ls   List Files\ncat   Read Files\nscan   Scan Area\nset mode bomb  Enter \"Bomb Defusal Mode\"\nset mode dance  Enter \"Dance Mode\"\nstatus   Check Status\nmove <dir>  Move robot in <dir> direction (north, south, east, west)\ndefuse   Disarm bomb at current location\nrun   Run program"
		}
	}
};
void computer()
{
	clear_output();
	add_output("#######################################################################################");
	add_output("## A.C.C.E.S.S. SYSTEM LOG IN SYSTEM                                                 ##");
	add_output("#######################################################################################");
	newline_output();
	add_output("  LOGIN: " + name + ".BRIGGS");
	add_output("  PASSWORD: GUEST");
	newline_output();
	add_output("A.C.C.E.S.S. ACCESS GRANTED."); 
	add_output("ACCESSING A.C.C.E.S.S. SYSTEM...");
	add_output("PRESS <ENTER> TO CONTINUE");
	continue_game();
	clear_output();
	add_output("#######################################################################################");
	add_output("## A.C.C.E.S.S. SYSTEM LOG IN SYSTEM                                                 ##");
	add_output("#######################################################################################");
	newline_output();
	add_output("  LOGIN: " + name + ".BRIGGS");
	add_output("  PASSWORD: GUEST");
	newline_output();
	add_output("A.C.C.E.S.S. ACCESS GRANTED."); 
	add_output("ACCESSING A.C.C.E.S.S. SYSTEM...");
	newline_output();
	newline_output();
	add_output("To get started, type HELP.");
	while(current_command != "SET MODE BOMB")
	{
		get_command();
		compy.respond(current_command);
	}
}
