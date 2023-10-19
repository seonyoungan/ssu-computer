<%@ page import="java.util.Date" contentType="text/html" pageEncoding="UTF-8" %>
<html>
<head>
</head>
<body>

<% response.setIntHeader("Refresh", 5); %>
현재시간 : <%= new Date() %>
<p> <a href="chap05_05_process.jsp">네이버 홈페이지로 이동하기</a>
</body>
</html>