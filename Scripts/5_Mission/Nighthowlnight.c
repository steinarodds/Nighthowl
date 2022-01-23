    bool IsNight()
    {
        int year, month, day, hour, minute;
        int nightbegin = m_StSConfig.NightBegin;
        int nightend = m_StSConfig.NightEnd;
        GetGame().GetWorld().GetDate(year, month, day, hour, minute);
        if ( hour >= 23 || hour <= 05 )
        {
            return true;
        } else {
            return false;
        }
void Nighthowlstart 
    };