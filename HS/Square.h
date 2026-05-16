#include <Engine.h>
#include "Entity.h"
#include <EventKeyboard.h>
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
		HS::Texture texture{"Wood_Texture.png", this->getPosition(), 150, 150};
		ENGINE.getRenderer()->drawTexture(texture); 
	}

	void update() 
	{
		HS::Vector direction{0, -0.1};

		HS::Vector new_position = direction + this->getPosition(); 

		this->setPosition(new_position); 
	};
	void eventHandler(const HS::Event* e)
	{
		if (e->getType() == HS::KEYBOARD_EVENT) 
		{
			const HS::EventKeyboard* keyEvent = dynamic_cast<const HS::EventKeyboard*>(e);

			if (keyEvent->getAction() == HS::KeyboardAction::KEY_PRESSED) 
			{
				if (keyEvent->getKey() == HS::KeyboardKey::W) 
				{
					HS::Vector direction{0, -30};

					HS::Vector new_position = direction + this->getPosition(); 

					this->setPosition(new_position);

					ENGINE.getLogger()->log(HS::INFO, std::to_string(new_position.getY()));
				}

				if (keyEvent->getKey() == HS::KeyboardKey::A) 
				{
					HS::Vector direction{-30, 0};

					HS::Vector new_position = direction + this->getPosition(); 

					this->setPosition(new_position);

					ENGINE.getLogger()->log(HS::INFO, std::to_string(new_position.getY()));
				}

				if (keyEvent->getKey() == HS::KeyboardKey::S) 
				{
					HS::Vector direction{0, 30};

					HS::Vector new_position = direction + this->getPosition(); 

					this->setPosition(new_position);

					ENGINE.getLogger()->log(HS::INFO, std::to_string(new_position.getY()));
				}

				if (keyEvent->getKey() == HS::KeyboardKey::D) 
				{
					HS::Vector direction{30, 0};

					HS::Vector new_position = direction + this->getPosition(); 

					this->setPosition(new_position);

					ENGINE.getLogger()->log(HS::INFO, std::to_string(new_position.getY()));
				}
			}
		}
	}

};

