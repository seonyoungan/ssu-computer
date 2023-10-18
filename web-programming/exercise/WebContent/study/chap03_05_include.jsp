<%@ page contentType="text/html" pageEncoding="UTF-8" import="java.util.Date" errorPage="chap03_05_errorPage.jsp" %>

<html>
<head>
</head>
<body>

<%@ include file="chap03_05_header.jsp" %>
현재 시간: <%= new Date() %>

<%@ page info="에러발생시켜보기" %>
<%-- <%
	String str = null;
	out.println(str.toString());
%> --%>
</body>
</html>