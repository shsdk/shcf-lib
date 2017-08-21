## ------------------------------------------------------------------------------
## get_ldap_userattrib: given an $ldap_server, get $user_attrib for an $ldap_user
## 
## INPUT: $1 - ldap_server
##        $2 - ldap_user
##        $3 - user_attrib
## OUTPUT: LDAP attrib of an ldap user
##
## ------------------------------------------------------------------------------
get_ldap_userattrib() {
  local ldap_server=$1
  local ldap_user=$2
  local user_attrib=$3

  local retval=$($LDAPSEARCH_BIN -x -H $ldap_server "uid=$ldap_user"|$AWK_BIN -F' '  "/^$user_attrib:/ {print \$2}")

  echo $retval
} ## END: get_ldap_userattrib()
