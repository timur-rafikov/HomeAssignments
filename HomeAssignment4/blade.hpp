/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 23.10.2024
 */

#ifndef BLADE
#define BLADE

#include <iostream>

class Blade {
private:
	uint _sharpness;
	uint _length;
public:
	Blade(const uint &sharpness, const uint &length);
	Blade();

	void setSharpness(const uint &sharpness);
	void setLength(const uint &length);

	uint getSharpness();
	uint getLength();
};


#endif