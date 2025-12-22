class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        # use dictionary/map to store number and index
        myDict = {}

        # we will return a list/vector
        myList = []

        for i, x in enumerate(nums):
            if target - x in myDict:
                myList.append(myDict.get(target-x))
                myList.append(i)
            myDict[x] = i
        
        return myList
                