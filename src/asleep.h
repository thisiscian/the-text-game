void asleep()
{
	int count = 0;
	getline (cin, bin);
	cout << "It is dark." << endl;
	cout << "Pleasingly dark." << endl;

	getline (cin, bin);

	cout << "You can't remember the last time it was this comfortably dark. "
	     << "In fact, you can't remember anything! "
             << Amnesia... It's a big part of your recurring dream. "
             << "You suspect that you are probably asleep." 
             << endl;

	cout << "You hear some faint noises. "
	     << "Perhaps they are dream-noises. "
             << "That's what you hope."
             << endl;

	command(com);
	while(com != "LISTEN" && count < 5)
	{
		cout << "You're too distracted by the distant noises. "
		     << "If only you had some way of interpreting information from an audiological source" 
  		     << endl;
		command(com);
		count++;
	}
	while(com != "LISTEN" && count < 10)
	{
		cout << "You're sure you have a way of hearing. "
		     << "If only there was some command you could type, like... GLISTEN. 
                     << "That has too many G's though..." 
                     << endl;
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
	cout << "God, Lt. Briggs seems like he's going to be in trouble. "
	     << "You really hope you're not Lt. Briggs. 
             << "Say, what is your name?" 
             << endl;

	commandCustom(name, "What is your name?");
	cout << "That's right, you're called LT. " <<  name  << " BRIGGS. Oh wait..." << endl;
	cout << "You should probably try to wake up, or that Major is going to put a butt up your boot. "
  	     << "Or however the saying goes. You can't remember, you have amnesia. Dream amnesia." 
             << endl;
	command(com);
	cout << "Actually, on second thoughts, you can't be bothered to " << com << ". "
	     << "Another 5 minutes of this sleepytime would be nice." 
             << endl;

	command(com);
	cout << "No time to " << com << "! You're being woken up!" << endl;
	cout << endl;

}
