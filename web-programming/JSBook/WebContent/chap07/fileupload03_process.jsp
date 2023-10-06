<%@page contentType="text/html; charset=utf-8" %>
<%@page import="org.apache.commons.fileupload.*"%>
<%@page import="java.util.*"%>
<%@page import="java.io.*"%>

<html>
<head>
<title>File upload</title>
</head>
<body>
<%
	String fileUploadPath="/Users/anseon-yeong/Desktop";

	DiskFileUpload upload = new DiskFileUpload();
	List items = upload.parseRequest(request);
	Iterator params = items.iterator();
	
	while(params.hasNext()){
		FileItem fileItem = (FileItem) params.next();
		if(!fileItem.isFormField()){
			
			String fileName = fileItem.getName();
			fileName = fileName.substring(fileName.lastIndexOf("//") + 1);
			//out.println(fileName+"<br>");
			File file = new File(fileUploadPath + "/new_" + fileName);
			fileItem.write(file);
		}
	}
%>
</body>
</html>