<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="com.oreilly.servlet.*" %>
<%@ page import="com.oreilly.servlet.multipart.*" %>
<%@ page import="java.io.*" %>
<%@ page import="java.util.*" %>

<%
DefaultFileRenamePolicy policy = new DefaultFileRenamePolicy();

MultipartRequest multi = new MultipartRequest(request, "경로");
String file = (String) multi.getFileNames().nextElement();

%>

<p> 요청 파라미터 이름 : <%= file %>
<p> 실제 파일 이름 : <%= multi.getOriginalFileName(file) %>
<p> 저장 파일 이름 : <%= multi.getFilesystemName(file) %>
<p> 파일 콘텐츠 유형 <%= multi.getContentType(file) %>
<p> 파일 크기 : <%= file.length() %>