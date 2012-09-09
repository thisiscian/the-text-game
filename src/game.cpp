#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

string bin= "", com, name = "BUTTS";

string text(string face, string text)
{
	string i="0", j="0";
	if(face == "red"){i = "31";}
	else if(face == "green"){i = "32";}
	else if(face == "yellow"){i = "33";}
	else if(face == "blue"){i = "34";}
	else if(face == "purple"){i = "35";}
	else if(face == "aqua"){i = "36";}
	else if(face == "grey"){i = "37";}
	else if(face == "underline"){i = "4";}
	
	else if(face == "bred"){i = "31"; j="1";}
	else if(face == "bgreen"){i = "32"; j="1";}
	else if(face == "byellow"){i = "33"; j="1";}
	else if(face == "bblue"){i = "34"; j="1";}
	else if(face == "bpurple"){i = "35"; j="1";}
	else if(face == "baqua"){i = "36"; j="1";}
	else if(face == "bgrey"){i = "37"; j="1";}
	else if(face == "bunderline"){i = "4"; j="1";}

	return "\033["+j+";"+i+"m"+text+"\033[0m";
}

void command(string& name)
{
	cout << text("bgrey", "What do you want to do?") << endl;
	cout << "> " << flush;
	getline (cin, name);
	while(name == "")
	{
		cout << "> " << flush;
		getline (cin, name);
	}
	cout << endl;
	
	for (string::size_type i = 0; i < name.length(); i++)
	{
		name[i] = toupper (name[i]);
	}
	return;
}

void prompt(string& names)
{
	cout << "[" << name <<".BRIGGS ~/BOMBSTOPPER/]$ " << flush;
	getline (cin, names);
	for (string::size_type i = 0; i < names.length(); i++)
	{
		names[i] = toupper (names[i]);
	}
	return;
}


void commandCustom(string& name, string custom)
{
	cout << text("bgrey", custom) << endl;
	cout << "> " << flush;
	getline (cin, name);
	while(name == "")
	{
		cout << "> " << flush;
		getline (cin, name);
	}
	cout << endl;
	
	for (string::size_type i = 0; i < name.length(); i++)
	{
		name[i] = toupper (name[i]);
	}
	return;
}

void capitalise(string& name)
{
	
	for (string::size_type i = 0; i < name.length(); i++)
	{
		name[i] = toupper (name[i]);
	}
	return;
}

