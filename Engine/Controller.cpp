#include "EventKeyboard.h"
#include "Controller.h"
#include "Engine.h"
#include <SDL3/SDL.h>

void HS::Controller::pollInput()
{
	SDL_Event e;  
	while (SDL_PollEvent(&e)) {
		
		if (e.type == SDL_EVENT_QUIT) 
		{
			ENGINE.setIsEngineRunning(false); 
		}
		if (e.type == SDL_EVENT_KEY_DOWN) {
			EventKeyboard keyboardEvent; 
			keyboardEvent.setKey(SDL_GetKeyName(e.key.key));
			keyboardEvent.setKeyboardAction(KeyboardAction::KEY_PRESSED); 
			ENGINE.getWorld()->broadcastEvent(dynamic_cast<Event*>(&keyboardEvent)); 
		}

		else if (e.type == SDL_EVENT_KEY_UP) {
			EventKeyboard keyboardEvent; 
			keyboardEvent.setKey(SDL_GetKeyName(e.key.key));
			keyboardEvent.setKeyboardAction(KeyboardAction::KEY_RELEASED);
			ENGINE.getWorld()->broadcastEvent(dynamic_cast<Event*>(&keyboardEvent)); 
		}

		// else if (e.type == SDL_EVENT_MOUSE_BUTTON_DOWN) {
		// 	EventMouse mouseEvent; 
		// 	float relative_x = cursor.getCursorPosition().getX() + e.motion.xrel;
		// 	float relative_y = cursor.getCursorPosition().getY() + e.motion.yrel;
		// 	if (e.button.button == SDL_BUTTON_LEFT) {	
		// 		mouseEvent.setKey(MouseKey::MOUSE_LEFT_BUTTON); 
		// 	} else if (e.button.button == SDL_BUTTON_RIGHT) {
		// 		mouseEvent.setKey(MouseKey::MOUSE_RIGHT_BUTTON); 
		// 	}
		// 	mouseEvent.setMousePosition(E0::Vector{relative_x, relative_y});
		// 	mouseEvent.setMouseAction(MouseAction::MOUSE_CLICKED); 
		// 	dragging = true;
		// 	SDL_Log("X:%f: Y:%f", e.button.x, e.button.y);
		// 	LEM.getCurrentLevel()->broadcastEvent(dynamic_cast<Event*>(&mouseEvent)); 
		// }
		//
		// else if (e.type == SDL_EVENT_MOUSE_BUTTON_UP) {
		// 	EventMouse mouseEvent; 
		// 	if (e.button.button == SDL_BUTTON_LEFT) {	
		// 		mouseEvent.setKey(MouseKey::MOUSE_LEFT_BUTTON); 
		// 	} else if (e.button.button == SDL_BUTTON_RIGHT) {
		// 		mouseEvent.setKey(MouseKey::MOUSE_RIGHT_BUTTON); 
		// 	} 
		// 	mouseEvent.setMouseAction(MouseAction::MOUSE_RELEASED); 
		// 	dragging = false;
		// 	LEM.getCurrentLevel()->broadcastEvent(dynamic_cast<Event*>(&mouseEvent)); 
		// }

}
}

