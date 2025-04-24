#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<___>& ) {
    //Implement statistics here
    Stats result;
    if(v.size()>=1) {
        result.average = v.at(0);
        result.min = v.at(0);
        result.max = v.at(0);
    }
    for (int num : v) {
        result.average += num
        if(num<result.min)
            result.min = num;
        if(num>result.max)
            result.max = num;
    }
    result.average = (float) result.average/v.size();
    return res;
}
