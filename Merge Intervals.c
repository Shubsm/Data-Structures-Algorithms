vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

vector<Interval> solution;
   vector<Interval> result;
    bool pinnedStart = false;
    bool inserted = false;

    for(Interval &i : intervals){
        if(inserted){
            result.push_back(i);
            continue;
        }

        if(!pinnedStart && newInterval.start < i.start){
            pinnedStart = true;
        } else if(!pinnedStart && newInterval.start < i.end){
            pinnedStart = true;
            newInterval.start = i.start;
        } else if(!pinnedStart) {
            result.push_back(i);
            continue;
        }

        if(newInterval.end < i.start){
            result.push_back(newInterval);
            result.push_back(i);
            inserted = true;
        } else if(newInterval.end < i.end){
            newInterval.end = i.end;
            result.push_back(newInterval);
            inserted = true;
        }
    }

    if(!inserted){
        result.push_back(newInterval);
    }

    return result;
}
