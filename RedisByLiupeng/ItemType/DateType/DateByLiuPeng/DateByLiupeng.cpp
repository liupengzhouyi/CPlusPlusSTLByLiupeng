//
// Created by 刘鹏 on 2020/10/3.
//

#include "DateByLiupeng.h"

int DateByLiupeng::getYear() const {
    return year;
}

void DateByLiupeng::setYear(int year) {
    DateByLiupeng::year = year;
}

int DateByLiupeng::getMonth() const {
    return month;
}

void DateByLiupeng::setMonth(int month) {
    DateByLiupeng::month = month;
}

int DateByLiupeng::getDay() const {
    return day;
}

void DateByLiupeng::setDay(int day) {
    DateByLiupeng::day = day;
}

int DateByLiupeng::getHour() const {
    return hour;
}

void DateByLiupeng::setHour(int hour) {
    DateByLiupeng::hour = hour;
}

int DateByLiupeng::getMinute() const {
    return minute;
}

void DateByLiupeng::setMinute(int minute) {
    DateByLiupeng::minute = minute;
}

int DateByLiupeng::getSecond() const {
    return second;
}

void DateByLiupeng::setSecond(int second) {
    DateByLiupeng::second = second;
}

int DateByLiupeng::getWeekday() const {
    return weekday;
}

void DateByLiupeng::setWeekday(int weekday) {
    DateByLiupeng::weekday = weekday;
}

int DateByLiupeng::getYearday() const {
    return yearday;
}

void DateByLiupeng::setYearday(int yearday) {
    DateByLiupeng::yearday = yearday;
}

int DateByLiupeng::getSeason() const {
    return season;
}

void DateByLiupeng::setSeason(int season) {
    DateByLiupeng::season = season;
}

void DateByLiupeng::tmToDateByLiupeng(tm *tm) {
    this->setYear(tm->tm_year + 1900);
    this->setMonth(tm->tm_mon);
    this->setDay(tm->tm_mday);

    this->setHour(tm->tm_hour);
    this->setMinute(tm->tm_min);
    this->setSecond(tm->tm_sec);

    this->setWeekday(tm->tm_wday);
}

tm DateByLiupeng::dateByLiupengToTm() {
    tm temp = tm();
    
    temp.tm_sec = this->getSecond();    // 秒，正常范围从 0 到 59，但允许至 61
    temp.tm_min = this->getMinute();    // 分，范围从 0 到 59
    temp.tm_hour=this->getHour();       // 小时，范围从 0 到 23
    temp.tm_mday = this->getDay();      // 一月中的第几天，范围从 1 到 31
    temp.tm_mon=this->getMonth();       // 月，范围从 0 到 11
    temp.tm_year=this->getYear() - 1900;// 自 1900 年起的年数
    temp.tm_wday=this->getWeekday();    // 一周中的第几天，范围从 0 到 6，从星期日算起
    temp.tm_yday=this->getYearday();    // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
    temp.tm_isdst=this->getSeason();    // 夏令时

    return temp;
}

std::string DateByLiupeng::getCHSString() {
    std::string date =
            std::to_string(this->getYear()) + "-" + std::to_string(this->getMonth()+1) + "-" + std::to_string(this->getDay());
    std::string time =
            std::to_string(this->getHour()) + ":" + std::to_string(this->getMinute()) + ":" + std::to_string(this->getSecond());
    return date + " " + time + " " + weeksCHS[this->getWeekday()] + " " + monthsCHS[this->getMonth()];
}

std::string DateByLiupeng::getENString() {
    std::string date =
            std::to_string(this->getYear()) + "-" + std::to_string(this->getMonth()+1) + "-" + std::to_string(this->getDay());
    std::string time =
            std::to_string(this->getHour()) + ":" + std::to_string(this->getMinute()) + ":" + std::to_string(this->getSecond());
    return date + " " + time + " " + weeksEN[this->getWeekday()] + " " + monthsEN[this->getMonth()];
}



