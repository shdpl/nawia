#/bin/bash
GSDIR=/usr/local/share/gs
SYSTEMUSER=gs

BINDIR=$PWD
REPODIR=$BINDIR/../..
DATADIR=$REPODIR/external/ot/data

if [ -d "$GSDIR" ]; then
	mkdir -p $GSDIR;
if

egrep -i "^$SYSTEMUSER" /etc/passwd
if [ $? -ne 0 ]; then
	adduser --shell /usr/sbin/nologin --no-create-home --disabled-login --disabled-password $SYSTEMUSER
if

#createuser -D -l -P -S -R gs
#createdb -O gs gs

install -C -m 111 $BINDIR/otserv $GSDIR/otserv
install -C -m 400 $BINDIR/config.lua $GSDIR/otserv.lua
install -C -d -m 400 $DATADIR $GSDIR/data

chown $SYSTEMUSER $GSDIR
chmod 111 $GSDIR;
