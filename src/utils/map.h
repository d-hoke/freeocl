/*
	FreeOCL - a free OpenCL implementation for CPU
	Copyright (C) 2011  Nikolay Nikolaev

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
#ifndef __FREEOCL_UTILS_MAP_H__
#define __FREEOCL_UTILS_MAP_H__

#ifdef FREEOCL_USE_CXX0X
#include <unordered_map>
#include "hash.h"
#else
#include <map>
typedef unsigned int	uint32_t;
#endif

namespace FreeOCL
{
	template<typename _Key, typename _Tp>
	class map: public
#ifdef FREEOCL_USE_CXX0X
			std::unordered_map<_Key, _Tp, FreeOCL::hash<_Key> >
#else
			std::map<_Key, _Tp>
#endif
	{
	};

}

#endif /* __FREEOCL_UTILS_MAP_H__ */
