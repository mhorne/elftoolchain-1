inittest strip-debug-4 tc/strip-debug-4
extshar ${TESTDIR}
extshar ${RLTDIR}
runcmd "../strip -g -o elfcopy.1 elfcopy" work true
rundiff true
