#ifndef __ITEM_BASE_H__
#define __ITEM_BASE_H__

#include "cocos2d.h"

USING_NS_CC;

namespace MyGame
{
	enum EquipableLocation
	{
		Weapon,
		RuneTop,
		RuneMiddle,
		RuneBottom
	};

	enum ItemType
	{
		WeaponType,
		RuneType,
		CollectableType,
		FoodType
	};

	enum ItemQuality
	{
		Normal,
		Rate,
		Legendary
	};

	class ItemBase
	{
	public:

	protected:
		CC_SYNTHESIZE(short, _level, Level);
		CC_SYNTHESIZE(std::string, _itemName, ItemName);
		CC_SYNTHESIZE(std::string, _description, Description);
		CC_SYNTHESIZE(std::string, _story, Story);
		CC_SYNTHESIZE(std::string, _iconName, IconName);

		CC_SYNTHESIZE(ItemType, _itemType, TypeItem);
		CC_SYNTHESIZE(ItemQuality, _quality, Quality);
		CC_SYNTHESIZE(EquipableLocation, _equipLocation, EquipLocation);
	};

#endif // !__ITEM_BASE_H__

}
