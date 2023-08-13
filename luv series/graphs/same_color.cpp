#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

void dfs(int i, int j, int initialclr, int finalclr, vector<vector<int>> image)
{
    int n = image.size();
    int m = image[0].size();
    if (i < 0 || j < 0 || i >= n || j >= m)
        return;
    if (image[i][j] != initialclr)
        return;

    image[i][j] = finalclr;
    dfs(i - 1, j, initialclr, finalclr, image);
    dfs(i, j - 1, initialclr, finalclr, image);
    dfs(i, j + 1, initialclr, finalclr, image);
    dfs(i + 1, j, initialclr, finalclr, image);
}
vector<vector<int>> floodfill(vector<vector<int>> image, int sr, int sc, int newclr)
{
    int initialcolor = image[sr][sc];
    if (initialcolor != newclr)
    {
        dfs(sr, sc, initialcolor, newclr, image);
    }
    return image;
}
// https://leetcode.com/problems/flood-fill/
int main()
{

    return 0;
}