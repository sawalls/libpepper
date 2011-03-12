#ifndef ENTITY_H
#define ENTITY_H
class Entity{
	public:
	Entity();
	virtual void DoLogic();
	virtual void Render();
	~Entity();
};
#endif
