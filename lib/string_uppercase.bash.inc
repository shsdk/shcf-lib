## ----------------------------------------------------------
## string_uppercase(): changes a string into all uppercase
## INPUT: $1 - string in any case
## OUTPUT: echo string in all uppercase
## ----------------------------------------------------------
string_uppercase ()
{
 echo $*|tr a-z A-Z
} ## END: string_uppercase
