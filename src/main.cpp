#include "story.h"
#include "initialise.h"
using namespace std;

int main(int argc, char *argv[])
{

	initialise_game();
//	introduction();
//	start_haiku();
//	asleep();
	awoken();
	computer();
	continue_game();
	end_game();	
	return 0;
}
