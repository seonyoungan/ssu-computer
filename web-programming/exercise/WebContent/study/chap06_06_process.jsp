<%@ page language="java" contentType="text/html" pageEncoding="UTF-8" %>

<html>
<head>
</head>
<body>
선택한과일 <p>
<%	
	request.setCharacterEncoding("utf-8");
	String []f = request.getParameterValues("f");
	
	if (f != null){
		for (int i=0; i<f.length;i++){
			out.println(" " + f[i]);
		}
	}
%>
</body>
</html>