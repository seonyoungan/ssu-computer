<%@ page contentType="text/html; charset=utf-8"%>

<html>
<head>
	<title>validation</title>
	<script type="text/javascript">
	/* 1. 데이터 유무 확인하기 */
		function checkLogin(){
				var form = document.loginForm;
				if (form.id.value == ""){
					alert("아이디를 입력해주세요.");
					form.id.focus();
					return false;
				}
				else if(form.passwd.value == ""){
					alert("비밀번호를 입력해주세요.");
					form.passwd.focus();
					return false;
				}
				form.submit();
			}
	</script>
</head>
<body>
	<form name="loginForm" action="validation02_process.jsp" method="post">
		<p> 아이디 : <input type="text" name="id" >
		<p> 비밀번호 : <input type="password" name="passwd">
		<p> <input type="button" value="전송" onclick="checkLogin()">
	</form>
</body>
</html>