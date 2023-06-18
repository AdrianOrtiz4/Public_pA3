#pragma once

#include "Entity.h"
#include "Client.h"

class EntityManager {

public:
	Client* firstClient;
	Client* nextClient;
	void tick();
	void render();
	void addEntity(Entity *e);
	void addClient(Client *c);
	void removeLeavingClients();
	std::vector<Entity*> entities;
};