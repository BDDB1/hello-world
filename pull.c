/*
描述
给出一个整型数组 numbers 和一个目标值 target，请在数组中找出两个加起来等于目标值的数的下标，返回的下标按升序排列。
（注：返回的数组下标从1开始算起，保证target一定可以由数组里面2个数字相加得到）

数据范围:
2 <= len(numbers) <= 10^5,
-10 <= numbers[i] <= 10^9,
0 <= target <= 10^9
要求:
空间复杂度 O(n)，时间复杂度 O(nlogn)
示例1:
输入:   [3,2,4],6
返回值:  [2,3]
说明:   因为 2+4=6 ，而 2的下标为2 ， 4的下标为3 ，又因为 下标2 < 下标3 ，所以返回[2,3]
示例2:
输入:   [20,70,110,150],90
返回值:  [1,2]
说明:   20+70=90
*/
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        map<int, int> mymap;
	vector<int> re;
	int i;
	for (i = 0; i < numbers.size(); ++i) {
		mymap[numbers[i]] = i+1;
	}
	
	
	for (i = 0; i < numbers.size(); ++i) {
		int a = numbers[i];
		int b = target - a;
		map<int, int>::iterator map_it = mymap.begin();
		map_it = mymap.find(b);
		if (map_it != mymap.end()) {
			int index1 = i+1;
			int index2 = map_it->second;
			if (index1 < index2) {
				re.push_back(index1);
				re.push_back(index2);
			} else if(index1 > index2) {
				re.push_back(index2);
				re.push_back(index2);
			} else {
				continue;
			}
			break;
		}
	}
	return re;
    }
};
