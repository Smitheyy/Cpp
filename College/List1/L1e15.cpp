int IsDateErlier(unsigned int day1, unsigned int month1, unsigned int year1, unsigned int day2, unsigned int month2, unsigned int year2){

    if(year1 < year2)
        return 1;

    else if(year1 > year2)
        return 2;

    else{
        if(month1 < month2)
            return 1;

        else if(month1 > month2)
            return 2;

        else{
            if(day1 < day2)
                return 1;

            else if(day1 > day2)
                return 2;

            else{
                return 0;
            }
        }
    }
}
