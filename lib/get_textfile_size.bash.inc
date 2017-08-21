## -----------------------------------------------------------
## get_textfile_size: gets the file size
##
## INPUT: $1 - filename
## OUTPUT: filesize of a text file
##
## NOTE: As stated in http://stackoverflow.com/questions/5920333/how-to-check-size-of-a-file,
##       this may not work in OSX
## -----------------------------------------------------------
get_textfile_size()
{
  local filename=$1
 
  echo $($WC_BIN -c < $filename)
} ## END: get_textfile_size()
