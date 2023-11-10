<%@ page contentType="text/html; charset=utf-8" %>
<html>
<head>
<title>Exception</title>
</head>
<body>
	<p>잘못된 데이터가 있습니다.
	<p> <%="숫자1 : " + request.getParameter("num1") %>
	<p> <%="숫자1 : " + request.getParameter("num2") %>
</body>
</html>