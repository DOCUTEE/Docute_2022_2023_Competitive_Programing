myset = set()  # Sử dụng set thay vì list để lưu trữ các từ
while(True):
    input_line = input()  # Nhập xâu từ người dùng
    if not EOFError: 
        break
# Tách các từ và thêm vào set
    print(input_line)
    words = input_line.split()
    for word in words:
        myset.add(word)

# Kiểm tra xem các từ trong "Welcome Hue University of Sciences" có trong myset hay không
test_line = "Welcome Hue University of Sciences"
test_words = test_line.split()
result = all(word in myset for word in test_words)

# In kết quả
if result:
    print("Yes")
else:
    print("No")
