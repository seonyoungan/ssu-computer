<%@ page contentType="text/html; charset=utf-8" %>
<%@ page import="com.oreilly.servlet.*"%>
<%@ page import="com.oreilly.servlet.multipart.*" %>
<%@ page import="java.util.*"%>
<%@ page import="java.io.*"%>

<html>
<head>
	<title>File upload</title>
</head>
<body>
	<%
		MultipartRequest multi = new MultipartRequest(request, "/Users/anseon-yeong/Desktop", 5 * 1024 * 1024, "utf-8", new DefaultFileRenamePolicy() );

		String name1 = multi.getParameter("name1");
		String subjest1 = multi.getParameter("subjest1");
		
		String name2 = multi.getParameter("name2");
		String subjest2 = multi.getParameter("subjest2");
		
		String name3 = multi.getParameter("name3");
		String subjest3 = multi.getParameter("subjest3");
		
		Enumeration files = multi.getFileNames();
		
		String file3 = (String) files.nextElement();
		String filename3 = multi.getFilesystemName(file3);
		
		String file2 = (String) files.nextElement();
		String filename2 = multi.getFilesystemName(file2);
		
		String file1 = (String) files.nextElement();
		String filename1 = multi.getFilesystemName(file1);
	%>
	
	<table border="1">
		<tr>
			<th width="100"> 이름</th>
			<th width="100"> 제목</th>
			<th width="100"> 파일</th>
		</tr>
		
		<%
			out.print("<tr><td>" + name1 + "</td>");
			out.print("<td>" + subjest1 + "</td>");
			out.print("<td>" + filename1 + "</td></tr>\n");
			
			out.print("<tr><td>" + name2 + "</td>");
			out.print("<td>" + subjest2 + "</td>");
			out.print("<td>" + filename2 + "</td></tr>\n");
			
			out.print("<tr><td>" + name3 + "</td>");
			out.print("<td>" + subjest3 + "</td>");
			out.print("<td>" + filename3 + "</td></tr>\n");
		%>
	</table>
</body>
</html>