void capitalise(string& name)
{
	
	for (string::size_type i = 0; i < name.length(); i++)
	{
		name[i] = toupper (name[i]);
	}
	return;
}
