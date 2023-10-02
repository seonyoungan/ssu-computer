<%@ page contentType="text/html; charset=utf-8" %>
<%@ page import="java.util.Date" %>
<html>
<head>
<link rel = "stylesheet"
	href = "https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">
<title>Welcome</title>
</head>
<body>
<%@ include file="chap03_07_menu.jsp" %>
<%!
	String greeting ="도서 웹 쇼핑몰";
	String tagline = "Welcome to Web Market";
%>

<div class="jumbotton">
	<div class="container">
	<h1 class = "display-3">
	<%= greeting %>
	</h1>
	</div>
</div>

<div class="containter">
	<div class="text-center">
	<h3>
		<%= tagline %>
	</h3>
</div>

<%@ include file="chap03_07_footer.jsp" %>
</body>
</html>


