# $FreeBSD: src/usr.bin/elfdump/Makefile,v 1.4 2003/02/03 01:59:27 obrien Exp $

PROG=	elfdump
WARNS?=	6

LDADD=	-lelf

.include <bsd.prog.mk>
