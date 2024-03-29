#ifndef SDDS_RACECAR_H
#define SDDS_RACECAR_H
#include "Car.h"

namespace sdds {
	class Racecar: public Car {
	private:
		double m_booster{};

	public:
		Racecar(std::istream& in);
		void display(std::ostream& out) const;
		double topSpeed() const;
		bool booster() const;
	};
}
#endif