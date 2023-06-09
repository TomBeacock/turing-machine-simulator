#include "tape.h"

#include <cstring>

namespace Turing
{
	Tape::Tape(const std::string& input) :
		m_data(input.begin(), input.end()),
		m_head(0)
	{
		if (input.empty()) {
			m_data.push_back(' ');
		}
	}

	void Tape::moveLeft()
	{
		if (m_head == 0) {
			m_data.insert(m_data.begin(), ' ');
		}
		m_head--;
	}

	void Tape::moveRight()
	{
		if (m_head == m_data.size() - 1) {
			m_data.push_back(' ');
		}
		m_head++;
	}

	const char& Tape::read() const
	{
		return m_data[m_head];
	}

	void Tape::write(const char& value)
	{
		m_data[m_head] = value;
	}
}