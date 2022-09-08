#include <iostream>

class Monster
{

public:
	enum MonsterType
	{
		Dragon,
		Goblin,
		Orge,
		Orc,
		Skeleton,
		Troll,
		Vampire,
		Zombie,
		MAX_MONSTER_TYPES
	};

private:
	enum MonsterType m_monster;
	std::string m_name;
	int m_hp;

public:
	Monster(MonsterType monst, std::string name, int hp)
	{
		this->m_monster = monst;
		this->m_name = name;
		this->m_hp = hp;
	}

	std::string getTypeString()
	{
		int monster_int;
		monster_int = this->m_monster;
		//std::cout << monster_int << std::endl;
		switch (monster_int)
		{
			case 0: return "dragon"; break;
			case 1: return "goblin"; break;
			case 2: return "orge"; break;
			case 3: return "orc"; break;
			case 4: return "skeleton"; break;
			case 5: return "troll"; break;
			case 6: return "vampire"; break;
			case 7: return "zombie"; break;
			default: return 0 ; break;
		}
	}

	void print()
	{
		std::cout<< this->m_name << " is the " << getTypeString() <<
		" that has " << this->m_hp << " health points." << std::endl;
	}

};

class MonsterGenerator
{
public:
	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}

	static Monster generateMonster()
	{
		//Monster x (Monster::Orc, "Jack", 90);
		
		Monster::MonsterType type = static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1));
		int health = getRandomNumber(1, 100);
		static std::string s_names[6]{ "John", "Brad", "Alex", "Thor", "Hulk", "Asnee" };
		return Monster(type, s_names[getRandomNumber(0, 5)], health);
	}
	
	
};



int main ()
{
	Monster m = MonsterGenerator::generateMonster();
	m.print();
	return 0;
}