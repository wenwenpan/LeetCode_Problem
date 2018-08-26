//#define _CRT_SECURE_NO_WARNINGS  /*防止scanf报错*/
#include<stdio.h>
#include<stdlib.h>

/*
int* twoSum(int* nums, int numsSize, int target) {
int *a = (int*)malloc(2*sizeof(int));
for(int i = 0;i<numsSize;i++)
{
for(int j = i+1;(j<numsSize && j != i);j++)
{
if(nums[i] + nums[j] == target)
{
a[0] = i;
a[1] = j;
}
}
}
return a;
}*/

int* twoSum(int* nums, int numsSize, int target) {
	int i, j;
	int *flag = (int*)malloc(2 * sizeof(int));
	for (i = 0; i<numsSize; i++)
		for (j = i + 1; j<numsSize; j++)
		{
			if (((nums[i] + nums[j]) == target) && (i != j))
			{
				flag[0] = i; flag[1] = j; break;
			}
		}
	return flag;

}
/*
int* twoSum(int* nums, int numsSize, int target) {
int i, j;
int flag1 = 0; int flag2 = 0;
int flag[2] = { 0,0 };
for (i = 0; i<numsSize; i++)
for (j = 0; j<numsSize; j++)
{
if (((nums[i] + nums[j]) == target) && (i != j))
{
flag1 = i; flag2 = j;break;
}
}
return (flag);
}
*/
int main() {
	int numsSize = 4;
	int nums[] = { 2,7,11,15 };
	int target = 9;
	int* a;
	a=twoSum(nums, numsSize, target);
	printf("%d %d\n", a[0], a[1]);
	system("pause");
	return 0;
}