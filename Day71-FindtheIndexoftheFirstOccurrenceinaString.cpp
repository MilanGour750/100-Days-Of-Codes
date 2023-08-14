class Solution {
 public:
  int strStr(string haystack, string needle) {
    const int p = haystack.length();
    const int q = needle.length();

    for (int i = 0; i < p-q + 1; i++)
      if (haystack.substr(i, q) == needle)
        return i;

    return -1;
  }
};
