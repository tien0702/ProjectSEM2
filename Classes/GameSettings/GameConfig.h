#ifndef __GAME_CONFIG_H__
#define __GAME_CONFIG_H__

#include "cocos2d.h"

USING_NS_CC;

enum ImageQuality
{
	FullHD,
	HD,
	ALL
};

class GameConfig
{
public:
	bool loadGameFonfig();
	static Size _screenSize[ImageQuality::ALL];
	static bool _isLoaded;

	TTFConfig _gameFont;
	ImageQuality _imageQuanlity;
	Rect _invSize;

private:
	GameConfig();
};

#endif // !__GAME_CONFIG_H__
