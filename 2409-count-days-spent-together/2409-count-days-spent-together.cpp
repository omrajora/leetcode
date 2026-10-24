class Solution {
public: int getDays(string date){
    int month=stoi(date.substr(0,2));
    int day=stoi(date.substr(3,2));
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int total=0;
    for(int i=0;i<month-1;i++){
        total+=days[i];
    }
    total+=day;
    return total;
   }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
 int a1=getDays(arriveAlice);
 int a2=getDays(leaveAlice);
 int b1=getDays(arriveBob);
 int b2 = getDays(leaveBob);
int start = max(a1, b1);
int end = min(a2, b2);
return max(0, end - start + 1);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna