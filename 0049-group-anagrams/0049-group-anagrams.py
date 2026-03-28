class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        # eat tea tan ate nat bat
        # sort them out we can create a dictionary and store values of it

        # my_dict = {}
        my_dict = defaultdict(list)

        for word in strs:
            # key = sorted(word)
            key = "".join(sorted(word))
            my_dict[key].append(word)

        
        # answer: list[list[str]] = []
        answer = []


        for key in my_dict:
            answer.append(my_dict.get(key))
        
        return answer

        