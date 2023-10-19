<%@ page language="java" contentType="text/html" pageEncoding="UTF-8" %>

<html>
<head>
</head>
<body>
아이디 :<%= request.getParameter("name") %>
<p>이메일 : <%= request.getParameter("mail") %>
<p> 주소 : <%= request.getParameter("add") %>
</body>
</html>