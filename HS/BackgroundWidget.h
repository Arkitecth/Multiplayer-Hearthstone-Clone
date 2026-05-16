#include "Engine.h"

class BackgroundWidget: public HS::Entity
{
	private:
		HS::Texture texture_
		{
			"./Assets/HS_Board.png", 
			HS::Vector{0, 0}, 
			float(ENGINE.getRenderer()->getWindowWidth()), 
			float(ENGINE.getRenderer()->getWindowHeight())
		};


	public:
		BackgroundWidget();
		~BackgroundWidget() = default; 
		void draw(); 
		void update(); 
		void eventHandler(const HS::Event* e ); 
}; 
