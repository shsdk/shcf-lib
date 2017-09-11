### -------------------------------------------------------------------
### uniq_instring: given a array with duplicating string, remove
###        duplicates and echo clean, non-duplicating array of string
### INPUT: $1 - character to filter (optional and
###             defaults to <space> char
###             NOTE: $filter right now just supports:
###                 * COMMA
###           --> without a valid $filter, string is
###               assumed to be space delimited
###        $@ - rest of string to process
### OUTPUT: $filter delimited uniq string
### -------------------------------------------------------------------
