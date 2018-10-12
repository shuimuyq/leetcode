class Solution:
    def twoSum(self, nums, target):
        maps = {}
        print(nums)
        for integer in range(len(nums)):
            conjugate = target - nums[integer]
            if conjugate in maps.keys():
                return  [maps[conjugate], integer]
            maps[nums[integer]] = integer
        return None
