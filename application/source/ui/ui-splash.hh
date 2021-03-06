/*
	
		Pc Link - Remote desktop streamer
		Playstation Vita [HENkaku Homebrew]
		
		
		This program is free software: you can redistribute it and/or modify
		it under the terms of the GNU General Public License as published by
		the Free Software Foundation, either version 3 of the License, or
		(at your option) any later version.
		
		This program is distributed in the hope that it will be useful,
		but WITHOUT ANY WARRANTY; without even the implied warranty of
		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
		GNU General Public License for more details.
		
		You should have received a copy of the GNU General Public License
		along with this program.  If not, see <http://www.gnu.org/licenses/>.
		
		
		--->> ui-splash.hh
		
*/

#pragma once

#include "../graphics/texture-manager.hh"
#include "../graphics/font-manager.hh"












class TextureManager;
class FontManager;

class UiSplash {
	public:
		static UiSplash* getInstance();
		UiSplash();
		
		void update();
		void draw();
		bool isReleased();
		void release();
		
	private:
		static bool instanceFlag;
		static UiSplash* uiSplash;
		
		bool active;
		bool released;
		
		int timer;
		int alpha;
		int alphaSpeed;
		
		vita2d_texture* textureBg;
		vita2d_texture* textureIcon;
		
		TextureManager &textureManager = *TextureManager::getInstance();
		FontManager &fontManager = *FontManager::getInstance();
		
		~UiSplash();
		
	};
