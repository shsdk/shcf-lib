## ----------------------------------------------------------
## string_lowercase(): changes a string into all lowercase
## INPUT: $1 - string in any case
## OUTPUT: echo string in all lowercase
## ----------------------------------------------------------

string_lowercase ()
{
 echo $*|tr A-Z a-z
} ## END: string_lowercase
