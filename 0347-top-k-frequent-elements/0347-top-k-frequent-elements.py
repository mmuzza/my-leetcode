class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        my_dict = defaultdict(int)


        # Create a frequency map
        for n in nums:
            my_dict[n] += 1
        

        # max_heap = [(v,k) for k,v in my_dict.items()]
        # heapq.heapify(max_heap)


        max_heap = []
        for key in my_dict:
            heapq.heappush(max_heap, (-my_dict.get(key), key))
        
        answer = []
        i = 0
        for i in range(k):
            val, key = heapq.heappop(max_heap)
            answer.append(key)

        
        return answer







        