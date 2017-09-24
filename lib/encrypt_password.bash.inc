## --------------------------------------------------------------------------------
## encrypt_password - basic encryption just to avoid plain sight display of passwords
## WARNING: changing $PASSWD_SALT in ~/init.conf also changes encryption
## --------------------------------------------------------------------------------
encrypt_password()
{
  local clear_text="$1"
  local retval=$INVALID

  retval='ERROR: $PASSWD_SALT undefined'
  if [[ "$PASSWD_SALT" != "" ]] && retval=$(echo "$clear_text"|$OPENSSL_BIN des3 -k "$PASSWD_SALT"|$BASE64_BIN)

  echo "$retval"
} ## END: encrypt_password()
