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
