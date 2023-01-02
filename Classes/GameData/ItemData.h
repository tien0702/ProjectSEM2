#ifndef __ITEM_DATA_H__
#define __ITEM_DATA_H__

#include "Scripts/ItemBase.h"

using namespace MyGame;

namespace GameData
{
	class ItemData
	{
	public:
		std::vector<ItemBase*>* getItems();
		ItemBase* getItemByID(short id);
		std::vector<ItemBase*>* getItemsByType(ItemType type);
	};
}


#endif // !__ITEM_DATA_H__
