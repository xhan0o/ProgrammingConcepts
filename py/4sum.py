def fourSum(nums,target):
    d = dict()
    for i in range(len(nums)):
        for j in range(i+1,len(nums)):
            sum2 = nums[i] + nums[j]
            if sum2 in d:
                d[sum2].append((i,j))
            else:
                d[sum2] = [(i,j)]
    print d
    result = set()

    for key in d:
        value = target - key
        if value in d:
            list1 = d[key]
            list2 = d[value]
            for (i,j) in list1:
                for (k,l) in list2:
                    if i!=k and i!=l and j!=k and j!=l:
                        flist = [nums[i],nums[j],nums[k],nums[l]]
                        flist.sort()
                        result.add(tuple(flist))
    print len(result)
    return list(result)

    # for key in d:

print   fourSum([-1, -2, -3, -4, 1, 2, 3,4, 0], 0)