int main()
{
	int count;
	srand48(time(NULL));
	cout << "Made by CIAN and FIONN for MS-DOS" << endl;
	cout << "Copyright (C) 1979.\n" << endl;
	cout << "This is a text adventure game! There will be some text and some adventure." << endl;
	cout << "Acceptable commands are \"LISTEN\". Maybe there will be more, maybe there will be less." << endl;
	cout << "The adventure will start after a brief haiku..." << endl;
	getline (cin, bin);
	system("clear");
	cout << "\n\n" << endl;
	cout << "   ---------------------------------------" << endl;
	cout << "   |          Is this a haiku?           |" << endl;
	cout << "   | Five then seven then five. Oh wait, |" << endl;
	cout << "   |          this is a haiku.           |" << endl;
	cout << "   |                                     |" << endl;
	cout << "   |                -- Dr. Samurai Jones |" << endl;
	cout << "   ---------------------------------------" << endl;
	cout << endl;
	getline (cin, bin);
	cout << "It is dark." << endl;
	cout << "Pleasingly dark." << endl;
	getline (cin, bin);
	cout << "You can't remember the last time it was this comfortably dark. In fact, you can't remember anything! Amnesia... It's a big part of your recurring dream. You suspect that you are probably asleep." << endl;
	cout << "You hear some faint noises. Perhaps they are dream-noises. That's what you hope." << endl;
	command(com);
	count = 0;
	while(com != "LISTEN" && count < 5)
	{
		cout << "You're too distracted by the distant noises. If only you had some way of interpreting information from an audiological source" << endl;
		command(com);
		count++;
	}
	while(com != "LISTEN" && count < 10)
	{
		cout << "You're sure you have a way of hearing. If only there was some command you could type, like... GLISTEN. That has too many G's though..." << endl;
		command(com);	
		count++;
	}
	if(com != "LISTEN")
	{
		cout << "I'm not gonna hold your hand throughout this entire damned game, but here's a freebie;\n" << endl;
		cout << ">" << flush;
		cout << "L" << flush;
		sleep(1);cout << "I" << flush;
		sleep(1);cout << "S" << flush;
		sleep(1);cout << "T" << flush;
		sleep(1);cout << "E" << flush;
		sleep(1);cout << "N" << flush;
		sleep(1);
		cout << endl;
		cout << endl;
		
	}
	
	cout << "You LISTEN..." << endl;
	cout << "\"...snoring like a bomb fuse ...\"" << endl;
	getline (cin, bin);
	cout << "\"...hate to have him controlling my every move...\"" << endl;
	getline (cin, bin);
	cout << "\"...funny hats...\"" << endl;
	getline (cin, bin);
	cout << "\"...ould draw on his face like th...\"" << endl;
	getline (cin, bin);
	cout << "\"...teabags...\"" << endl;
	getline (cin, bin);
	cout << "\"...es Sir, Major Sir. He's just, uh, indisposed right n...\""<< endl;
	getline (cin, bin);
	cout << "\"...ow, Sir...\""<< endl;
	getline (cin, bin);
	cout << "\"...rivate Jones, is Lt. Briggs asleep again? If I ca...\""<< endl;
	getline (cin, bin);
	cout << "God, Lt. Briggs seems like he's going to be in trouble. You really hope you're not Lt. Briggs. Say, what is your name?" << endl;
	commandCustom(name, "What is your name?");
	cout << "That's right, you're called LT. " <<  name  << " BRIGGS. Oh wait..." << endl;
	cout << "You should probably try to wake up, or that Major is going to put a butt up your boot. Or however the saying goes. You can't remember, you have amnesia. Dream amnesia." << endl;
	command(com);
	cout << "Actually, on second thoughts, you can't be bothered to " << com << ". Another 5 minutes of this sleepytime would be nice." << endl;
	command(com);
	cout << "No time to " << com << "! You're being woken up!" << endl;
	cout << endl;
	cout << "As your eyes open, the haze departs and you've remembered everything. You're a bomb disposalistifier, in the UNITED NATIONS ARMY OF ELVES.\n" << endl;
	cout << "In the foreground, is a large angry man shouting at you. In the background, there is a small robot spinning slowly round in circles." << endl;
	getline (cin, bin);
	command(com);
	cout << "OR .... \n> SLEEP\n\nYou'd really love to sleep. You'd probably get in quite a bit of trouble for going to sleep in front of the Major though." << endl;
	cout << endl;
	while(com != "SIT UP" && com.substr(0,7) != "GET OFF" && com.substr(0,6) != "GET UP" && com.substr(0,4) != "MOVE"  && com.substr(0,5) != "STAND")
	{
		commandCustom(com, "What are you " + text("bunderline", "going") + text("bgrey", " to do?"));
		if(com.substr(0,4) == "TALK" || com.substr(0,6) == "LISTEN")
		{
			cout << "You'd love to talk to the major, but he is too busy SHOUTING AT YOU from strange angles. It's almost like you are LYING DOWN whilst a SUPERIOR OFFICER is wailing down your gully hole. If that were the case you should almost definitely GET UP from WHATEVER you are LYING on..." << endl; 
		}
	}
	cout << "It suddenly clicks, that you are LYING on the EXPENSIVE BOMB DISPOSAL ROBOT's control system. You wake up here, like 3/5 times.\n" << endl;
	cout << "...\n" << endl;
	cout << "...\n" << endl;
	cout << "Ohmigosh.\n"<< endl;	
	cout << "Well you've left yourself in a real doozy here. You've fallen asleep whilst DISPOSING OF A BOMB with your faithful BOMB DISPOSAL ROBOT.\n" << endl;
	cout << "The MAJOR is still ranting on about something. You decide to listen in." << endl;
	getline (cin, bin);
	cout << "MAJOR: \"YOU BLOODY BUFFOON, I CAN\'T BELIEVE YOU FELL ASLEEP IN THE MIDDLE OF A CRITICAL BOMB DISPOSAL MISSION. THERE ARE LIVES ON THE LINE, AND YOUR BLOODY ROBOT IS JUST THERE DOING A GODDAMN JIG\"" << endl;
	getline (cin, bin);
	cout << "You notice, again, that your robot is spinning in circles. You can't fault the MAJOR on this one, the robot is definitely doing some sort of dance." << endl;
	getline (cin, bin);
	cout << "MAJOR: \"ARE YOU EVEN LOGGED IN TO THE DAMN CONSOLE? SO HELP ME ELVEN GOD-KING, I WILL MAKE YOU RUN BASIC TRAINING AGAIN IF YOU DON\'T DEFUSE THIS BOMB IN THE NEXT 5 MINUTES\"" << endl;
	getline (cin, bin);
	cout << "You always thought it strange that everything the MAJOR said was some sort of KEY CLUE. However, you really don't want to run basic training again. That was a serious hassle." << endl;
	commandCustom(com, "What do you want to do?"+text("grey"," ")+"(hint: you should probably try to LOG IN to the console, like the MAJOR says)");
	while(com.substr(0,6) != "LOG IN")
	{
		if(com.substr(0,4) == "SLAP")
		{
			cout << "You consider taking a good swing at the MAJOR, but with those BRISTLING MUSCLES, you think perhaps, that you might damage your hand in the process." << endl;
			command(com);
		}
		// COME BACK TO THIS AND ADD SHITE	
	}
	cout << "Good choice, you decide to LOG IN to the robots A.C.C.E.S.S. system" << endl; 
	cout << "(fyi, that stands for Access Control Circuit Emulator Synchotron System)" << endl;
	cout << "((double fyi, yes, you know that is a stupid name))\n" << endl;

	system("clear");
	cout << "#######################################################################################" << endl;
	cout << "## A.C.C.E.S.S. SYSTEM LOG IN SYSTEM                                                 ##" << endl;
	cout << "#######################################################################################" << endl;
	cout << endl;
	cout << "  LOGIN: " << name << ".BRIGGS" << endl;
	cout << "  PASSWORD: GUEST" << endl;
	cout << endl;
	cout << "A.C.C.E.S.S. ACCESS GRANTED."<< endl; 
	cout << "ACCESSING A.C.C.E.S.S. SYSTEM..." << endl;
	cout << "PRESS <ENTER> TO CONTINUE\n" << endl;
	getline(cin, bin);	
	system("clear");
	cout << "#######################################################################################" << endl;
	cout << "## A.C.C.E.S.S. SYSTEM LOG IN SYSTEM                                                 ##" << endl;
	cout << "#######################################################################################" << endl;
	cout << endl;
	cout << "  LOGIN: " << name << ".BRIGGS" << endl;
	cout << "  PASSWORD: GUEST" << endl;
	cout << endl;
	cout << "A.C.C.E.S.S. ACCESS GRANTED."<< endl; 
	cout << "ACCESSING A.C.C.E.S.S. SYSTEM..." << endl;
	cout << "\n\nTo get started, type HELP." << endl;
	int complete = 0;
	string mode = "dance";
	int pos[2] = {5,6}; 
	string map = "    0 1 2 3 4 5 6 7 8 9  \n  #######################\n  #        ~   ?        #\n0 #    f         s      #\n  #     %    #          #\n1 #                     #\n  #                     #\n2 #                     #\n  #                     #\n3 #                     #\n  #                     #\n4 #                     #\n  #                     #\n5 #                     #\n  #                     #\n6 #                     #\n  #                     #\n7 #                     #\n  #                     #\n8 #                     #\n  #                     #\n9 #                     #\n  #                     #\n  #######################";
	while(complete == 0)
	{
		prompt(com);
		if(com == "JUST GO AND DISPOSE OF THE BOMB")
		{
			complete = 1;
		}
		else if(com.substr(0,4) == "HELP"||com.substr(0,3) == "MAN")
		{
			cout << endl;
			cout << "\tls\t\t\tList Files" << endl;
			cout << "\tcat\t\t\tRead Files" << endl;
			cout << "\tscan\t\t\tScan Area" << endl;
			cout << "\tset mode bomb\t\tEnter \"Bomb Defusal Mode\"" << endl;
			cout << "\tset mode dance\t\tEnter \"Dance Mode\"" << endl;
			cout << "\tstatus\t\t\tCheck Status" << endl;
			cout << "\tmove <dir>\t\tMove robot in <dir> direction (north, south, east, west)" << endl;
			cout << "\tdefuse\t\t\tDisarm bomb at current location" << endl;			
			cout << "\trun\t\t\tRun program" << endl;
			cout << endl;
		}
		else if(com.substr(0,2) == "CD")
		{
			cout << "Trial version only." << endl;
		}
		else if(com.substr(0,2)  == "LS")
		{
			cout << "VIRUS.EXE\tUpgradeToPremiumNow\tbomb.list\tHelloWorld.cpp" << endl;
			cout << "Peskin_Schroeder.djvu\tMissileLaunchPasswords.txt\tVacationPics.zip" << endl;
			cout << "meow_kitten.gif\tCV_"<< name << "_BRIGGS.tex\tthe_hurt_locker_720p.mkv" << endl;
			//add in color
		}
		else if(com == "CAT")
		{
			cout << "cat: no file chosen" << endl;
		}
		else if(com == "CAT MISSILELAUNCHPASSWORDS.TXT")
		{
			cout << "Missile Launch Code #1: XYH5NJ180085" << endl;
			cout << "Missile Launch Code #2: OHGODSENDTHEBOMBS" << endl;
			cout << "Missile Launch Code #3: THISWILLSHOWTHOSEDAMNORCS" << endl;
			cout << "Missile Launch Code #4: WEWILLRUINTHEPLANETWITHTHESEBOMBS" << endl;
			cout << "Missile Launch Code #5: MAYBEWESHOULDJUSTSITDOWNANDTALKABOUTTHIS" << endl;
		}
		else if(com == "CAT BOMB.LIST")
		{
			cout << "\nBOMB LIST" << endl;
			cout << "---------\n" << endl;
			cout << "nail bombs" << endl;
			cout << "letter bombs" << endl;
			cout << "C4" << endl;
			cout << "C5" << endl;
			cout << "C6" << endl;
			cout << "Cn" << endl;
			cout << "nukes (concentrate on these ones)" << endl;
			cout << "big ass bombs" << endl;
			cout << "meat bombs" << endl;
			cout << "sour bombs" << endl;
			cout << "water bombs" << endl;
			cout << "the \'f\' bomb" << endl;
			cout << "smoke bomb" << endl;
			cout << "bong bomb (see smoke bomb)" << endl;
			cout << "smokey bomb" << endl;
			cout << "beer bong boom bomb" << endl;
			cout << "nazi bomb" << endl;
			cout << "boombox" << endl;
			cout << "boomer" << endl;
			cout << "bangers" << endl;
			cout << "mash" << endl;
			cout << "sausages" << endl;
			cout << "those ones with the clock on them" << endl;
			cout << "mashed potatoes" << endl;
			cout << "really racist bombs" << endl;
			cout << endl;	
		}
		else if(com.substr(0,6) == "CAT CV")
		{
			cout << "\\documentclass{article}" << endl;
			cout << "\\begin{document}" << endl;
			cout << "\tNAME: " << name << " BRIGGS" << endl;
			cout << "\tBEST FRIEND: BOMB MACHINE %% this is totally sweet" << endl;
			cout << "%%FINISH THIS OFF LATER" << endl;
			cout << "\\end{document}" << endl;
		}
		else if(com.substr(0,3) == "CAT")
		{
			cout << "cat: can only read text files. File is not a text file." << endl;
		}
		else if(com == "SET MODE DANCE")
		{
			if(mode == "dance")
			{
				cout << "mode: bomb disposal robot is already dancing." << endl;
			}
			else
			{
				cout << "mode: setting bomb disposal robot to dance mode. Waltz protocols engaged." << endl;
				mode = "dance";
			}
		}
		else if(com == "SET MODE BOMB")
		{
			if(mode == "bomb")
			{
				cout << "mode: bomb disposal robot is already in bomb disposal mode and ready to bomb dispose." << endl;
			}
			else
			{
				cout << "mode: setting bomb disposal robot to bomb disposal mode. Waltz protocols disabled." <<endl;
				mode = "bomb";
			}
		}
		else if(com == "STATUS")
		{
			cout << "status: current mode is set to \'" << mode << "\'" << endl;
		}
		else if(com == "SCAN")
		{
			if(mode == "dance")
			{
				cout << "Robot begins the \'scan\' dance. Graceful Levels are at a maximum" << endl;
			}
			else
			{
				cout << "Commencing area scan..."  << endl;
				for(int i=0; i<24; i++)
				{
					for(int j=0; j<26;j++)
					{
						if(map.length() == i*26+j){break;}
						if(i==pos[0] && j== pos[1]){cout << "@" << flush;}
						else {cout << map[i*26+j] << flush;}
					}
				}
				cout << endl;
				cout << map << endl;
			}
		}
		else if(com == "DEFUSE")
		{
			if(mode == "dance")
			{
				cout << "Attempting to defuse the tension with another graceful spin\n... ... ... \nPress <ENTER>" << endl;
				getline(cin,bin);
				cout << "Unsuccesful. Exiting..." << endl;
			}
			else
			{
				cout << "Opening bomb diffusal subscreen" << endl;
				complete = 1;
			}
		}
		else if(com == "RUN VIRUS.EXE" || com == "./VIRUS.EXE")
		{
			cout << "The 30 days of your trial version of ~VIRUS~ is up. Please go to wwww.legitdownloads.com and register!" << endl;
		}
		else if(com == "UNZIP VACATIONPICS.ZIP")
		{
			cout << "Eww, no, no unzipping here. Keep it in your pants." << endl;	
		}
		else
		{
			cout << com << ": command does not make sense or does not exist" << endl;
			// put random errors in here
		}
	}
	return 0;
}

// this is about a bomb disposalist, and the robot he controls.
// loads of haiku's
// haiclue
// that thing that I said when we were walking towards tesco, that was "the best thing about text based adventures"
// // i remembered what that was: it was having a lighter shaped keyhole, and you put your lighter in, and then it turns out that you just broke your lighter, and there was a lighter shaped key around

// LIST OF STUFF TODO todo
// make list of players command to be regurgitated later
// not vomit
// 
//
// play as player - > defuse bomb -> play as robot -> follow commands -> defuse bomb -> play as bomb
//
// as bomb, commands slowly get corrupted into "explode"
//
// EXPLOD....
// endings: defuse bomb, controlled explosion, incompetent
// at end of game, list of stats that you did, like $4000's of damage done

