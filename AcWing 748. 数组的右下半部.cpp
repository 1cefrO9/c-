//输入一个二维数组 M[12][12]，根据输入的要求，求出二维数组的右下半部分元素的平均值或元素的和。
//
//右下半部分是指次对角线下方的部分，如下图所示，黄色部分为对角线，绿色部分为右下半部分：
//
//UOJ_1186.png
//
//输入格式
//第一行输入一个大写字母，若为 S，则表示需要求出右下半部分的元素的和，若为 M，则表示需要求出右下半部分的元素的平均值。
//
//接下来 12 行，每行包含 12 个用空格隔开的浮点数，表示这个二维数组，其中第 i+1 行的第 j+1 个数表示数组元素 M[i][j]。
//
//输出格式
//输出一个数，表示所求的平均数或和的值，保留一位小数。
//
//数据范围
//−100.0≤M[i][j]≤100.0
//输入样例：
//S
//9.7 -4.9 6.1 -6.1 -9.6 1.0 -3.2 0.6 3.2 -9.8 4.9 1.2
//-2.8 -5.3 2.8 -1.9 -5.4 7.5 -2.0 5.7 2.3 5.3 -7.5 8.9
//6.0 4.3 3.8 -6.7 8.1 -0.5 7.8 -2.2 -1.0 4.0 -4.9 -9.4
//5.4 3.7 -6.5 -3.9 -3.3 4.1 -2.5 -4.7 8.2 1.4 1.8 4.7
//2.4 9.0 -4.3 9.6 8.6 -6.1 -7.4 8.6 5.6 0.5 -0.4 5.2
//-5.2 2.9 -5.6 4.0 -0.2 3.8 -4.1 -1.6 -3.8 -3.1 -1.1 3.3
//-9.4 -1.4 0.6 6.5 -4.3 -8.3 6.1 2.9 -5.2 2.5 9.8 -7.7
//-2.9 -3.6 7.9 -5.8 -4.7 8.2 -6.2 1.0 7.4 -1.0 -4.4 -4.5
//0.1 9.5 4.9 1.5 0.8 -8.2 0.4 9.5 -0.8 -0.9 9.7 -2.1
//0.1 -7.6 7.8 -6.9 5.5 1.4 4.0 7.8 1.0 -1.2 9.7 -1.9
//-4.6 2.3 -5.5 8.2 -4.8 -3.7 5.4 0.2 -2.4 -0.8 7.4 0.0
//-0.1 8.2 0.8 -3.5 -7.6 -0.5 5.6 8.4 -8.6 0.9 9.0 -7.5
//输出样例：
//53.0
