#include <Engine.h>
void TestLogger()
{
	ENGINE.getLogger()->log(HS::ERROR, "My Error"); 

	ENGINE.getLogger()->log(HS::INFO, "My Info"); 

	ENGINE.getLogger()->log(HS::WARNING, "My Warning"); 
}

void TestRenderer()
{
}

int main()
{
	TestLogger(); 

}
