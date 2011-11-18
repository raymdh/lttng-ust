#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER ust_tests_fork

#if !defined(_TRACEPOINT_UST_TESTS_FORK_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TRACEPOINT_UST_TESTS_FORK_H

/*
 * Copyright (C) 2011  Mathieu Desnoyers <mathieu.desnoyers@efficios.com>
 *
 * THIS MATERIAL IS PROVIDED AS IS, WITH ABSOLUTELY NO WARRANTY EXPRESSED
 * OR IMPLIED.  ANY USE IS AT YOUR OWN RISK.
 *
 * Permission is hereby granted to use or copy this program
 * for any purpose,  provided the above notices are retained on all copies.
 * Permission to modify the code and to distribute modified code is granted,
 * provided the above notices are retained, and a notice that the code was
 * modified is included with the above copyright notice.
 */

#include <lttng/tracepoint.h>
#include <sys/types.h>

TRACEPOINT_EVENT(ust_tests_fork, before_fork,
	TP_ARGS(),
	TP_FIELDS()
)

TRACEPOINT_EVENT(ust_tests_fork, after_fork_child,
	TP_ARGS(pid_t, pid),
	TP_FIELDS(
		ctf_integer(pid_t, pid, pid)
	)
)

TRACEPOINT_EVENT(ust_tests_fork, after_fork_parent,
	TP_ARGS(),
	TP_FIELDS()
)

TRACEPOINT_EVENT(ust_tests_fork, after_exec,
	TP_ARGS(),
	TP_FIELDS()
)

#endif /* _TRACEPOINT_UST_TESTS_FORK_H */

#undef TRACEPOINT_INCLUDE_FILE
#define TRACEPOINT_INCLUDE_FILE ./ust_tests_fork.h

/* This part must be outside ifdef protection */
#include <lttng/tracepoint-event.h>
