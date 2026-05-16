#include "BackgroundWidget.h"
#include "Engine.h"
int main()
{
	ENGINE.Init("Hearthstone", 800, 450); 
	BackgroundWidget* background{new BackgroundWidget};
	ENGINE.getWorld()->addEntity(background); 
	ENGINE.Run();
}
