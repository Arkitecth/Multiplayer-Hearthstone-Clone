#include <Engine.h>
#include <string>
#include "Entity.h"
#include "Event.h"
#include "EventKeyboard.h"
#include "Logger.h"
void TestLogger()
{
	ENGINE.getLogger()->log(HS::ERROR, "My Error"); 

	ENGINE.getLogger()->log(HS::INFO, "My Info"); 

	ENGINE.getLogger()->log(HS::WARNING, "My Warning"); 
}

void TestRenderer()
{
	class Square: public HS::Entity
	{
		public:
			
			Square()
			{
				this->setPosition(HS::Vector{100, 100}); 
			}

			~Square(){}; 

			void draw()
			{
				ENGINE.getRenderer()->drawRectangle(this->getPosition().getX(), this->getPosition().getY(), 100, 100); 
			}

			void update(const HS::Event* e)
			{
				if (e->getType() == HS::KEYBOARD_EVENT) 
				{
					const HS::EventKeyboard* keyEvent = dynamic_cast<const HS::EventKeyboard*>(e);

					if (keyEvent->getKey() == HS::KeyboardKey::W) 
					{
						ENGINE.getLogger()->log(HS::INFO, "HERE"); 
						HS::Vector up{0, -1};

						HS::Vector new_position = up + this->getPosition(); 

						this->setPosition(new_position);

						ENGINE.getLogger()->log(HS::INFO, std::to_string(new_position.getY()));
					}
				}
			}
	}; 

	Square* square{new Square};

	ENGINE.getWorld()->addEntity(square); 

	ENGINE.Run();
}

int main()
{
	TestRenderer();
}
