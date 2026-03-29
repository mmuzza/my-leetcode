class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:


        # input:          1    2    3    4

        # left array:    24    12   4    1
        # right array:    1     1   2    6
        # left * right:  24    12   8    6
   
        left = [1]
        right = [1]
        output = []

        result = 1

        # for n in nums[1:]
        #     result +=  * result
        #     left.inser

        #  for i,n in enumerate(nums)

        for i in range(1, len(nums)):
            result = nums[i-1] * result
            left.append(result)

        result = 1
        for i in range(len(nums)-2,-1,-1):
            result = nums[i+1] * result
            right.insert(0,result)
        
        # print(left)
        # print(right)


        for i in range(len(nums)):
            output.append(left[i] * right[i])

        return output

        


        

