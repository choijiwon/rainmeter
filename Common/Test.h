/*
  Copyright (C) 2013 Rainmeter Team

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef RM_COMMON_TEST_H
#define RM_COMMON_TEST_H

// This file is meant to be included only by unit testing .cpp files.

#include "CppUnitTest.h"

#ifndef _DEBUG
#error Unit testing is not available in Release builds.
#endif

// DLL projects should delay-load the CppUnitTestFramework.dll to avoid "module not found" errors
// since CppUnitTestFramework.dll is available only when running tests.
#ifdef _MD
#pragma comment(linker, "/DELAYLOAD:Microsoft.VisualStudio.TestTools.CppUnitTestFramework.dll")
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#endif