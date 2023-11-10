<%@ page contentType="text/html; charset=utf-8" %>
<%@ page isErrorPage="true" %>
<html>
<head>
<title>Exception</title>
</head>
<body>
	<p>오류가 발생하였습니다.
	<p>예외: <%=exception.getClass().getName() %>
	<p> toString() : <%=exception.toString() %>
	<p> getClass().getName() : <%=exception.getClass().getName() %>
</body>
</html>