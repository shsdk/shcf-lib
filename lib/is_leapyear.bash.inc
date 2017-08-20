## ----------------------------------------------------------
## is_leapyear: determines if a year is leap year or not
##        
## INPUT: $1 - numering 4 digit year
## OUTPUT: $TRUE - if leap year, $FALSE otherwise
## ----------------------------------------------------------

is_leapyear()
{
  local year_input=$1

  local clean_div4=$(echo "$year_input%4"|bc)
  local clean_div100=$(echo "$year_input%100"|bc)
  local clean_div400=$(echo "$year_input%400"|bc)

  if [[ $clean_div4 -eq 0 ]]; then
     retval=$TRUE                                 ## leap year if divisible by 4 (no remainders)
     if [[ $clean_div100 -eq 0 ]]; then
        retval=$FALSE                             ## IS NOT LEAP YEAR if divisible by 100 (no remainders)
        [[ $clean_div400 -eq 0 ]] && retval=$TRUE ## except if year is cleanly divisible by 400 (no remainders)
     fi
  fi

  echo $retval
} ## END: is_leapyear()
