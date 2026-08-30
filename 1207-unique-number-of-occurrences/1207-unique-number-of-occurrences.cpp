class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
unordered_map<int, int> mp;
  unordered_set<int> s;
  for (auto i : arr) ++mp[i];
  for (auto& a : mp)
if (!s.insert(a.second).second)
       return false;
  return true;
    }
};