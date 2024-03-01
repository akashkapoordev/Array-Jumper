#pragma once
#include <SFML/Graphics/RenderWindow.hpp>

#include "../../header/Graphics/GraphicService.h"
#include "../../header/UI/UIService.h"
#include "../../header/Sound/SoundService.h"
#include "../../header/Global/ServiceLocator.h"


namespace Main
{

	enum class GameState
	{
		BOOT,
		SPLASH_SCREEN,
		MAIN_MENU,
		INSTRUCTIONS,
		CREDITS,
	};

	class GameService
	{
	private:
		const int frame_rate = 60;

		static GameState current_state;
		Global::ServiceLocator* service_locator;
		sf::RenderWindow* game_window;

		void initialize();
		void showSplashScreen();
		void onDestroy();

	public:
		GameService();
		virtual ~GameService();

		void ignite();
		void update();
		void render();
		bool isRunning();

		static void setGameState(GameState new_state);
		static GameState getGameState();
	};
}