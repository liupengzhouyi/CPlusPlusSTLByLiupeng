//
// Created by 刘鹏 on 2020/10/3.
//

#ifndef CPLUSPLUSSTLBYLIUPENG_DATEBYLIUPENG_H
#define CPLUSPLUSSTLBYLIUPENG_DATEBYLIUPENG_H
#include<time.h>
#include <string>

class DateByLiupeng {
private:
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int weekday;
    int yearday;
    int season;

    std::string weeksEN[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    std::string monthsEN[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    std::string weeksCHS[7] = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};

    std::string monthsCHS[12] = {"一月", "二月", "三月", "四月", "五月", "六月", "七月", "八月", "九月", "十月", "十一月", "十二月"};

public:
    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

    int getHour() const;

    void setHour(int hour);

    int getMinute() const;

    void setMinute(int minute);

    int getSecond() const;

    void setSecond(int second);

    int getWeekday() const;

    int getYearday() const;

    void setYearday(int yearday);

    int getSeason() const;

    void setSeason(int season);

    void setWeekday(int weekday);

    void tmToDateByLiupeng(tm *tm);

    tm dateByLiupengToTm();

    std::string getCHSString() const;

    std::string getENString();
};


#endif //CPLUSPLUSSTLBYLIUPENG_DATEBYLIUPENG_H
