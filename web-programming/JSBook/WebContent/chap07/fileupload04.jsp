<%@ page contentType="text/html; charset=utf-8" %>

<html>
<head>
<title>File Upload</title>
</head>
<body>
<form name="fileForm" method="post" enctype="multipart/form-data" action="fileupload04_process.jsp">
<p>이 름 : <input type="text" name="name">
<p>제 목 :<input type="text" name="subjest">
<p>파 일 :<input type="file" name="filename">
<input type="submit" value="파일올리기">

</form>
</body>
</html>