#pragma once
#include "../../header/Level/LevelData.h"
namespace Level
{
	struct BoxDimension
	{
		float box_width = 300.f;
		float box_height = 300.f;

		float box_spacing;

		float box_spacing_percentage = 0.3f;
		float bottom_offset = 200.f;

	};
	class LevelModel
	{
	public:
		LevelModel();
		~LevelModel();

		BlockType getCurrentBoxValue(int currentPosion);

	private:
		LevelData current_level_data;
	};


}