#include "EventKeyboard.h"

HS::EventKeyboard::EventKeyboard()
{
	setType(KEYBOARD_EVENT); 
}

HS::KeyboardKey HS::EventKeyboard::getKey() const
{
	return key_;
}

void HS::EventKeyboard::setKey(KeyboardKey key)
{
	key_ = key;
}

HS::KeyboardAction HS::EventKeyboard::getAction() const
{
	return action_;
}

void HS::EventKeyboard::setKeyboardAction(HS::KeyboardAction action)
{
	action_ = action;
}

void HS::EventKeyboard::setKey(std::string key)
{
	if(key == "SPACE")key_ = KeyboardKey::SPACE;
	else if (key == "RETURN")key_ = KeyboardKey::RETURN;
	else if (key == "ESCAPE")key_ = KeyboardKey::ESCAPE;
	else if (key == "TAB")key_ = KeyboardKey::TAB;
	else if (key == "LEFTARROW")key_ = KeyboardKey::LEFTARROW;
	else if (key == "RIGHTARROW")key_ = KeyboardKey::RIGHTARROW;
	else if (key == "UPARROW")key_ = KeyboardKey::UPARROW;
	else if (key == "DOWNARROW")key_ = KeyboardKey::DOWNARROW;
	else if (key == "PAUSE")key_ = KeyboardKey::PAUSE;
	else if (key == "MINUS")key_ = KeyboardKey::MINUS;
	else if (key == "PLUS")key_ = KeyboardKey::PLUS;
	else if (key == "TILDE")key_ = KeyboardKey::TILDE;
	else if (key == "PERIOD")key_ = KeyboardKey::PERIOD;
	else if (key == "COMMA")key_ = KeyboardKey::COMMA;
	else if (key == "SLASH")key_ = KeyboardKey::SLASH;
	else if (key == "LEFTCONTROL")key_ = KeyboardKey::LEFTCONTROL;
	else if (key == "RIGHTCONTROL")key_ = KeyboardKey::RIGHTCONTROL;
	else if (key == "LEFTSHIFT")key_ = KeyboardKey::LEFTSHIFT;
	else if (key == "RIGHTSHIFT")key_ = KeyboardKey::RIGHTSHIFT;
	else if (key == "F1")key_ = KeyboardKey::F1;
	else if (key == "F2")key_ = KeyboardKey::F2;
	else if (key == "F3")key_ = KeyboardKey::F3;
	else if (key == "F4")key_ = KeyboardKey::F4;
	else if (key == "F5")key_ = KeyboardKey::F5;
	else if (key == "F6")key_ = KeyboardKey::F6;
	else if (key == "F7")key_ = KeyboardKey::F7;
	else if (key == "F8")key_ = KeyboardKey::F8;
	else if (key == "F9")key_ = KeyboardKey::F9;
	else if (key == "F10")key_ = KeyboardKey::F10;
	else if (key == "F11")key_ = KeyboardKey::F11;
	else if (key == "F12")key_ = KeyboardKey::F12;
	else if (key == "A")key_ = KeyboardKey::A;
	else if (key == "B")key_ = KeyboardKey::B;
	else if (key == "C")key_ = KeyboardKey::C;
	else if (key == "D")key_ = KeyboardKey::D;
	else if (key == "E")key_ = KeyboardKey::E;
	else if (key == "F")key_ = KeyboardKey::F;
	else if (key == "G")key_ = KeyboardKey::G;
	else if (key == "H")key_ = KeyboardKey::H;
	else if (key == "I")key_ = KeyboardKey::I;
	else if (key == "J")key_ = KeyboardKey::J;
	else if (key == "K")key_ = KeyboardKey::K;
	else if (key == "L")key_ = KeyboardKey::L;
	else if (key == "M")key_ = KeyboardKey::M;
	else if (key == "N")key_ = KeyboardKey::N;
	else if (key == "O")key_ = KeyboardKey::O;
	else if (key == "P")key_ = KeyboardKey::P;
	else if (key == "Q")key_ = KeyboardKey::Q;
	else if (key == "R")key_ = KeyboardKey::R;
	else if (key == "S")key_ = KeyboardKey::S;
	else if (key == "T")key_ = KeyboardKey::T;
	else if (key == "U")key_ = KeyboardKey::U;
	else if (key == "V")key_ = KeyboardKey::V;
	else if (key == "W")key_ = KeyboardKey::W;
	else if (key == "X")key_ = KeyboardKey::X;
	else if (key == "Y")key_ = KeyboardKey::Y;
	else if (key == "Z")key_ = KeyboardKey::Z;
	else if (key == "1")key_ = KeyboardKey::NUM1;
	else if (key == "2")key_ = KeyboardKey::NUM2;
	else if (key == "3")key_ = KeyboardKey::NUM3;
	else if (key == "4")key_ = KeyboardKey::NUM4;
	else if (key == "5")key_ = KeyboardKey::NUM5;
	else if (key == "6")key_ = KeyboardKey::NUM6;
	else if (key == "7")key_ = KeyboardKey::NUM7;
	else if (key == "8")key_ = KeyboardKey::NUM8;
	else if (key == "9")key_ = KeyboardKey::NUM9;
	else if (key == "0")key_ = KeyboardKey::NUM0;
	else key_ = KeyboardKey::UNDEFINED_KEY;   
}

