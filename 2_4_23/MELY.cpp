class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size(); //kích thước của vector temperatures
        stack<int>st; //Khởi tạo stack
        vector<int>cnt(n);
        cnt[n-1] = 0; //Sẽ không có ngày nào ấm hơn ngày cuối cùng nên cnt[n-1] = 0
        st.push(n-1); //Đưa chỉ số của ngày cuối vào stack st
        for(int i = n-2; i >= 0; i--){
            //Vòng while giúp lấy ra các phần tử làm mất tính đơn điệu (cụ thể là giảm dần) của stack st
            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) st.pop();
            if (st.empty()) cnt[i] = 0; //Nếu stack rỗng --> không có ngày nào về sau ấm hơn ngày thứ i
                else cnt[i] = st.top() - i; //Suy ra ngày đầu tiên sau ngày thứ i ấm hơn ngày thứ i là ngày thứ st.top()
                //Bonus: Khoảng cách giữa 2 ngày i và j (i < j) sẽ bằng j - i            
            st.push(i);//Đưa ngày thứ i vào trong hàng đợi
        }
        return cnt;//trả về kết quả của bài toán
    }
};