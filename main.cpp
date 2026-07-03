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
	showStats_good(player);

	// Diálogos / eventos principales en orden jerárquico
	dialogo1(player);
	//dialogo2(player);
	//dialogo3(player);
	//dialogo4(player);
	//dialogo5(player);
	//dialogo6(player);
	//dialogo7(player);
	//dialogo8(player);
	//dialogo9(player);

	// Campaña principal
	campaing(player);

	return 0;

}