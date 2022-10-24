def generate(numRows):
    pascal = [[1]*(i+1) for i in range(numRows)] #numRows만큼의 파스칼 삼각형 생성
    for i in range(numRows): #numRows만큼 반복
        for j in range(1, i): #i-1만큼 반복
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j] #윗 두칸의 합이 아래칸의 값
    return pascal
numRows = int(input("numRows: "))#사용자 삼각형의 세로크기만큼(=행) 입력
print(generate(numRows))