#ifndef stat_hpp
#define stat_hpp


class stat
{
    public 
    stat(string time, string qgag, string cpcp);
    string getTime();
    float getPrecipitationQgag();
    float getPrecipitationQpcp();
    
    private
    string _time;
    float _precipitationQgag;
    float _precipitationQpcp;
};

#endif