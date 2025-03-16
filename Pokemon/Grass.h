#pragma once
#include <string>
#include <vector>

using namespace std;

class Pokemon;

struct Grass
{
	string environment_type;
	vector<Pokemon> wild_pokemon_list;  
	int encounter_rate;	
};