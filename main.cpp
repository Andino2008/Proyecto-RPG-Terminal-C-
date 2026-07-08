#include <iostream> //mierda de datos compleja que odio
#include <string>
#include "characters.h"
#include "attack.h"
#include "intro.h"
#include "dialogues.h"
#include "campaing.h"
#include "createplayer.h"
using namespace std;


int main(){
	showIntro();
	character player = charactercreateNewPlayer();

	// Estado inicial

	//showStats_good(player);


	// Campaña principal
	campaing(player);



}