#pragma once

class Slav
{
	int _type;
	int _HP;
	int _Power;

public:

	Slav();

	int HP() { return _HP; };
	int Power() { return _Power; };

	void set_HP(int dmg)
	{
		_HP -= dmg;
	}
};