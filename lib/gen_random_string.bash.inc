## -----------------------------------------
## gen_random_string: generates random string
## -----------------------------------------

gen_random_string() {
  $DATE_BIN | $SHA1SUM_BIN | $CUT_BIN -d' ' -f1 
}
