class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        answer = []
        my_dict = {}



        for i, n in enumerate(nums):
            if target - n in my_dict:
                answer.append(i)
                answer.append(my_dict.get(target-n))
                return answer

            my_dict[n] = i
        
        return answer
