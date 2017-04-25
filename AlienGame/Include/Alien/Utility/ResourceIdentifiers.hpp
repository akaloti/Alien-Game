#pragma once

/*
 * Authors: Artur Moreira, Henrik Vogelius Hansson, and
 *   Jan Haller
 */

// Forward declaration of SFML classes
namespace sf
{
	class Texture;
  class Font;
}

namespace Textures
{
	enum ID
	{
    //Background,
		//Test,
	};
}

namespace Fonts
{
  enum ID
  {
    Main,
  };
}

// Forward declaration and a few type definitions
template <typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;
typedef ResourceHolder<sf::Font,    Fonts::ID>     FontHolder;
