<%@ page contentType="text/html" pageEncoding="UTF-8" import="java.util.ArrayList" %>
<html>
<head>
</head>
<body>
	<h4>구구단 출력하기</h4>
	
	<jsp:useBean id="gugu" class="dao.GuGudan" scope="page"></jsp:useBean>
 	<% 
		gugu.process();
 	
 		ArrayList<String> num = gugu.getNum();
		
 		for (int i=0; i<num.size(); i++) {
	%>
	
	<p><% out.println(num.get(i)); %></p>
	
	
	<%
		}
	%>
</body>
</html>