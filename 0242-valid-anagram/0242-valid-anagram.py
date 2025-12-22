class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s) != len(t):
            return False

        sDict = {}
        tDict = {}

        for x in s:
            sDict[x] = sDict.get(x, 0) + 1
        
        for x in t:
            tDict[x] = tDict.get(x, 0) + 1

        return sDict == tDict
        