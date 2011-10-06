/****************************************************************************
**
** Copyright (C) 1992-2009 Nokia. All rights reserved.
** Copyright 2005 Roberto Raggi <roberto@kdevelop.org>
**
** This file is part of Qt Jambi.
**
** Commercial Usage
Licensees holding valid Qt Commercial licenses may use this file in
accordance with the Qt Commercial License Agreement provided with the
Software or, alternatively, in accordance with the terms contained in
a written agreement between you and Nokia.

GNU Lesser General Public License Usage
Alternatively, this file may be used under the terms of the GNU Lesser
General Public License version 2.1 as published by the Free Software
Foundation and appearing in the file LICENSE.LGPL included in the
packaging of this file.  Please review the following information to
ensure the GNU Lesser General Public License version 2.1 requirements
will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.

In addition, as a special exception, Nokia gives you certain
additional rights. These rights are described in the Nokia Qt LGPL
Exception version 1.0, included in the file LGPL_EXCEPTION.txt in this
package.

GNU General Public License Usage
Alternatively, this file may be used under the terms of the GNU
General Public License version 3.0 as published by the Free Software
Foundation and appearing in the file LICENSE.GPL included in the
packaging of this file.  Please review the following information to
ensure the GNU General Public License version 3.0 requirements will be
met: http://www.gnu.org/copyleft/gpl.html.

If you are unsure which license is appropriate for your use, please
contact the sales department at qt-sales@nokia.com.

**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#ifndef PP_INTERNAL_H
#define PP_INTERNAL_H

#include <algorithm>
#include <cstdio>

namespace rpp {

namespace _PP_internal
{

inline void extract_file_path (const std::string &__filename, std::string *__filepath)
{
  std::size_t __index = __filename.rfind (PATH_SEPARATOR);

  if (__index == std::string::npos)
    *__filepath = "/";

  else
    __filepath->assign (__filename, 0, __index + 1);
}

template <typename _OutputIterator>
void output_line(const std::string &__filename, int __line, _OutputIterator __result)
{
  std::string __msg;

  __msg += "# ";

  char __line_descr[16];
  pp_snprintf (__line_descr, 16, "%d", __line);
  __msg += __line_descr;

  __msg += " \"";

  if (__filename.empty ())
    __msg += "<internal>";
  else
    __msg += __filename;

  __msg += "\"\n";
  std::copy (__msg.begin (), __msg.end (), __result);
}

template <typename _InputIterator>
inline bool comment_p (_InputIterator __first, _InputIterator __last) /*const*/
{
  if (__first == __last)
    return false;

  if (*__first != '/')
    return false;

  if (++__first == __last)
    return false;

  return (*__first == '/' || *__first == '*');
}

struct _Compare_string: public std::binary_function<bool, pp_fast_string const *, pp_fast_string const *>
{
  inline bool operator () (pp_fast_string const *__lhs, pp_fast_string const *__rhs) const
  { return *__lhs < *__rhs; }
};

struct _Equal_to_string: public std::binary_function<bool, pp_fast_string const *, pp_fast_string const *>
{
  inline bool operator () (pp_fast_string const *__lhs, pp_fast_string const *__rhs) const
  { return *__lhs == *__rhs; }
};

struct _Hash_string: public std::unary_function<std::size_t, pp_fast_string const *>
{
  inline std::size_t operator () (pp_fast_string const *__s) const
  {
    char const *__ptr = __s->begin ();
    std::size_t __size = __s->size ();
    std::size_t __h = 0;

    for (std::size_t i = 0; i < __size; ++i)
      __h = (__h << 5) - __h + __ptr [i];

    return __h;
  }
};

} // _PP_internal

} // namespace rpp

#endif // PP_INTERNAL_H

// kate: space-indent on; indent-width 2; replace-tabs on;
