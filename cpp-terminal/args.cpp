/*
* cpp-terminal
* C++ library for writing multi-platform terminal applications.
*
* SPDX-FileCopyrightText: 2019-2023 cpp-terminal
*
* SPDX-License-Identifier: MIT
*/

#include "cpp-terminal/args.hpp"

namespace Term
{

Term::Arguments::Arguments() noexcept {}

Term::Argc::Argc() noexcept {}

Term::Argc::operator std::size_t() { return Term::Arguments::argc(); }

Term::Argc::operator std::size_t() const { return Term::Arguments::argc(); }

std::string Term::Arguments::operator[](const std::size_t& arg) const { return m_args.at(arg); }

}  // namespace Term
