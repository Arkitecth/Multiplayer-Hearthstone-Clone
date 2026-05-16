#include "BackgroundWidget.h"

BackgroundWidget::BackgroundWidget()
{
	setType("widget"); 
}

void BackgroundWidget::draw()
{
	ENGINE.getRenderer()->drawTexture(texture_); 
}

void BackgroundWidget::update()
{
}

void BackgroundWidget::eventHandler(const HS::Event* e)
{
}; 
