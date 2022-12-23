/* pshline.h -- interface to the psh readline functions in pshline.c. */

/* Copyright (C) 1993-2019 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Bash is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Bash.  If not, see <http://www.gnu.org/licenses/>.
*/

#if !defined (_BASHLINE_H_)
#define _BASHLINE_H_

#include "stdc.h"

extern int psh_readline_initialized;
extern int hostname_list_initialized;

/* these are controlled via shopt */
extern int perform_hostname_completion;
extern int no_empty_command_completion;
extern int force_fignore;
extern int dircomplete_spelling;
extern int dircomplete_expand;
extern int dircomplete_expand_relpath;
extern int complete_fullquote;

extern void posix_readline_initialize PARAMS((int));
extern void reset_completer_word_break_chars PARAMS((void));
extern int enable_hostname_completion PARAMS((int));
extern void initialize_readline PARAMS((void));
extern void pshline_reset PARAMS((void));
extern void pshline_reinitialize PARAMS((void));
extern int psh_re_edit PARAMS((char *));

extern void pshline_set_event_hook PARAMS((void));
extern void pshline_reset_event_hook PARAMS((void));

extern int bind_keyseq_to_unix_command PARAMS((char *));
extern int psh_execute_unix_command PARAMS((int, int));
extern int print_unix_command_map PARAMS((void));
extern int unbind_unix_command PARAMS((char *));

extern char **psh_default_completion PARAMS((const char *, int, int, int, int));

extern void set_directory_hook PARAMS((void));

/* Used by programmable completion code. */
extern char *command_word_completion_function PARAMS((const char *, int));
extern char *psh_groupname_completion_function PARAMS((const char *, int));
extern char *psh_servicename_completion_function PARAMS((const char *, int));

extern char **get_hostname_list PARAMS((void));
extern void clear_hostname_list PARAMS((void));

extern char **psh_directory_completion_matches PARAMS((const char *));
extern char *psh_dequote_text PARAMS((const char *));

#endif /* _BASHLINE_H_ */
