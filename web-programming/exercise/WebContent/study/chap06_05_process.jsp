<%@ page language="java" import="java.util.Enumeration" contentType="text/html" pageEncoding="UTF-8" %>

<html>
<head>
</head>
<body>
<% 
	
	request.setCharacterEncoding("UTF-8");
	Enumeration enumer = request.getParameterNames();
	
	while(enumer.hasMoreElements()){
		String name = (String)enumer.nextElement();
		String pvalue = request.getParameter(name);
		out.println(name + " : " + pvalue + "<br>");
		
	}
%>
</body>
</html>