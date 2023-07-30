#!/bin/bash

lib_name=$1

if [[ "$lib_name" != "" ]] && [[ ! -d $lib_name ]]; then

    mkdir -p $lib_name/etc $lib_name/lib
    echo "## each line's dependency functions defined here" > $lib_name/dependencies.cfg

    cat >$lib_name/etc/binaries.conf<< _BLOCK_
## Any binaries that is needed by this library
## Follow the pattern below.
##
#~SED_BIN=$(which sed 2>/dev/null)
_BLOCK_

    echo "## Any initialization vars should be here" > $lib_name/init.conf

    cat >$lib_name/lib/${lib_name}.bash.inc<< _BLOCK_
${lib_name}() {
    local param1=\$1
    local paramX=\$x

    ## body of library/function here
    :
} ## END: ${lib_name}()
_BLOCK_
else
    echo "ERROR: Library name missing or  already exist."
    exit 1
fi
