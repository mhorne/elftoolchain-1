/*-
 * Copyright (c) 2010-2012 Kai Wang
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $Id$
 */

enum ld_dash {
        ONE_DASH,
	TWO_DASH,
	ANY_DASH
};

enum ld_arg {
	NO_ARG,
	REQ_ARG,
	OPT_ARG
};

enum ld_key {
	KEY_ACCEPT_UNKNOWN = 0x10000,
	KEY_ALLOW_SHLIB_UNDEF,
	KEY_ASSERT,
	KEY_AS_NEEDED,
	KEY_BUILD_ID,
	KEY_CHECK_SECTIONS,
	KEY_CREF,
	KEY_DEFSYM,
	KEY_DEMANGLE,
	KEY_DISABLE_NEW_DTAGS,
	KEY_DYNAMIC,
	KEY_EB,
	KEY_EL,
	KEY_EH_FRAME_HDR,
	KEY_ENABLE_NEW_DTAGS,
	KEY_ERR_UNRESOLVE_SYM,
	KEY_FATAL_WARNINGS,
	KEY_FINI,
	KEY_GC_SECTIONS,
	KEY_GROUP,
	KEY_HASH_STYLE,
	KEY_HELP,
	KEY_INIT,
	KEY_MAP,
	KEY_NO_AS_NEEDED,
	KEY_NO_CHECK_SECTIONS,
	KEY_NO_DEFINE_COMMON,
	KEY_NO_DEMANGLE,
	KEY_NO_GC_SECTIONS,
	KEY_NO_KEEP_MEMORY,
	KEY_NO_OMAGIC,
	KEY_NO_SHLIB_UNDEF,
	KEY_NO_STDLIB,
	KEY_NO_UNDEF_VERSION,
	KEY_NO_UNKNOWN,
	KEY_NO_WHOLE_ARCHIVE,
	KEY_NO_WARN_MISMATCH,
	KEY_RPATH,
	KEY_RPATH_LINK,
	KEY_RUNPATH,
	KEY_SECTION_START,
	KEY_OFORMAT,
	KEY_PIE,
	KEY_QMAGIC,
	KEY_QY,
	KEY_RELAX,
	KEY_RETAIN_SYM_FILE,
	KEY_SHARED,
	KEY_SORT_COMMON,
	KEY_SPLIT_BY_FILE,
	KEY_SPLIT_BY_RELOC,
	KEY_STATIC,
	KEY_STATS,
	KEY_SYMBOLIC,
	KEY_SYMBOLIC_FUNC,
	KEY_TBSS,
	KEY_TDATA,
	KEY_TTEXT,
	KEY_TRADITIONAL_FORMAT,
	KEY_UNRESOLVED_SYMBOLS,
	KEY_UNIQUE,
	KEY_UR,
	KEY_VERSION,
	KEY_VERSION_SCRIPT,
	KEY_WARN_COMMON,
	KEY_WARN_CONSTRUCTORS,
	KEY_WARN_MULTIPLE_GP,
	KEY_WARN_ONCE,
	KEY_WARN_SECTION_ALIGN,
	KEY_WARN_SHARED_TEXTREL,
	KEY_WARN_UNRESOLVE_SYM,
	KEY_WHOLE_ARCHIVE,
	KEY_WRAP,
	KEY_Z_DEFAULT_EXTRACT,
	KEY_Z_DEFS,
	KEY_Z_EXEC_STACK,
	KEY_Z_IGNORE,
	KEY_Z_INIT_FIRST,
	KEY_Z_LAZYLOAD,
	KEY_Z_MULDEFS,
	KEY_Z_NOW,
	KEY_Z_NO_DEFAULT_LIB,
	KEY_Z_NO_DEFS,
	KEY_Z_NO_DELETE,
	KEY_Z_NO_DLOPEN,
	KEY_Z_NO_EXEC_STACK,
	KEY_Z_NO_LAZYLOAD,
	KEY_Z_ORIGIN,
	KEY_Z_RECORD,
	KEY_Z_SYSTEM_LIBRARY,
	KEY_Z_WEAK_EXTRACT,

	KEY_FILE = 0x10000000,
};

struct ld_option {
	const char *lo_long;
	int lo_key;
	enum ld_dash lo_dash;
	enum ld_arg lo_arg;
};

enum ld_wildcard_sort {
	LWS_NONE,
	LWS_NAME,
	LWS_ALIGN,
	LWS_NAME_ALIGN,
	LWS_ALIGN_NAME,
};

struct ld_wildcard {
	char *lw_name;			/* wildcard */
	enum ld_wildcard_sort lw_sort;	/* sort mode */
};

void	ld_options_parse(struct ld*, int, char **);
struct ld_wildcard *ld_wildcard_alloc(struct ld *);
void	ld_wildcard_free(void *);
