<%@ page contentType="text/html; charset=utf-8" %>
<html>
<head>
<title>Form Processing</title>
</head>
<body>
	<h3>회원가입</h3>
	<form action = "#" name = "member" method="post">
	<p> 아이디 : <input type="text" name="id"><input type="button" value="아이디 중복검사">
	<p> 비밀번호 : <input type="password" name="passwd">
	<p> 이름 : <input type="text" name="name=">
	<p> 연락처 : <input type="text" maxlength="4" size="4" name="phone1"> -
				<input type="text" maxlength="4" size="4" name="phone2"> -
				<input type="text" maxlength="4" size="4" name="phone3">
	<p> 성별 : <input type="radio" name="sex" value="여성" checked>여성
				<input type="radio" name="sex" value="남성"> 남성
	<p> 취미 : <input type="checkbox" name="hobby1" checked value="운동"> 운 
				<input type="checkbox" name="hobby2" checked value="독서"> 독서
				<input type="checkbox" name="hobby3" checked value="영화"> 영화
	<p> <input type="submit" value="가입하기">
		<input type="reset" value="다시쓰기">
				
	</form>
</body>
</html>