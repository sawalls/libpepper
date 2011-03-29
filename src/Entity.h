#ifndef ENTITY_H
#define ENTITY_H

namespace Pepper
{

class Entity
{
public:
	Entity();
	virtual void DoLogic();
	virtual void Render();
	virtual ~Entity();
}; // class Entity

}; // namespace Pepper

#endif
