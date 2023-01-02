#include "GameConfig.h"


Size GameConfig::_screenSize[ImageQuality::ALL] = {
	Size(2160, 1080),    // 1      // 0.75
	Size(1440, 720)      // 0.5    // 0.5
};


bool GameConfig::loadGameFonfig()
{
	// fonts
	_gameFont.fontFilePath = "fonts/zh-cn.ttf";

	//
	_imageQuanlity = ImageQuality::FullHD;
	//
	Rect area;
	auto frameSize = Director::getInstance()->getOpenGLView()->getFrameSize();
	float displayWidth = (frameSize.height / 9.0f) * 16.0f;

	if (displayWidth < frameSize.width)
	{
		_invSize.size = Size(displayWidth, frameSize.height);
		_invSize.origin = Vec2((frameSize.width - displayWidth) / 2, 0);
	}
	else
	{
		_invSize.size = Size(frameSize);
		_invSize.origin = Vec2(0, 0);
	}
	_isLoaded = true;
	return true;
}

GameConfig::GameConfig()
{
	
}
