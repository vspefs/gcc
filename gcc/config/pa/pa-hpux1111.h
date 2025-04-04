/* Definitions of target machine for GNU compiler, for HP PA-RISC
   Copyright (C) 2004-2025 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* HP-UX 11i multibyte and UNIX 98 extensions.  */
#undef TARGET_HPUX_11_11
#define TARGET_HPUX_11_11 1

#undef STARTFILE_SPEC
#define STARTFILE_SPEC \
  "%{!shared:%{pg:gcrt0%O%s}%{!pg:%{p:mcrt0%O%s}%{!p:crt0%O%s}} \
     %{munix=95:unix95%O%s}%{!munix=93:%{!munix=95:unix98%O%s}}}"
