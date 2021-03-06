/*
	FreeOCL - a free OpenCL implementation for CPU
	Copyright (C) 2011  Roland Brochard

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifndef __FREEOCL_PARSER_ARRAY_TYPE_H__
#define __FREEOCL_PARSER_ARRAY_TYPE_H__

#include "pointer_type.h"
#include <vector>

namespace FreeOCL
{
	class array_type : public pointer_type
	{
	public:
		array_type(const smartptr<type> &base_type,
				   const bool b_const,
				   const address_space addr_space,
				   const size_t size)
            : pointer_type(base_type, b_const, addr_space), m_size(size)	{}

		virtual smartptr<type> clone(const bool b_const, const address_space addr_space) const;

		virtual std::string suffix() const;
		virtual std::string prefix() const;
		virtual std::string complete_name() const;

        size_t get_size() const	{	return m_size;	}

        size_t size() const;

        virtual const char *get_node_type() const;
    private:
        size_t m_size;
	};
}

#endif
