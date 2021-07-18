function calculateDaysBetweenDates(Begin, end){
    var begin = new Date(Begin);
    var end = new Date(end);
    var days = Math.round((end - begin) / (24 * 60 * 60 * 1000));
    return days;
}
//what is the date of the first day of the month 

