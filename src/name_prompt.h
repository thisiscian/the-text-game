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
