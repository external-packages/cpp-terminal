/*
* cpp-terminal
* C++ library for writing multi-platform terminal applications.
*
* SPDX-FileCopyrightText: 2019-2023 cpp-terminal
*
* SPDX-License-Identifier: MIT
*/

#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace Term
{

class Arguments
{
public:
  Arguments() noexcept;
  static std::size_t              argc() noexcept;
  static std::vector<std::string> argv() noexcept;
  std::string                     operator[](const std::size_t& arg) const;

private:
  static void                     parse() noexcept;
  static std::vector<std::string> m_args;
  static bool                     m_parsed;
};

class Argc
{
public:
  Argc() noexcept;
  operator std::size_t();
  operator std::size_t() const;
};

static const Arguments argv;  //NOLINT(fuchsia-statically-constructed-objects)
static const Argc      argc;  //NOLINT(fuchsia-statically-constructed-objects)

}  // namespace Term
