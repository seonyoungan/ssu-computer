<html>
<head>
<title>Scripting Tag</title>
</head>
<body>
<%!
	String hi = "Hello, Java String Page";
	String getString(String data){
	return data;
}
%>
<%--스크립틀릿 태그로 출력 --%>
<p><% out.println(hi); %> <%-- 변수로 가져오기 --%>
<p><% out.println(getString(hi)); %> <%--메소드로 가져오기 --%>


</body>
</html>