<%@ page language="java" pageEncoding="UTF-8" contentType="text/html; charset=UTF-8"  %>
<html>
<head>
</head>
<body>
<% String param = request.getQueryString(); %>
전송된 요청 파라미터 : <%= param %>
</body>
</html>