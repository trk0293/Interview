class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        
        if len(nums) < 3:
            return None
        
        #m = [[] for i in range(max(nums)*20)]
    
        m = collections.defaultdict(list)
        
        for i in range(len(nums)):
            for j in range(i,len(nums)):
                if(i!=j):
                    sums = nums[i] + nums[j]
                    #print(m.get(sums))
                    #print(sums)
                    m[sums].append([i,j])
                    #print(m[sums])
                    #print('****')
                else:
                    pass
        i = 0
        j = 0
        #print(m)
        l ={} #listMap to track duplicates
        li = []
        idx = 0
        for num in nums:
            if m[0-num]:
                for i,j in m[0-num]:
                    if idx ==i or idx ==j:
                        continue
                    ltemp = [nums[i],nums[j],num]
                    tNum = [nums[i],nums[j],num]
                    tNum.sort()
                    
                    # s is the key
                    s=" "
                    for item in tuple(tNum):
                        s += str(item)+','
                    #print(s)
                    
                    if s not in l:
                        li.append(ltemp)
                        l[s] = 1
            idx +=1
        
        return li
    
                
            
        
