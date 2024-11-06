#pragma once
#include "../../header/UI/UIElement/TextView.h"
namespace GamePlayUI
{
	class  GameplayUIController
	{
	public:
		 GameplayUIController();
		~ GameplayUIController();

		void initialize();
		void update();
		void render();

	private:
		float font_size = 55;

		const float top_offset = 100.f;
		const float left_offset = 100.f;
		const float right_offset = 250.f;

		UI::UIElement::TextView* m_liveTextView;
		void createLiveTextView();
		void initializeLiveTextView();
		void updateLiveTextView();

	};


}