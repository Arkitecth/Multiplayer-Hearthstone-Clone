#include <string>
#include "Event.h"
namespace HS 
{
	const std::string KEYBOARD_EVENT = "HS::keyboard_event";

	enum class KeyboardKey
	{
		UNDEFINED_KEY = -1, 
		SPACE, 
		RETURN,
		ESCAPE, 
		TAB, 
		LEFTARROW, 
		RIGHTARROW, 
		UPARROW, 
		DOWNARROW,
		PAUSE , 
		MINUS , 
		PLUS , 
		TILDE , 
		PERIOD , 
		COMMA , 
		SLASH , 
		LEFTCONTROL ,
		RIGHTCONTROL , 
		LEFTSHIFT , 
		RIGHTSHIFT , 
		F1 , 
		F2 ,
		F3 , 
		F4 ,
		F5 , 
		F6 , 
		F7 , 
		F8 ,
		F9 ,
		F10 , 
		F11 , 
		F12 , 
		A , 
		B , 
		C ,
		D , 
		E , 
		F , 
		G , 
		H , 
		I , 
		J , 
		K , 
		L , 
		M , 
		N , 
		O , 
		P , 
		Q , 
		R , 
		S , 
		T , 
		U , 
		V , 
		W , 
		X , 
		Y , 
		Z , 
		NUM1 , 
		NUM2 , 
		NUM3 , 
		NUM4 , 
		NUM5 , 
		NUM6 , 
		NUM7 , 
		NUM8 , 
		NUM9 , 
		NUM0 
	
	};

	enum class KeyboardAction
	{
		KEY_PRESSED, 
		KEY_RELEASED, 
		UNDEFINED_ACTION
	}; 

	class EventKeyboard: public Event
	{
		private:
			KeyboardKey key_{KeyboardKey::UNDEFINED_KEY}; 
			KeyboardAction action_{KeyboardAction::UNDEFINED_ACTION}; 
		
		public:
			EventKeyboard() = default; 
			EventKeyboard(KeyboardKey key, KeyboardAction action); 
			KeyboardKey    getKey(); 
			void	       setKey(KeyboardKey key); 
			void	       setKey(std::string key); 
			KeyboardAction getAction(); 
			void           setKeyboardAction(KeyboardAction action); 
	}; 
}
