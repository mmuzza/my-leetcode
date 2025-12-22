class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        # myDict = {}
        myDict = defaultdict(list)
        myList = []

        for x in strs:
            sorted_word = "".join(sorted(x))
            myDict[sorted_word].append(x)
        
        # for x in myDict:
        #     myList.append(myDict.get(x))

        # return myList

        return list(myDict.values())


        