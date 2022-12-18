"""
Whether a person can attend all meetings
"""


class Solution:
    def canAttendMeetings(self, intervals: list[list[int]]) -> bool:
        start=[]
        end=[]

        # Get the the start time for each meeting
        for i in range(len(intervals)):
            start.append(intervals[i][0])
            end.append(intervals[i][1])
        #Sort the start and end time
        start.sort()
        end.sort()

        # If the start time of the next meeting is less than the end time of the previous meeting, 
        # then return false
        for i in range(1,len(start)):
            if(start[i]<end[i-1]):
                return False
        return True
    

    def minMeetingRooms(self,intervals:list[list[int]])->bool:
        start=[]
        end=[]
        count =0;

        for i in range(len(intervals)):
            start.append(intervals[i][0])
            end.append(intervals[i][1])
        
        for i in range(1,len(start)):
            if(start[i]<end[i-1]):
                count+=1
        return count


if __name__ == "__main__":
    print(Solution().canAttendMeetings([[0,30],[5,10],[15,20]]))
    print(Solution().canAttendMeetings([[7,10],[2,4]]))

