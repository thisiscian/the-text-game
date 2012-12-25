#include "story.h"
command_list compy
{
	{
		true,
		0,
		{"LS", "LIST", "DIR"},
		{"VIRUS.EXE\nUpgradeToPremiumNow\nbomb.list\nHelloWorld.cpp\nPeskin_Schroeder.djvu\nMissileLaunchPasswords.txt\nVacationPics.zip\nmeow_kitten.gif\nCV_"+ name + "_BRIGGS.tex\nthe_hurt_locker_720p.mkv"}
	},
	{
		false,
		0,
		{"CD"},
		{"CD is only available on Premium Versions. You are only on a Trial Version. Upgrade Today!"}
	},
	{
		true,
		0,
		{"CAT"},
		{"cat: no file chosen"}
	},
	{
		true,
		0,
		{"CAT BOMB.LIST"},
		{"BOMB LIST\n---------\n\nnail bombs\nletter bombs\nC4\nC5\nC6\nCn\nnukes (concentrate on these ones)\nbig ass bombs\nmeat bombs\nsour bombs\nwater bombs\nthe \'f\' bomb\nsmoke bomb\nbong bomb (see smoke bomb)\nsmokey bomb\nbeer bong boom bomb\nnazi bomb\nboombox\nboomer\nbangers\nmash\nsausages\nthose ones with the clock on them\nmashed potatoes\nreally racist bombs"}
	},
	{
		false,
		0,
		{"MAN", "HELP"},
		{
			"ls   List Files\ncat   Read Files\nscan   Scan Area\nset mode bomb  Enter \"Bomb Defusal Mode\"\nset mode dance  Enter \"Dance Mode\"\nstatus   Check Status\nmove <dir>  Move robot in <dir> direction (north, south, east, west)\ndefuse   Disarm bomb at current location\nrun   Run program"
		}
	},
	{
		true,
		0,
		{"CAT MISSILELAUNCHPASSWORDS.TXT"},
		{
			"Missile Launch Code #1: XYH5NJ180085\n	Missile Launch Code #2: OHGODSENDTHEBOMBS\nMissile Launch Code #3: THISWILLSHOWTHOSEDAMNORCS\nMissile Launch Code #4: WEWILLRUINTHEPLANETWITHTHESEBOMBS\nMissile Launch Code #5: MAYBEWESHOULDJUSTSITDOWNANDTALKABOUTTHIS"
		}
	},
	{
		true,
		0,
		{"CAT CV"},
		{
		"\\documentclass{article}\n\\begin{document}\nNAME: " + name + " BRIGGS\nBEST FRIEND: BOMB MACHINE %% this is totally sweet\n%%FINISH THIS OFF LATER\n\\end{document}"
		}
	},
	{
		true,
		0,
		{"SET MODE DANCE"},
		{"mode: bomb disposal robot is already dancing!"}
	},
	{
		true,
		1,
		{"SET MODE DANCE"},
		{"mode: setting bomb disposal robot to bomb disposal mode. Engaging Waltz protocol"}
	},
	{
		true,
		0,
		{"SET MODE BOMB"},
		{"mode: setting bomb disposal robot to bomb disposal mode. Bomb disposal robot is ready to dispose bombs."}
	},
	{
		true,
		1,
		{"SET MODE BOMB"},
		{"mode: bomb disposal robot is already in bomb disposal mode and is ready to dispose bombs."}
	},
	{
		true,
		1,
		{"STATUS"},
		{"status: robot is currently in bomb disposal mode"}
	},
	{
		true,
		0,
		{"STATUS"},
		{"status: robot is currently in dancing mode"}
	},
	{
		true,
		0,
		{"SCAN"},
		{"scan: cannot initiate scan in dancing mode"}
	},	
	{
		true,
		1,
		{"SCAN"},
		{"scan: initiating scan..."}
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
	while(compy.current_state != 5)
	{
		get_command();
		compy.respond(current_command);
	}
}
