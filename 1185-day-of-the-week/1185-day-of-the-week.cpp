class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
         vector<string> days = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
        if (month < 3) {
            month += 12;
            year--;
        }
        int K = year % 100;
        int J = year / 100;
        int h = (day + 13 * (month + 1) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;
        return days[h];
    }
};