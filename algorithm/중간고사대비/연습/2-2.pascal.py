def generate(numRows):
    pascal = [[1]*(i+1) for i in range(numRows)] #numRows의 파스칼 삼각형 생성
    for i in range(numRows): #numRows만큼 반복
        for j in range(1, i): #i-1만큼 반복
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j] #윗 두칸의 합이 아래칸 값
    return pascal #반환

numRows = int(input("numRows=")) #rows 값
print(generate(numRows)) #함수 호출