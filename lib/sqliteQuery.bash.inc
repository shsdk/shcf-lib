## ----------------------------------------
## sqliteQuery() - does querying for sqlite
## INPUT : $1     - dbfile
##         $2-end - query
## OUTPUT : query result. 1 if unsuccessful
## ----------------------------------------

sqliteQuery() {
  local dbfile=$(echo $*|$CUT_BIN -d' ' -f1)
  local query=$(echo $*|$CUT_BIN -d' ' -f2-)
  local retval=1

  ## make sure $dbfile is found
  [[ -e $dbfile ]] && {
    retval=$($SQLITE3_BIN $dbfile "$query";)
  }

  echo $retval
} ## END: sqliteQuery()
