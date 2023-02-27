class Solution
{
public:
    int maxEvents(vector<vector<int>> &events)
    {
        sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<int>> minheap;

        int currday = 0, attended = 0, i;

        while (i < events.size() || !minheap.empty())
        {
            if (minheap.empty())
                currday = events[i][0];

            while (i < events.size() && events[i][0] == currday)
                minheap.push(events[i++][1]);

            if (!minheap.empty())
            {
                attended++;
                minheap.pop();
            }

            currday++;

            while (!minheap.empty() && minheap.top() < currday)
                minheap.pop();
        }

        return attended;
    }
};