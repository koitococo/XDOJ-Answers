标题	
考勤系统

类别	
时间限制	
1S

内存限制	
256Kb

问题描述	
实验室使用考勤系统对学生进行考勤。考勤系统会记录下每个学生一天内每次进出实验室的时间。
每位学生有一个唯一编号，每条考勤记录包括学生的编号，进入时间、离开时间。
给出所有学生一天的考勤记录，请统计每个学生在实验室工作的时间，并按照工作时间从长到短给出一天的统计表，工作时间相同时按编号从小到大排序。

输入说明	
输入的第一行包含一个整数n，表示考勤记录条数。1≤n≤100，学生的编号为不超过100的正整数。
接下来是n行，每行是一条考勤记录，每条记录包括学生编号k，进入时间t1和离开时间t2三项。
t1和t2格式为“hh:mm”，即两位数表示的小时和两位数表示的分钟。例如14:20表示下午两点二十分，所有时间均为24小时制，且均为同一天内的时间。

输出说明	
输出按工作时间和学生编号排序的统计表。统计表包含若干行，每行为一个学生的出勤记录，由学生编号和总工作时间构成，总工作时间以分钟为单位。

输入样例	
5
3 08:00 11:50
1 09:00 12:00
3 13:50 17:30
1 14:00 18:00
2 17:00 24:00

输出样例	
3 450
1 420
2 420