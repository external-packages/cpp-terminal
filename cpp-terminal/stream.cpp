/*
* cpp-terminal
* C++ library for writing multi-platform terminal applications.
*
* SPDX-FileCopyrightText: 2019-2023 cpp-terminal
*
* SPDX-License-Identifier: MIT
*/

#include "cpp-terminal/stream.hpp"

Term::TIstream::TIstream(const Term::Buffer::Type& type, const std::streamsize& size) : std::basic_istream<char, std::char_traits<char>>(&m_buffer), m_buffer(type, size) {}

std::streambuf* Term::TIstream::rdbuf() const { return const_cast<Term::Buffer*>(&m_buffer); }

Term::TOstream::TOstream(const Term::Buffer::Type& type, const std::streamsize& size) : std::basic_ostream<char, std::char_traits<char>>(&m_buffer), m_buffer(type, size) {}
