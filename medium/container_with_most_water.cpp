class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxArea = 0;
        int end = height.size() - 1;
        int start = 0;
        while (end != start)
        {
            int width = end - start;
            int area = height[start] > height[end] ? height[end--] * width : height[start++] * width;
            if (area > maxArea)
                maxArea = area;
        }
        return maxArea;
    }
};