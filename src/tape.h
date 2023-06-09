#pragma once

#include <string>
#include <vector>
#include <iostream>

namespace Turing
{
	class Tape
	{
	public:
		Tape(const std::string& input = "");

		void moveLeft();
		void moveRight();
		const char& read() const;
		void write(const char& value);

		friend std::ostream& operator<<(std::ostream& os, const Tape& dt);

	private:
		std::vector<char> m_data;
		size_t m_head;
	};

	std::ostream& operator<<(std::ostream& os, const Tape& tape)
	{
		os << "[";
		for (size_t i = 0; i < tape.m_data.size(); i++) {
			if (i == tape.m_head) {
				os << "\x1B[4m" << tape.m_data[i] << "\x1B[24m";
			}
			else {
				os << tape.m_data[i];
			}
		}
		os << "]" << std::endl;
		return os;
	}
}