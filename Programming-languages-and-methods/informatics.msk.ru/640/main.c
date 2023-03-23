#include <stdio.h>

int proverka(int year)
{
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
        return 1;
    else
        return 0;
}


int main() {
    int day_year, month_year, day_now, month_now, year_now, wis, coun=0;
    scanf("%d %d\n", &day_year, &month_year);
    scanf("%d %d %d", &day_now, &month_now, &year_now);
    wis = proverka(year_now);
    if (month_now != month_year)
        {coun -= day_now;
        day_now = 1;}
    else{
        if(day_year>=day_now)
        {
            coun -= day_now;
            day_now = 1;
        }
        else
        {
            if (month_now == 4 || month_now == 6 || month_now == 9 || month_now == 11)
            {
                coun += (30-day_now);
                month_now++;

            }
            else if (month_now != 2)
            {
                {
                    if (month_now != 12)
                    {
                        coun += (31-day_now);
                        month_now += 1;
                    }
                    else
                    {
                        coun += (31-day_now);
                        month_now = 1;
                        year_now++;
                        wis  = proverka(year_now);
                    }

                }
            }
            else
            {
                if (wis == 1)
                {


                    coun += (29-day_now);
                    month_now += 1;


                }
                else
                {
                    coun += (28-day_now);
                    month_now += 1;
                }


            }
            day_now = 1;
        }

    }
//    printf("%d %d %d %d %d %d %d \n",day_year, month_year, day_now, month_now, year_now, wis, coun);
    while ((month_now != month_year)||(day_now != day_year))
    {
        if (month_now != month_year)
        {
            if (month_now == 4 || month_now == 6 || month_now == 9 || month_now == 11)
            {
                coun += 30;
                month_now++;

            }
            else if (month_now != 2)
            {
                {
                    if (month_now != 12)
                    {
                        coun += 31;
                        month_now += 1;
                    }
                    else
                    {
                        coun += 31;
                        month_now = 1;
                        year_now++;
                        wis  = proverka(year_now);
                    }

                }
            }
            else
            {
                if (wis == 1)
                {


                    coun += 29;
                    month_now += 1;


                }
                else
                {
                    coun += 28;
                    month_now += 1;
                }


            }
        }
        else
        {
            if(month_year!=2)
            {
                coun+=day_year;
                break;
            }
            else
            {

                if(wis== 0 && day_year==29)
                {
                    coun+=28;
                    month_now++;
                }
                else
                {
                    coun+=day_year;
                    break;
                }
            }
        }

    }


    printf("%d", coun);



    return 0;
}