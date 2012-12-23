#include "functions.h"

int main()
{
	initialise_game();
	introduction();
	start_haiku();
	asleep();
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
		else if(com == "CAT MISSILELAUNCHPASSWORDS.TXT")
		{
			cout << "Missile Launch Code #1: XYH5NJ180085" << endl;
			cout << "Missile Launch Code #2: OHGODSENDTHEBOMBS" << endl;
			cout << "Missile Launch Code #3: THISWILLSHOWTHOSEDAMNORCS" << endl;
			cout << "Missile Launch Code #4: WEWILLRUINTHEPLANETWITHTHESEBOMBS" << endl;
			cout << "Missile Launch Code #5: MAYBEWESHOULDJUSTSITDOWNANDTALKABOUTTHIS" << endl;
		}
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


