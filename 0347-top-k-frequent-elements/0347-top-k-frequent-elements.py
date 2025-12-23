class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        # first step make a freqmap
        mydict = {}
        for x in nums:
            mydict[x] = mydict.get(x,0) + 1
        
        # put it in heap
        maxheap = []
        for key, val in mydict.items():
            heapq.heappush(maxheap, (-val, key))
        

        # return the top ones
        result = []
        for i in range(k):
            freq, num = heapq.heappop(maxheap)
            result.append(num)


        return result