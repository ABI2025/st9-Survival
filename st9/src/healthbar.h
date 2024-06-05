#pragma once
#include <SFML/Graphics.hpp>
#include "glm/glm.hpp"
class Player;
class healthbar
{
private:
	double& m_health;
	healthbar(double&);
	inline static healthbar* s_instance;
public:

	static void init(double& i_health);

	static healthbar* get_instance();

	static void delete_instance();

	~healthbar() = default;
	[[nodiscard]] double get_health() const;

	[[nodiscard]] bool alive() const;
	void draw_healthbar(sf::RenderTarget&, Player&) const;

};

