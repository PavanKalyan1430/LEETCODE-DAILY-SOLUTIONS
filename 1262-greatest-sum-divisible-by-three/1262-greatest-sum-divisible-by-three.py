class Solution:
    def maxSumDivThree(self, nums: List[int]) -> int:

        total = sum(nums)

        if total % 3  == 0:
            return total
        

        smallest_one = float("inf")
        smallest_two = float("inf")

        for i in nums:
            if i % 3 == 1:
                smallest_two = min(smallest_two , smallest_one + i)
                smallest_one = min(smallest_one, i)
            
            elif i % 3 == 2:
                smallest_one = min(smallest_one , smallest_two + i)
                smallest_two = min(smallest_two, i)
        



        if total % 3 == 1:
            return total - smallest_one
        elif total % 3 == 2:
            return total- smallest_two
        
        


        