#pragma once
#include <SFML/Graphics/RenderWindow.hpp>

#include "../../header/UI/SplashScreen/SplashScreenUIController.h"
#include "../../header/UI/MainMenu/MainMenuUIController.h"
#include "../../header/UI/Instructions/InstructionsUIController.h"
#include "../../header/UI/Credits/CreditsScreenUIController.h"
#include "../../header/UI/GamePlay/GameplayUIController.h"
#include "../../header/UI/GameOver/GameOverController.h"

namespace UI
{
	

	class UIService
	{
	private:
		SplashScreen::SplashScreenUIController* splash_screen_ui_controller;
		MainMenu::MainMenuUIController* main_menu_ui_controller;
		Credits::CreditsScreenUIController* credits_screen_ui_controller;
		Instructions::InstructionsUIController* instructions_ui_controller;
		GamePlayUI::GameplayUIController* gameplay_ui_controller;
		GameOverUI::GameOverController* gameover_ui_controller;


		void createControllers();
		void initializeUIElements();
		void initializeControllers();
		void onDestroy();

	public:
		UIService();
		~UIService();

		void initialize();
		void update();
		void render();

		void showSplashScreen();
	};
}