month_as_number() {
    local month_name=$(echo $1|$TR_BIN A-Z a-z)

    local month_numeric=
    case $month_name in
        "jan"|"january")
          month_numeric='01'
        ;;

        "feb"|"february")
          month_numeric='02'
        ;;

        "mar"|"march")
          month_numeric='03'
        ;;

        "apr"|"april")
          month_numeric='04'
        ;;

        "may")
          month_numeric='05'
        ;;

        "jun"|"june")
          month_numeric='06'
        ;;

        "jul"|"july")
          month_numeric='07'
        ;;

        "aug"|"august")
          month_numeric='08'
        ;;

        "sep"|"september")
          month_numeric='09'
        ;;

        "oct"|"october")
          month_numeric='10'
        ;;

        "nov"|"november")
          month_numeric='11'
        ;;

        "dec"|"december")
          month_numeric='12'
        ;;
    esac

    echo "$month_numeric"
} ## END: month_as_number()
